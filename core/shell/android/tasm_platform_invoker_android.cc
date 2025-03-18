// Copyright 2024 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.

#include "core/shell/android/tasm_platform_invoker_android.h"

#include <memory>
#include <utility>
#include <vector>

#include "core/base/android/java_only_map.h"
// TODO(heshan):Temporarily utilize the JNI methods of TemplateAssembler.
//              Introduce TasmPlatformInvoker.java as a replacement
//              subsequently.
#include "base/include/platform/android/jni_convert_helper.h"
#include "core/build/gen/TasmPlatformInvoker_jni.h"
#include "core/renderer/dom/android/lepus_message_consumer.h"
#include "core/renderer/utils/android/value_converter_android.h"
#include "core/shell/android/page_config_converter_android.h"
#include "core/template_bundle/template_codec/binary_decoder/page_config_constants.h"

namespace lynx {
namespace shell {

namespace {

// TODO(heshan): Currently duplicated in native_facade_android.cc.
//               Refactor into a shared method in the future.
lepus::Value ConvertJavaData(JNIEnv* env, jobject j_data, jint length) {
  if (j_data == nullptr || length <= 0) {
    return lepus::Value();
  }

  char* data = static_cast<char*>(env->GetDirectBufferAddress(j_data));
  if (data == nullptr) {
    return lepus::Value();
  }

  lynx::tasm::LepusDecoder decoder;
  return decoder.DecodeMessage(data, length);
}

}  // namespace

void TasmPlatformInvokerAndroid::RegisterJni(JNIEnv* env) {
  (void)RegisterNativesImpl(env);
}

void TasmPlatformInvokerAndroid::OnPageConfigDecoded(
    const std::shared_ptr<tasm::PageConfig>& config) {
  Java_TasmPlatformInvoker_onPageConfigDecoded(
      base::android::AttachCurrentThread(), jni_object_.Get(),
      ConvertPageConfigToJavaOnlyMap(config).jni_object());
}

std::string TasmPlatformInvokerAndroid::TranslateResourceForTheme(
    const std::string& res_id, const std::string& theme_key) {
  if (res_id.empty()) {
    return std::string();
  }
  JNIEnv* env = base::android::AttachCurrentThread();
  auto j_res_id =
      base::android::JNIConvertHelper::ConvertToJNIStringUTF(env, res_id);
  auto j_theme_key =
      base::android::JNIConvertHelper::ConvertToJNIStringUTF(env, theme_key);
  auto j_ret = Java_TasmPlatformInvoker_translateResourceForTheme(
      env, jni_object_.Get(), j_res_id.Get(), j_theme_key.Get());
  return base::android::JNIConvertHelper::ConvertToString(env, j_ret.Get());
}

lepus::Value TasmPlatformInvokerAndroid::TriggerLepusMethod(
    const std::string& method_name, const lepus::Value& args) {
  if (args.IsTable() && args.Table()->size() > 0) {
    JNIEnv* env = base::android::AttachCurrentThread();
    base::android::JavaOnlyMap jni_hashmap =
        tasm::android::ValueConverterAndroid::ConvertLepusToJavaOnlyMap(args);
    auto java_method = base::android::JNIConvertHelper::ConvertToJNIStringUTF(
        env, method_name);
    base::android::ScopedLocalJavaRef<jobject> j_data =
        Java_TasmPlatformInvoker_triggerLepusBridge(env, jni_object_.Get(),
                                                    java_method.Get(),
                                                    jni_hashmap.jni_object());
    if (j_data.Get()) {
      jlong length = env->GetDirectBufferCapacity(j_data.Get());
      if (length > 0) {
        return ConvertJavaData(env, j_data.Get(), length);
      }
    }
  }
  return lepus::Value();
}

void TasmPlatformInvokerAndroid::TriggerLepusMethodAsync(
    const std::string& method_name, const lepus::Value& args) {
  if (args.IsTable() && args.Table()->size() > 0) {
    JNIEnv* env = base::android::AttachCurrentThread();
    base::android::JavaOnlyMap jni_hashmap =
        tasm::android::ValueConverterAndroid::ConvertLepusToJavaOnlyMap(args);
    auto java_method = base::android::JNIConvertHelper::ConvertToJNIStringUTF(
        env, method_name);
    Java_TasmPlatformInvoker_triggerLepusBridgeAsync(
        env, jni_object_.Get(), java_method.Get(), jni_hashmap.jni_object());
  }
}

void TasmPlatformInvokerAndroid::GetI18nResource(
    const std::string& channel, const std::string& fallback_url) {
  JNIEnv* env = base::android::AttachCurrentThread();
  auto java_channel =
      base::android::JNIConvertHelper::ConvertToJNIStringUTF(env, channel);
  auto java_fallback_url =
      base::android::JNIConvertHelper::ConvertToJNIStringUTF(env, fallback_url);
  Java_TasmPlatformInvoker_getI18nResourceByNative(
      env, jni_object_.Get(), java_channel.Get(), java_fallback_url.Get());
}

}  // namespace shell
}  // namespace lynx
