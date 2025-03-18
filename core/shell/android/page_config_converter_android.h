// Copyright 2025 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.

#ifndef CORE_SHELL_ANDROID_PAGE_CONFIG_CONVERTER_ANDROID_H_
#define CORE_SHELL_ANDROID_PAGE_CONFIG_CONVERTER_ANDROID_H_
#include <memory>

#include "core/base/android/java_only_map.h"
#include "core/renderer/page_config.h"

namespace lynx {
namespace shell {

base::android::JavaOnlyMap ConvertPageConfigToJavaOnlyMap(
    const std::shared_ptr<tasm::PageConfig>& config);
}  // namespace shell
}  // namespace lynx

#endif  // CORE_SHELL_ANDROID_PAGE_CONFIG_CONVERTER_ANDROID_H_
