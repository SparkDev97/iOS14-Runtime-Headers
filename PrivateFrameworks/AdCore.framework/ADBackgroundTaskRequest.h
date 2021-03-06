/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSDate;

@interface ADBackgroundTaskRequest : NSObject {

	BOOL _performDeferralCheck;
	NSString* _requestIdentifier;
	NSObject*<OS_xpc_object> _activity;
	NSObject*<OS_xpc_object> _criteria;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (assign,nonatomic) BOOL performDeferralCheck;                        //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) BOOL requiresNetworkConnectivity; 
@property (assign,nonatomic) BOOL requireBuddyComplete; 
@property (assign,nonatomic) BOOL requireClassCData; 
@property (assign,nonatomic) BOOL allowBattery; 
@property (assign,nonatomic) BOOL requireSleep; 
@property (assign,nonatomic) BOOL isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
@property (assign,nonatomic) BOOL isCPUIntensive; 
@property (nonatomic,readonly) BOOL shouldDefer; 
-(BOOL)shouldDefer;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(long long)gracePeriod;
-(NSString *)requestIdentifier;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithID:(id)arg1 ;
-(void)setGracePeriod:(long long)arg1 ;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setAllowBattery:(BOOL)arg1 ;
-(id)getPropertyAsString:(id)arg1 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)copyBackgroundTaskAgentCriteria;
-(void)setIsCPUIntensive:(BOOL)arg1 ;
-(BOOL)requireClassCData;
-(BOOL)taskCanContinueForTime:(id)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(BOOL)isRepeating;
-(void)setRequireClassCData:(BOOL)arg1 ;
-(void)setIsRepeating:(BOOL)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)delay;
-(void)setDelay:(long long)arg1 ;
-(BOOL)taskIsDeferred;
-(void)setRequireSleep:(BOOL)arg1 ;
-(BOOL)continueTask;
-(id)getPropertyAsDate:(id)arg1 ;
-(BOOL)finishTask;
-(BOOL)requireBuddyComplete;
-(BOOL)requiresNetworkConnectivity;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(BOOL)performDeferralCheck;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(void)endBackgroundDeferralCheck;
-(BOOL)taskIsContinuing;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(NSDate *)startDate;
-(NSObject*<OS_xpc_object>)activity;
-(void)setRequireBuddyComplete:(BOOL)arg1 ;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(NSString *)priority;
-(long long)backgroundTaskRetryCount;
-(BOOL)deferTask;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(void)setPerformDeferralCheck:(BOOL)arg1 ;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isCPUIntensive;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)allowBattery;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)requireSleep;
@end

