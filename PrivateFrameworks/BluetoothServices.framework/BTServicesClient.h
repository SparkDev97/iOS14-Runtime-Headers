/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSXPCListenerEndpoint;

@interface BTServicesClient : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)invalidationHandler;
-(void)invalidate;
-(void)_ensureXPCStarted;
-(void)_invalidated;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)interruptionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
@end

