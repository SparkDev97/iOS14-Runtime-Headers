/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBUIRemoteAlertHostInterface_Internal.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating;
@class NSMutableSet, NSNumber, _UILegibilitySettings, NSString;

@interface SBRemoteTransientOverlayHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface_Internal, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding> {

	BOOL _allowsHomeButtonDismissal;
	double _customIdleExpirationTimeout;
	long long _dismissalAnimationStyle;
	NSMutableSet* _idleTimerDisabledReasons;
	NSNumber* _launchingInterfaceOrientationValue;
	unsigned long long _preferredHardwareButtonEvents;
	int _preferredStatusBarVisibility;
	NSNumber* _preferredStatusBarStyleValue;
	NSNumber* _preferredWhitePointAdaptivityStyleValue;
	long long _requestedBackgroundStyle;
	BOOL _prefersWallpaperTunnelActive;
	BOOL _shouldDisableIdleWarn;
	BOOL _shouldUseLockedIdleTimerDuration;
	long long _swipeDismissalStyle;
	NSNumber* _hasTranslucentContentValue;
	BOOL _activatingForSiri;
	BOOL _allowsStackingOverlayContentAbove;
	BOOL _contentOpaque;
	BOOL _shouldEnableFadeInAnimation;
	BOOL _shouldEnableFadeOutAnimation;
	BOOL _shouldDisableOrientationUpdates;
	BOOL _allowsCustomPresentationDismissalAnimations;
	BOOL _shouldIgnoreContentOverlayInsetUpdates;
	BOOL _shouldInvalidateWhenDeactivated;
	BOOL _isScreenshotMarkup;
	BOOL _switcherEligible;
	BOOL _shouldDisableBanners;
	BOOL _shouldDisableControlCenter;
	BOOL _shouldDisableReachability;
	BOOL _shouldDisableInteractiveScreenshotGesture;
	BOOL _shouldDisableSiri;
	BOOL _shouldPendAlertItems;
	int _preferredStatusBarStyleOverridesToCancel;
	id<SBRemoteTransientOverlayHostViewControllerDelegate> _delegate;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	long long _preferredLockedGestureDismissalStyle;
	long long _preferredUnlockedGestureDismissalStyle;
	long long _preferredBackgroundStyle;
	NSNumber* _preferredSceneDeactivationReasonValue;
	_UILegibilitySettings* _preferredStatusBarLegibilitySettings;

}

