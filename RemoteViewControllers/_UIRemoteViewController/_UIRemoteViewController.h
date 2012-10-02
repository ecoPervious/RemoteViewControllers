/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDimmingView, _UIViewServiceInterface, _UIAsyncInvocation, NSError, UIView, _UITextServiceSession, _UIRemoteView, NSArray, NSString, _UISizeTrackingView, NSObject, UIActionSheet;

@interface _UIRemoteViewController : UIViewController {
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    id _serviceViewControllerProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned int _serviceRegisteredScrollToTopViewCount;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    BOOL _fencingCurrentTransaction;
    NSObject *_fenceBarrier;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UIRemoteView *_fullScreenTextEffectsRemoteView;
    _UIRemoteView *_textEffectsAboveStatusBarRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
}

@property(readonly) id serviceViewControllerProxy;
@property(readonly) NSString * serviceBundleIdentifier;

+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (id)disconnect;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)serviceViewControllerProxy;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(id)arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (id)_appearanceSource;
- (id)serviceBundleIdentifier;
- (void)viewServiceSupportedInterfaceOrientationsDidChange;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1 connectionInfo:(struct { id x1; id x2; id x3; id x4; unsigned int x5; id x6; id x7; struct CGAffineTransform { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct CGAffineTransform { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; } x10; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_11_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_11_1_2; } x11; unsigned int x12; unsigned int x13; })arg2;
- (int)__automatic_invalidation_logic;
- (BOOL)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (BOOL)_ignoreAppSupportedOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_customizesForPresentationInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_alertIsDisappearing:(id)arg1;
- (void)_alertIsAppearing:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;

@end
