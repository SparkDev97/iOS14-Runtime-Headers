/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, HMFMessageDispatcher, HMDRemoteLoginMessageSender, NSString, NSSet;

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject <HMFLogging, HMDHomeMessageReceiver, NSSecureCoding> {

	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDRemoteLoginMessageSender* _remoteMessageSender;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDRemoteLoginMessageSender * remoteMessageSender;               //@synthesize remoteMessageSender=_remoteMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
-(id)initWithUUID:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(void)registerForMessages;
-(id)logIdentifier;
-(HMDRemoteLoginMessageSender *)remoteMessageSender;
-(void)setRemoteMessageSender:(HMDRemoteLoginMessageSender *)arg1 ;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 remoteMessageSender:(id)arg3 ;
@end

