// Copyright 2025 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.
#ifndef CORE_TEMPLATE_BUNDLE_TEMPLATE_CODEC_BINARY_DECODER_PAGE_CONFIG_CONSTANTS_H_
#define CORE_TEMPLATE_BUNDLE_TEMPLATE_CODEC_BINARY_DECODER_PAGE_CONFIG_CONSTANTS_H_

#include <cstdint>

namespace lynx {
namespace tasm {
static constexpr const char* kEnableFiber = "enableFiber";
static constexpr const char* kEnableFlattenTranslateZ =
    "enableFlattenTranslateZ";
static constexpr const char* kPageType = "pageType";
static constexpr const char* kTargetSdkVersion = "targetSdkVersion";
static constexpr const char* kEnableLepusNg = "enableLepusNG";
static constexpr const char* kDefaultOverflowVisible = "defaultOverflowVisible";
static constexpr const char* const kEnableEventRefactor = "enableEventRefactor";
static constexpr const char* const kAsyncRedirectUrl = "asyncRedirect";
static constexpr const char* const kVersion = "version";
static constexpr const char* const kFlatten = "flatten";
static constexpr const char* const kImplicit = "implicit";
static constexpr const char* const kLepusCheck = "lepusStrict";
static constexpr const char* const kLepusQuickjsStackSize =
    "lepusQuickjsStacksize";
static constexpr const char* const kNullPropAsUndef = "lepusNullPropAsUndef";
static constexpr const char* const kDataStrictMode = "dataStrictMode";
static constexpr const char* const kAbsoluteInContentBound =
    "absoluteInContentBound";
static constexpr const char* const kQuirksMode = "quirksMode";
static constexpr const char* const kEnableAsyncDisplay = "enableAsyncDisplay";
static constexpr const char* const kEnableImageDownsampling =
    "enableImageDownsampling";
static constexpr const char* const kEnableFixedNew = "enableFixedNew";
static constexpr const char* const kEnableNewImage = "enableNewImage";
static constexpr const char* const kLogBoxImageSizeWarningThreshold =
    "redBoxImageSizeWarningThreshold";
static constexpr const char* const kEnableTextNonContiguousLayout =
    "enableTextNonContiguousLayout";
static constexpr const char* const kEnableViewReceiveTouch =
    "enableViewReceiveTouch";
static constexpr const char* const kEnableEventThrough = "enableEventThrough";
static constexpr const char* const kRemoveComponentElement =
    "removeComponentElement";
static constexpr const char* const kStrictPropType = "strictPropType";
static constexpr const char* const kEnableCSSInheritance =
    "enableCSSInheritance";
static constexpr const char* const kCustomCSSInheritanceList =
    "customCSSInheritanceList";
static constexpr const char* const kCSSAlignWithLegacyW3C =
    "cssAlignWithLegacyW3C";
static constexpr const char* const kUseNewImage = "useNewImage";
static constexpr const char* const kSyncImageAttach = "syncImageAttach";
static constexpr const char* const kUseImagePostProcessor =
    "useImagePostProcessor";
static constexpr const char* const kUseNewSwiper = "useNewSwiper";
static constexpr const char* const kEnableAsyncInitVideoEngine =
    "enableAsyncInitVideoEngine";
static constexpr const char* const kCliVersion = "cli";
static constexpr const char* const kReactVersion = "reactVersion";
static constexpr const char* const kCustomData = "customData";
static constexpr const char* const kEnableComponentLifecycleAlignWebview =
    "enableComponentLifecycleAlignWebview";
static constexpr const char* const kEnableListNewArchitecture =
    "enableListNewArchitecture";
static constexpr const char* const kEnableListNewContainer =
    "enableNewListContainer";
static constexpr const char* const kEnableListPlug = "enableListPlug";
static constexpr const char* const kEnableListMoveOperation =
    "enableListMoveOperation";
static constexpr const char* const kEnableCSSStrictMode = "enableCSSStrictMode";
static constexpr const char* const kTapSlop = "tapSlop";
static constexpr const char* const kDefaultTapSlop = "50px";
static constexpr const char* const kEnableCreateViewAsync =
    "enableCreateViewAsync";
static constexpr const char* const kEnableVsyncAlignedFlush =
    "enableVsyncAlignedFlush";
static constexpr const char* const kEnableAccessibilityElement =
    "enableAccessibilityElement";
static constexpr const char* const kEnableOverlapForAccessibilityElement =
    "enableOverlapForAccessibilityElement";
static constexpr const char* const kEnableNewAccessibility =
    "enableNewAccessibility";
static constexpr const char* const kEnableNewLayoutOnly = "enableNewLayoutOnly";
static constexpr const char* const kEnableReactOnlyPropsId =
    "enableReactOnlyPropsId";
static constexpr const char* const kEnableGlobalComponentMap =
    "enableGlobalComponentMap";
static constexpr const char* const kEnableTextRefactor = "enableTextRefactor";
static constexpr const char* const kEnableTextOverflow = "enableTextOverflow";
static constexpr const char* const kEnableTextBoringLayout =
    "enableTextBoringLayout";
static constexpr const char* const kEnableNewClipMode = "enableNewClipMode";
static constexpr const char* const kAutoResumeAnimation = "AutoResumeAnimation";
static constexpr const char* const kEnableNewTransformOrigin =
    "enableNewTransformOrigin";
static constexpr const char* const kEnableCircularDataCheck =
    "enableCircularDataCheck";
static constexpr const char* const kEnableTextLayerRender =
    "enableTextLayerRender";
static constexpr const char* const kEnableReduceInitDataCopy =
    "enableReduceInitDataCopy";
static constexpr const char* const kUnifyVWVHBehavior = "unifyVWVHBehavior";
static constexpr const char* const kFontScaleEffectiveOnlyOnSp =
    "fontScaleEffectiveOnlyOnSp";
static constexpr const char* const kEnableSimultaneousTap =
    "enableSimultaneousTap";
static constexpr const char* const kEnableComponentLayoutOnly =
    "enableComponentLayoutOnly";
static constexpr const char* const kExtendedLayoutOnlyOpt =
    "extendedLayoutOnlyOpt";
static constexpr const char* const kEnableTouchRefactor = "enableTouchRefactor";
static constexpr const char* const kEnableEndGestureAtLastFingerUp =
    "enableEndGestureAtLastFingerUp";
static constexpr const char* const kDisableLongpressAfterScroll =
    "disableLongpressAfterScroll";
static constexpr const char* const kKeyboardCallbackPassRelativeHeight =
    "keyboardCallbackPassRelativeHeight";
static constexpr const char* const kEnableNewIntersectionObserver =
    "enableNewIntersectionObserver";
static constexpr const char* const kObserverFrameRate = "observerFrameRate";
static constexpr const char* const kEnableCheckDataWhenUpdatePage =
    "enableCheckDataWhenUpdatePage";
static constexpr const char* const kForceCalcNewStyleKey = "forceCalcNewStyle";
static constexpr const char* const kIncludeFontPadding = "includeFontPadding";
static constexpr const char* const kEnableBackgroundShapeLayer =
    "enableBackgroundShapeLayer";
static constexpr const char* const kCompileRender = "compileRender";
static constexpr const char* const kEnableLynxResourceServiceProvider =
    "enableLynxResourceServiceProvider";
static constexpr const char* const kEnableTextLanguageAlignment =
    "enableTextLanguageAlignment";
static constexpr const char* const kEnableXTextLayoutReused =
    "enableXTextLayoutReused";
static constexpr const char* const kEnableRemoveComponentExtraData =
    "enableRemoveComponentExtraData";
static constexpr const char* const kEnableExposureUIMargin =
    "enableExposureUIMargin";
static constexpr const char* const kEnableNewGesture = "enableNewGesture";
static constexpr const char* const kLongPressDuration = "longPressDuration";
static constexpr const char* const kMapContainerType = "mapContainerType";
static constexpr const char* const kEnableCheckLocalImage =
    "enableCheckLocalImage";
static constexpr const char* const kEnableAsyncRequestImage =
    "enableAsyncRequestImage";
static constexpr const char* kUserDefinedExtraInfo = "extraInfo";
static constexpr const char* kLepusGCThreshold = "lepusGCThreshold";
static constexpr const char* kEnableComponentNullProp =
    "enableComponentNullProp";
static constexpr const char* kEnableCascadePseudo = "enableCascadePseudo";
static constexpr const char* kRemoveDescendantSelectorScope =
    "removeDescendantSelectorScope";
static constexpr const char* kAutoExpose = TEMPLATE_AUTO_EXPOSE;
static constexpr const char* kEnableUseContextPool = "enableUseContextPool";
static constexpr const char* kEnableUseMapBuffer = "enableUseMapBuffer";
static constexpr const char* kEnableFiberElementForRadonDiff =
    "enableFiberElementForRadonDiff";
static constexpr const char* kEnableLynxScrollFluency =
    "enableLynxScrollFluency";
static constexpr const char* kPreferredFps = "preferredFps";
static constexpr const char* kEnableCSSLazyImport = "enableCSSLazyImport";
static constexpr const char* kEnableNewAnimator = "enableNewAnimator";
static constexpr const char* kDisableQuickTracingGC = "disableQuickTracingGC";

static constexpr const char* kFixCSSImportRuleOrder = "fixCSSImportRuleOrder";

/// Upload global feature switches in PageConfig with common data about lynx
/// view. If you add a new  global feature switch, you should add it to report
/// event.
static constexpr const char* kLynxSDKGlobalFeatureSwitchEvent =
    "lynxsdk_global_feature_switch_statistic";

static constexpr const char* kEnableReloadLifecycle = "enableReloadLifecycle";

// @name: enableA11y
// @description: Enable Android A11y
// @platform: Android
// @supportVersion: 2.10
// TODO(dingwang): Default value should be set to true in the future.
static constexpr const char* const kEnableA11y = "enableA11y";

/**
 * @name: enableA11yIDMutationObserver
 * @description: Enable MutationObserver for accessibility
 * @platform: Both
 * @supportVersion: 2.8
 **/
static constexpr const char* const kEnableA11yIDMutationObserver =
    "enableA11yIDMutationObserver";

/**
 * @name: enableCheckExposureOptimize
 * @description: Enable exposure detection optimization
 * @platform: Both
 * @supportVersion: 2.10
 **/
static constexpr const char* const kEnableCheckExposureOptimize =
    "enableCheckExposureOptimize";

/**
 * @name: enableDisexposureWhenLynxHidden
 * @description: Enable send disexposure events when lynxview is hidden
 * @platform: Android
 * @supportVersion: 2.10
 **/
static constexpr const char* const kEnableDisexposureWhenLynxHidden =
    "enableDisexposureWhenLynxHidden";

/**
 * @name: enableExposureWhenLayout
 * @description: Enable exposure check when LynxView is layoutRequest
 * @platform: Android
 * @supportVersion: 2.11
 **/
static constexpr const char* const kEnableExposureWhenLayout =
    "enableExposureWhenLayout";

/**
 * @name: enableAirDetectRemovedKeysWhenUpdateData
 * @description: enable Air Mode detect removed keys when updating data from
 *native
 * @platform: Both
 * @supportVersion: 2.11
 **/
static constexpr const char* const kEnableAirDetectRemovedKeysWhenUpdateData =
    "enableAirDetectRemovedKeysWhenUpdateData";

/**
 * @name: enableJSDataProcessor
 * @description: Enable data processor on JS thread
 * @platform: Both
 * @supportVersion: 2.12
 **/
static constexpr const char* const kEnableJSDataProcessor =
    "enableJSDataProcessor";

/**
 * @name: enableMultiTouch
 * @description: Enable support multi-finger events
 * @platform: Both
 * @supportVersion: 2.12
 **/
static constexpr const char* const kEnableMultiTouch = "enableMultiTouch";

/**
 * @name: enableComponentAsyncDecode
 * @description: Enable dynamic components to be decoded in child threads before
 *they are delivered into tasm in async-loading.
 * @platform: Both
 * @supportVersion: 2.13
 **/
static constexpr const char kEnableComponentAsyncDecode[] =
    "enableComponentAsyncDecode";

/**
 * @name: enableJsBindingApiThrowException
 * @description: Enable js binding api throw exception
 * @platform: Both
 * @supportVersion: 2.14
 **/
static constexpr const char* const kEnableJsBindingApiThrowException =
    "enableJsBindingApiThrowException";
/**
 * @name: enableICU
 * @description: Enable Bind PRIMJS-ICU
 * @platform: Both
 * @supportVersion: 2.17
 **/
static constexpr const char* const kEnableBindICU = "enableICU";

/**
 * @name: enableQueryComponentSync
 * @description: Enable query component sync in background runtime
 * @platform: Both
 * @supportVersion: 3.0
 **/
static constexpr const char* const kEnableQueryComponentSync =
    "enableQueryComponentSync";

/**
 * @name: enableNativeList
 * @description: Indicates whether use c++ list.
 * @supportVersion: 3.2
 */
static constexpr const char* const kEnableNativeList = "enableNativeList";

}  // namespace tasm
}  // namespace lynx

#endif  // CORE_TEMPLATE_BUNDLE_TEMPLATE_CODEC_BINARY_DECODER_PAGE_CONFIG_CONSTANTS_H_
