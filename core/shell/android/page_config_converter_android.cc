// Copyright 2025 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.
#include "core/shell/android/page_config_converter_android.h"

#include <memory>

#include "core/template_bundle/template_codec/binary_decoder/page_config_constants.h"
namespace lynx {
namespace shell {

#define PUSH_TO_CONFIG(config, resultMap, name, type, key, default) \
  if (config->Get##name() != default) {                             \
    resultMap.Push##type(key, config->Get##name());                 \
  }
#define PUSH_TO_CONFIG_WITH_VALUE(config, resultMap, name, type, key, default, \
                                  condition)                                   \
  if (config->Get##name() != default) {                                        \
    resultMap.Push##type(key, condition);                                      \
  }

base::android::JavaOnlyMap ConvertPageConfigToJavaOnlyMap(
    const std::shared_ptr<tasm::PageConfig>& config) {
  base::android::JavaOnlyMap map;
  // TODO:: Generate push by script
  PUSH_TO_CONFIG(config, map, AutoExpose, Boolean, tasm::kAutoExpose, true);
  PUSH_TO_CONFIG(config, map, Version, String, tasm::kVersion, "");
  PUSH_TO_CONFIG(config, map, EnableEventThrough, Boolean,
                 tasm::kEnableEventThrough, false);
  auto version = lynx::base::Version(config->GetTargetSDKVersion());
  PUSH_TO_CONFIG_WITH_VALUE(
      config, map, AsyncRedirectUrl, Boolean, tasm::kAsyncRedirectUrl,
      tasm::TernaryBool::UNDEFINE_VALUE,
      (config->GetAsyncRedirectUrl() == tasm::TernaryBool::TRUE_VALUE));
  PUSH_TO_CONFIG(config, map, SyncImageAttach, Boolean, tasm::kSyncImageAttach,
                 true);
  PUSH_TO_CONFIG(config, map, EnableCheckLocalImage, Boolean,
                 tasm::kEnableCheckLocalImage, true);
  PUSH_TO_CONFIG(config, map, UseImagePostProcessor, Boolean,
                 tasm::kUseImagePostProcessor, false);
  PUSH_TO_CONFIG_WITH_VALUE(config, map, DSL, String, tasm::kPageType,
                            tasm::PackageInstanceDSL::TT,
                            GetDSLName(config->GetDSL()));
  PUSH_TO_CONFIG(config, map, UseNewSwiper, Boolean, tasm::kUseNewSwiper, true);
  PUSH_TO_CONFIG(config, map, EnableAsyncInitTTVideoEngine, Boolean,
                 tasm::kEnableAsyncInitVideoEngine, false);
  PUSH_TO_CONFIG(config, map, TargetSDKVersion, String, tasm::kTargetSdkVersion,
                 "");
  PUSH_TO_CONFIG(config, map, EnableNewGesture, Boolean,
                 tasm::kEnableNewGesture, false);
  PUSH_TO_CONFIG(config, map, EnableLepusNG, Boolean, tasm::kEnableLepusNg,
                 true);
  PUSH_TO_CONFIG(config, map, TapSlop, String, tasm::kTapSlop, "");
  PUSH_TO_CONFIG(config, map, DefaultOverflowVisible, Boolean,
                 tasm::kDefaultOverflowVisible, false);
  PUSH_TO_CONFIG(config, map, EnableScrollFluencyMonitor, Double,
                 tasm::kEnableLynxScrollFluency, -1);
  PUSH_TO_CONFIG(config, map, EnableCreateViewAsync, Boolean,
                 tasm::kEnableCreateViewAsync, true);
  PUSH_TO_CONFIG(config, map, EnableVsyncAlignedFlush, Boolean,
                 tasm::kEnableVsyncAlignedFlush, false);
  PUSH_TO_CONFIG(config, map, CSSAlignWithLegacyW3C, Boolean,
                 tasm::kCSSAlignWithLegacyW3C, false);
  PUSH_TO_CONFIG(config, map, EnableAccessibilityElement, Boolean,
                 tasm::kEnableAccessibilityElement, true);
  PUSH_TO_CONFIG(config, map, EnableOverlapForAccessibilityElement, Boolean,
                 tasm::kEnableOverlapForAccessibilityElement, true);
  PUSH_TO_CONFIG(config, map, EnableNewAccessibility, Boolean,
                 tasm::kEnableNewAccessibility, false);
  PUSH_TO_CONFIG(config, map, EnableA11yIDMutationObserver, Boolean,
                 tasm::kEnableA11yIDMutationObserver, false);
  PUSH_TO_CONFIG(config, map, EnableA11y, Boolean, tasm::kEnableA11y, false);
  PUSH_TO_CONFIG(config, map, EnableTextRefactor, Boolean,
                 tasm::kEnableTextRefactor, false);
  PUSH_TO_CONFIG(config, map, EnableTextOverflow, Boolean,
                 tasm::kEnableTextOverflow, false);
  PUSH_TO_CONFIG_WITH_VALUE(
      config, map, EnableTextBoringLayout, Boolean,
      tasm::kEnableTextBoringLayout, tasm::TernaryBool::UNDEFINE_VALUE,
      (config->GetEnableTextBoringLayout() == tasm::TernaryBool::TRUE_VALUE));
  PUSH_TO_CONFIG(config, map, EnableNewClipMode, Boolean,
                 tasm::kEnableNewClipMode, false);
  PUSH_TO_CONFIG(config, map, KeyboardCallbackUseRelativeHeight, Boolean,
                 tasm::kKeyboardCallbackPassRelativeHeight, false);
  PUSH_TO_CONFIG(config, map, EnableEventRefactor, Boolean,
                 tasm::kEnableEventRefactor, true);
  PUSH_TO_CONFIG(config, map, EnableDisexposureWhenLynxHidden, Boolean,
                 tasm::kEnableDisexposureWhenLynxHidden, true);
  PUSH_TO_CONFIG(config, map, EnableExposureWhenLayout, Boolean,
                 tasm::kEnableExposureWhenLayout, false);
  PUSH_TO_CONFIG(config, map, EnableNewIntersectionObserver, Boolean,
                 tasm::kEnableNewIntersectionObserver, false);
  PUSH_TO_CONFIG(config, map, ObserverFrameRate, Int, tasm::kObserverFrameRate,
                 20);
  PUSH_TO_CONFIG(config, map, EnableExposureUIMargin, Boolean,
                 tasm::kEnableExposureUIMargin, false);
  PUSH_TO_CONFIG(config, map, LongPressDuration, Int, tasm::kLongPressDuration,
                 -1);
  PUSH_TO_CONFIG(config, map, MapContainerType, Int, tasm::kMapContainerType,
                 0);
  if (config->GetIncludeFontPadding() != 0) {
    map.PushBoolean(tasm::kIncludeFontPadding,
                    config->GetIncludeFontPadding() == 1);
  } else if (version >= LYNX_VERSION_2_4 && version < LYNX_VERSION_2_9) {
    // for history reason
    map.PushBoolean(tasm::kIncludeFontPadding, true);
  }
  if (version < LYNX_VERSION_2_5) {
    map.PushBoolean(tasm::kEnableFlattenTranslateZ, false);
  }
  PUSH_TO_CONFIG(config, map, EnableFiberArch, Boolean, tasm::kEnableFiber,
                 false);
  PUSH_TO_CONFIG(config, map, EnableMultiTouch, Boolean,
                 tasm::kEnableMultiTouch, false);
  return map;
}

}  // namespace shell
}  // namespace lynx
