/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging> {

	NSString* _timerID;

}

@property (nonatomic,readonly) NSString * timerID;                  //@synthesize timerID=_timerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)timerID;
-(id)logIdentifier;
-(NSString *)description;
-(id)initWithTimerID:(id)arg1 ;
-(void)_stopTimer:(/*^block*/id)arg1 ;
-(void)_startTimer:(id)arg1 home:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
