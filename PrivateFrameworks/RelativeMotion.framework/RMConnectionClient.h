/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMConnectionLifecycleDelegate.h>
#import <libobjc.A.dylib/RMConnectionStreamConsumingDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class RMConnectionEndpoint, NSString, NSObject, NSMutableArray;

@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate> {

	BOOL _valid;
	RMConnectionEndpoint* _endpoint;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _streamingDataCallback;
	/*^block*/id _messageHandler;
	NSMutableArray* _messageCache;
	NSObject*<OS_dispatch_source> _connectionTimer;
	unsigned long long _connectionTimerDelay;

}

@property (nonatomic,retain) RMConnectionEndpoint * endpoint;                            //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id streamingDataCallback;                                     //@synthesize streamingDataCallback=_streamingDataCallback - In the implementation block
@property (nonatomic,copy) id messageHandler;                                            //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageCache;                              //@synthesize messageCache=_messageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionTimer;              //@synthesize connectionTimer=_connectionTimer - In the implementation block
@property (assign,nonatomic) unsigned long long connectionTimerDelay;                    //@synthesize connectionTimerDelay=_connectionTimerDelay - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageHandler:(id)arg1 ;
-(void)connect;
-(void)setValid:(BOOL)arg1 ;
-(id)messageHandler;
-(void)invalidate;
-(void)endpoint:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)endpoint:(id)arg1 didReceiveStreamedData:(id)arg2 ;
-(void)endpointWasInvalidated:(id)arg1 ;
-(void)endpointWasInterrupted:(id)arg1 ;
-(void)sendMessage:(id)arg1 withData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setEndpoint:(RMConnectionEndpoint *)arg1 ;
-(void)setMessageCache:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messageCache;
-(void)requestStreamingWithMessage:(id)arg1 data:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)streamingDataCallback;
-(void)setStreamingDataCallback:(id)arg1 ;
-(void)stopStreamingInternal;
-(void)stopStreaming;
-(void)replayCache;
-(unsigned long long)connectionTimerDelay;
-(void)setConnectionTimerDelay:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 serviceName:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)sendCachedMessage:(id)arg1 withData:(id)arg2 ;
-(RMConnectionEndpoint *)endpoint;
-(void)setConnectionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionTimer;
-(void)setServiceName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleDaemonStart;
-(BOOL)isValid;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)serviceName;
@end

