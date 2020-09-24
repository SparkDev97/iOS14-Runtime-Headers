/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFCaptiveObserver : NSObject {

	BOOL _observing;
	int _startCaptiveNotificationToken;
	int _endCaptiveNotificationToken;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_queue> _captiveNotificationQueue;

}

@property (assign,getter=isObserving,nonatomic) BOOL observing;                                  //@synthesize observing=_observing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> captiveNotificationQueue;              //@synthesize captiveNotificationQueue=_captiveNotificationQueue - In the implementation block
@property (assign,nonatomic) int startCaptiveNotificationToken;                                  //@synthesize startCaptiveNotificationToken=_startCaptiveNotificationToken - In the implementation block
@property (assign,nonatomic) int endCaptiveNotificationToken;                                    //@synthesize endCaptiveNotificationToken=_endCaptiveNotificationToken - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                      //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)setObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(void)setEventHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopObservingEvents;
-(void)startObservingEvents;
-(NSObject*<OS_dispatch_queue>)captiveNotificationQueue;
-(void)setCaptiveNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)startCaptiveNotificationToken;
-(void)setStartCaptiveNotificationToken:(int)arg1 ;
-(int)endCaptiveNotificationToken;
-(void)setEndCaptiveNotificationToken:(int)arg1 ;
@end
