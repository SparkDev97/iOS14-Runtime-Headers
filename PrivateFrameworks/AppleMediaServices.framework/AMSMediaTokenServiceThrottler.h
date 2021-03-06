/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject {

	double _baseSleepInterval;
	double _maxSleepInterval;
	unsigned long long _attemptNumber;
	NSDate* _throttleDate;

}

@property (assign,nonatomic) unsigned long long attemptNumber;              //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (nonatomic,retain) NSDate * throttleDate;                         //@synthesize throttleDate=_throttleDate - In the implementation block
@property (assign,nonatomic) double baseSleepInterval;                      //@synthesize baseSleepInterval=_baseSleepInterval - In the implementation block
@property (assign,nonatomic) double maxSleepInterval;                       //@synthesize maxSleepInterval=_maxSleepInterval - In the implementation block
-(void)throttle;
-(NSDate *)throttleDate;
-(void)setAttemptNumber:(unsigned long long)arg1 ;
-(BOOL)shouldThrottle;
-(void)reset;
-(double)maxSleepInterval;
-(double)_calculateThrottleInterval;
-(void)setThrottleDate:(NSDate *)arg1 ;
-(void)setMaxSleepInterval:(double)arg1 ;
-(double)baseSleepInterval;
-(void)setBaseSleepInterval:(double)arg1 ;
-(id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2 ;
-(unsigned long long)attemptNumber;
@end

