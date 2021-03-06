/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLiftToWakeObserver.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorConfiguration.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class SBLiftToWakeController, CSLockScreenSettings, SBUIBiometricResource, NSString;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
	SBLiftToWakeController* _liftToWakeController;
	CSLockScreenSettings* _prototypeSettings;
	SBUIBiometricResource* _biometricResource;
	Class _currentTriggerClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<SBBiometricUnlockBehaviorConfigurationDelegate>)arg1 ;
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)_setLiftToWakeController:(id)arg1 ;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(void)_evaluateTriggerClass;
-(id)_unlockTriggerWithClass:(Class)arg1 ;
-(Class)_expectedTriggerClassIncludingAccessibility:(BOOL)arg1 ;
-(BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
-(void)liftToWakeControllerEnablementDidChange:(id)arg1 ;
-(id)newBehaviorForCurrentConfiguration;
-(id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3 ;
-(Class)_currentUnlockTriggerClass;
-(id)_liftToWakeController;
@end

