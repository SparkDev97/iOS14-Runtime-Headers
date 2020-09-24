/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFActivityConditionBuilder.h>
#import <libobjc.A.dylib/MFActivityCondition.h>

@protocol EFScheduler;
@class EFCancelationToken, NSString, EFObservable;

@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition> {

	BOOL _requireExternalPower;
	BOOL _requireWiFi;
	BOOL _requireScreenLocked;
	BOOL _requireLowPowerModeDisabled;
	BOOL _satisfied;
	float _minBatteryLevel;
	long long _maxThermalPressureLevel;
	EFCancelationToken* _cancellationToken;
	id<EFScheduler> _scheduler;

}

@property (assign,nonatomic) BOOL requireExternalPower;                           //@synthesize requireExternalPower=_requireExternalPower - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                    //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (assign,nonatomic) BOOL requireScreenLocked;                            //@synthesize requireScreenLocked=_requireScreenLocked - In the implementation block
@property (assign,nonatomic) BOOL requireLowPowerModeDisabled;                    //@synthesize requireLowPowerModeDisabled=_requireLowPowerModeDisabled - In the implementation block
@property (assign,nonatomic) float minBatteryLevel;                               //@synthesize minBatteryLevel=_minBatteryLevel - In the implementation block
@property (assign,nonatomic) long long maxThermalPressureLevel;                   //@synthesize maxThermalPressureLevel=_maxThermalPressureLevel - In the implementation block
@property (assign,getter=isSatisfied,nonatomic) BOOL satisfied;                   //@synthesize satisfied=_satisfied - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancellationToken;              //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,retain) id<EFScheduler> scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
+(id)alwaysSatisfiedCondition;
-(void)setSatisfied:(BOOL)arg1 ;
-(void)setScheduler:(id<EFScheduler>)arg1 ;
-(id<EFScheduler>)scheduler;
-(BOOL)isSatisfied;
-(void)dealloc;
-(id)init;
-(EFObservable *)conditionsObservable;
-(BOOL)_isValidConfiguration;
-(BOOL)requireExternalPower;
-(float)minBatteryLevel;
-(BOOL)requireWiFi;
-(BOOL)requireLowPowerModeDisabled;
-(BOOL)requireScreenLocked;
-(long long)maxThermalPressureLevel;
-(void)setRequireExternalPower:(BOOL)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(void)setRequireScreenLocked:(BOOL)arg1 ;
-(void)setRequireLowPowerModeDisabled:(BOOL)arg1 ;
-(void)setMinBatteryLevel:(float)arg1 ;
-(void)setMaxThermalPressureLevel:(long long)arg1 ;
-(EFCancelationToken *)cancellationToken;
-(void)setCancellationToken:(EFCancelationToken *)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
@end
