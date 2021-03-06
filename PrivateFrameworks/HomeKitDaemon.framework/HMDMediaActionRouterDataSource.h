/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, HMDDevice, NSUUID, HMFMessageDispatcher, HMDLogEventDispatcher, HMDHome;


@protocol HMDMediaActionRouterDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * enabledResidents; 
@property (nonatomic,copy,readonly) NSArray * appleMediaAccessories; 
@property (nonatomic,__weak,readonly) HMDDevice * companionDevice; 
@property (getter=isCompanionReachable,nonatomic,readonly) BOOL companionReachable; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher; 
@property (nonatomic,readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (__weak,readonly) HMDHome * home; 
@required
-(id)mediaProfileWithUUID:(id)arg1;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(HMDDevice *)companionDevice;
-(HMDHome *)home;
-(BOOL)isCompanionReachable;
-(NSArray *)enabledResidents;
-(NSArray *)appleMediaAccessories;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end

