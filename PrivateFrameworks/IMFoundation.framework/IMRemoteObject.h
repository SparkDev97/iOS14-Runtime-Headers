/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
+(void)initialize;
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(NSString *)portName;
-(void)_portDidBecomeInvalid;
-(void)setProcessName:(NSString *)arg1 ;
-(void)invalidate;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5 ;
-(id)_queue;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)processName;
-(void)dealloc;
-(void)setPid:(int)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 locked:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isValid;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 locked:(BOOL)arg3 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(int)pid;
-(id)description;
-(void)blockUntilSendQueueIsEmpty;
@end
