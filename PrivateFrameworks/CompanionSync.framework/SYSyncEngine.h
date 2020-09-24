/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol SYSyncEngineResponder, OS_os_transaction, OS_os_activity, OS_dispatch_queue;
@class NSObject, SYService, PBCodable, NSString;

@interface SYSyncEngine : NSObject <SYStateLoggable> {

	id<SYSyncEngineResponder> _responder;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_os_activity> _transportActivity;
	SYService* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SYSyncEngineResponder> responder; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> transportActivity;              //@synthesize transportActivity=_transportActivity - In the implementation block
@property (nonatomic,readonly) BOOL isInSession; 
@property (nonatomic,readonly) BOOL buffersSessions; 
@property (nonatomic,readonly) BOOL buffersHandshake; 
@property (nonatomic,__weak,readonly) SYService * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL targetIsNearby; 
@property (nonatomic,readonly) BOOL targetConnected; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SYSyncEngineResponder>)responder;
-(void)setResponder:(id<SYSyncEngineResponder>)arg1 ;
-(BOOL)resume:(id*)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)beginSession;
-(NSObject*<OS_dispatch_queue>)queue;
-(SYService *)service;
-(PBCodable *)stateForLogging;
-(void)endSession;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(BOOL)buffersSessions;
-(BOOL)targetIsNearby;
-(BOOL)targetConnected;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(BOOL)buffersHandshake;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)isInSession;
-(NSObject*<OS_os_activity>)transportActivity;
-(id)cancelMessagesReturningFailures:(id)arg1 ;
@end