@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlayHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActivatingForSiri,nonatomic) BOOL activatingForSiri;                                   //@synthesize activatingForSiri=_activatingForSiri - In the implementation block
@property (nonatomic,readonly) BOOL allowsStackingOverlayContentAbove;                                            //@synthesize allowsStackingOverlayContentAbove=_allowsStackingOverlayContentAbove - In the implementation block
@property (getter=isContentOpaque,nonatomic,readonly) BOOL contentOpaque;                                         //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                             //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableFadeInAnimation;                                                    //@synthesize shouldEnableFadeInAnimation=_shouldEnableFadeInAnimation - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableFadeOutAnimation;                                                   //@synthesize shouldEnableFadeOutAnimation=_shouldEnableFadeOutAnimation - In the implementation block
@property (nonatomic,readonly) long long preferredLockedGestureDismissalStyle;                                    //@synthesize preferredLockedGestureDismissalStyle=_preferredLockedGestureDismissalStyle - In the implementation block
@property (nonatomic,readonly) long long preferredUnlockedGestureDismissalStyle;                                  //@synthesize preferredUnlockedGestureDismissalStyle=_preferredUnlockedGestureDismissalStyle - In the implementation block
@property (nonatomic,readonly) long long preferredBackgroundStyle;                                                //@synthesize preferredBackgroundStyle=_preferredBackgroundStyle - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * preferredSceneDeactivationReasonValue;                             //@synthesize preferredSceneDeactivationReasonValue=_preferredSceneDeactivationReasonValue - In the implementation block
@property (nonatomic,readonly) int preferredStatusBarStyleOverridesToCancel;                                      //@synthesize preferredStatusBarStyleOverridesToCancel=_preferredStatusBarStyleOverridesToCancel - In the implementation block
@property (nonatomic,copy,readonly) _UILegibilitySettings * preferredStatusBarLegibilitySettings;                 //@synthesize preferredStatusBarLegibilitySettings=_preferredStatusBarLegibilitySettings - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableOrientationUpdates;                                              //@synthesize shouldDisableOrientationUpdates=_shouldDisableOrientationUpdates - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomPresentationDismissalAnimations;                                    //@synthesize allowsCustomPresentationDismissalAnimations=_allowsCustomPresentationDismissalAnimations - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreContentOverlayInsetUpdates;                                         //@synthesize shouldIgnoreContentOverlayInsetUpdates=_shouldIgnoreContentOverlayInsetUpdates - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateWhenDeactivated;                                              //@synthesize shouldInvalidateWhenDeactivated=_shouldInvalidateWhenDeactivated - In the implementation block
@property (assign,nonatomic) BOOL isScreenshotMarkup;                                                             //@synthesize isScreenshotMarkup=_isScreenshotMarkup - In the implementation block
@property (assign,getter=isSwitcherEligible,nonatomic) BOOL switcherEligible;                                     //@synthesize switcherEligible=_switcherEligible - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableBanners;                                                         //@synthesize shouldDisableBanners=_shouldDisableBanners - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableControlCenter;                                                   //@synthesize shouldDisableControlCenter=_shouldDisableControlCenter - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableReachability;                                                    //@synthesize shouldDisableReachability=_shouldDisableReachability - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableInteractiveScreenshotGesture;                                    //@synthesize shouldDisableInteractiveScreenshotGesture=_shouldDisableInteractiveScreenshotGesture - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSiri;                                                            //@synthesize shouldDisableSiri=_shouldDisableSiri - In the implementation block
@property (nonatomic,readonly) BOOL shouldPendAlertItems;                                                         //@synthesize shouldPendAlertItems=_shouldPendAlertItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleVolumeDownButtonPress;
-(long long)preferredStatusBarStyle;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(BOOL)becomeFirstResponder;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleLockButtonPress;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)canResignFirstResponder;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)resignFirstResponder;
-(BOOL)handleHomeButtonPress;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)idleWarnMode;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)invalidate;
-(BOOL)handleDoubleHeightStatusBarTap;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_participateInSystemAnimationFence:(id)arg1 ;
-(void)setAllowsBanners:(BOOL)arg1 ;
-(void)setAllowsAlertItems:(BOOL)arg1 ;
-(void)setAllowsControlCenter:(BOOL)arg1 ;
-(void)setAllowsSiri:(BOOL)arg1 ;
-(void)setDesiredHardwareButtonEvents:(unsigned long long)arg1 ;
-(void)setAllowsMenuButtonDismissal:(BOOL)arg1 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2 ;
-(void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2 ;
-(void)setAllowsAlertStacking:(BOOL)arg1 ;
-(void)setDismissalAnimationStyle:(long long)arg1 ;
-(void)setSwipeDismissalStyle:(long long)arg1 ;
-(void)setDesiredStatusBarStyleOverrides:(int)arg1 ;
-(void)setStyleOverridesToCancel:(int)arg1 animationSettings:(id)arg2 ;
-(void)setDesiredAutoLockDuration:(double)arg1 ;
-(void)setDesiredIdleTimerSettings:(id)arg1 ;
-(void)setInteractiveScreenshotGestureDisabled:(BOOL)arg1 ;
-(void)setReachabilityDisabled:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)setShouldDisableFadeInAnimation:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1 ;
-(void)setLaunchingInterfaceOrientation:(long long)arg1 ;
-(void)setOrientationChangedEventsEnabled:(BOOL)arg1 ;
-(void)setSceneDeactivationReason:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(int)_preferredStatusBarVisibility;
-(BOOL)shouldDisableSiri;
-(void)_updateContentOverlayInsetsFromParentIfNecessary;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(double)customIdleExpirationTimeout;
-(void)setDelegate:(id<SBRemoteTransientOverlayHostViewControllerDelegate>)arg1 ;
-(void)deactivate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)shouldDisableControlCenter;
-(id<SBRemoteTransientOverlayHostViewControllerDelegate>)delegate;
-(BOOL)isContentOpaque;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(void)setActivatingForSiri:(BOOL)arg1 ;
-(BOOL)isActivatingForSiri;
-(BOOL)shouldInvalidateWhenDeactivated;
-(BOOL)isSwitcherEligible;
-(void)setSwitcherEligible:(BOOL)arg1 ;
-(void)setShouldDismissOnUILock:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUnlockedGestureDismissalStyle;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldPendAlertItems;
-(BOOL)isScreenshotMarkup;
-(void)setIsScreenshotMarkup:(BOOL)arg1 ;
-(void)preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(void)setShouldEnableFadeInAnimation:(BOOL)arg1 ;
-(void)setShouldEnableFadeOutAnimation:(BOOL)arg1 ;
-(void)setAllowsCustomPresentationDismissalAnimations:(BOOL)arg1 ;
-(BOOL)shouldEnableFadeInAnimation;
-(BOOL)shouldEnableFadeOutAnimation;
-(void)setShouldIgnoreContentOverlayInsetUpdates:(BOOL)arg1 ;
-(long long)preferredLockedGestureDismissalStyle;
-(NSNumber *)preferredSceneDeactivationReasonValue;
-(void)dismissForTransientOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentForTransientOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(int)preferredStatusBarStyleOverridesToCancel;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(long long)preferredBackgroundStyle;
-(BOOL)_performButtonEvents:(unsigned long long)arg1 ;
-(void)_updatePreferredGestureDismissalStyles;
-(void)_updatePreferredBackgroundStyleWithAnimationSettings:(id)arg1 ;
-(void)_updateContentOpaqueProperty;
-(BOOL)allowsCustomPresentationDismissalAnimations;
-(_UILegibilitySettings *)preferredStatusBarLegibilitySettings;
-(BOOL)shouldIgnoreContentOverlayInsetUpdates;
@end
