/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFDispatchQueueMethods
@required
-(unsigned)qualityOfService;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1;
-(void)dispatchBarrierSync:(/*^block*/id)arg1;
-(BOOL)assertNotOnQueue;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void*)getSpecific:(void*)arg1;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)suspend;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(BOOL)assertQueueBarrier;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)resume;
-(id)dispatchCancellable:(/*^block*/id)arg1;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2;
-(const char*)label;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchSync:(/*^block*/id)arg1;
-(void)dispatchAsync:(/*^block*/id)arg1;
-(BOOL)assertOnQueue;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2;
-(id)extensionMatching:(/*^block*/id)arg1;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2;

@end
