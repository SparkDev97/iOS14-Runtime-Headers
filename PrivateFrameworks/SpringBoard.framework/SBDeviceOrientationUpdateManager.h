/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class NSMutableSet;

@interface SBDeviceOrientationUpdateManager : NSObject {

	NSMutableSet* _deferralAssertions;
	BOOL _deviceOrientationIsDirty;
	id<BSInvalidatable> _stateCaptureHandle;
	long long _lastUpdatedDeviceOrientation;

}

@property (getter=isCurrentlyDeferringOrientationUpdates,nonatomic,readonly) BOOL currentlyDeferringOrientationUpdates; 
@property (assign,nonatomic) long long lastUpdatedDeviceOrientation;                                                                 //@synthesize lastUpdatedDeviceOrientation=_lastUpdatedDeviceOrientation - In the implementation block
-(void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1 ;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(long long)lastUpdatedDeviceOrientation;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLastUpdatedDeviceOrientation:(long long)arg1 ;
-(id)init;
-(void)_endDeferringOrientationUpdatesForAssertion:(id)arg1 ;
-(BOOL)_deviceOrientationUpdateNeededForOrientation:(long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)description;
@end
