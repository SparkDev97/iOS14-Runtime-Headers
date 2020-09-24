/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCInterface, NSMutableArray, NSObject;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject {

	NSXPCInterface* _interface;
	NSMutableArray* _pendingInvocations;
	id _target;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCInterface * interface;                       //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (nonatomic,retain) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
-(id)remoteObjectProxy;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSXPCInterface *)interface;
-(void)dealloc;
-(void)_assertVoidReturnValueInInvocation:(id)arg1 ;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(NSMutableArray *)pendingInvocations;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)fulfillWithRemoteObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)target;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)initWithInterface:(id)arg1 queue:(id)arg2 ;
-(void)failWithError:(id)arg1 ;
@end
