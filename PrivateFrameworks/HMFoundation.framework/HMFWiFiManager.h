/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFWiFiManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;
@class NSString, HMFMACAddress, NSObject, NSHashTable;

@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate> {

	os_unfair_lock_s _lock;
	BOOL _shouldAssertWoW;
	NSString* _currentNetworkSSID;
	HMFMACAddress* _MACAddress;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMFWiFiManagerDataSource> _dataSource;
	NSHashTable* _activeAssertions;

}

@property (copy,readonly) HMFMACAddress * MACAddress;                 //@synthesize MACAddress=_MACAddress - In the implementation block
@property (copy,readonly) NSString * currentNetworkSSID; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedManager;
-(HMFMACAddress *)MACAddress;
-(BOOL)isActive;
-(id)init;
-(id)beginActiveAssertionWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endActiveAssertion:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(NSString *)currentNetworkSSID;
-(void)currentNetworkDidChangeForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2 ;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
@end
