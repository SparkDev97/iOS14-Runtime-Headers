/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCRapportDeviceQueryDelegate;
@class _TVRCExpiringStore, RPCompanionLinkClient, NSMutableDictionary;

@interface _TVRCRapportDeviceQuery : NSObject {

	_TVRCExpiringStore* _expiringStore;
	RPCompanionLinkClient* _companionLinkClient;
	NSMutableDictionary* _wrapperToIdentifierMapping;
	NSMutableDictionary* _deviceRecords;
	BOOL _unpairedBLEDevicesReported;
	id<_TVRCRapportDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCRapportDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)start;
-(void)setDelegate:(id<_TVRCRapportDeviceQueryDelegate>)arg1 ;
-(id<_TVRCRapportDeviceQueryDelegate>)delegate;
-(void)stop;
-(void)_disconnectAllDevices;
-(BOOL)_shouldReportDevice:(id)arg1 ;
-(void)_deviceFound:(id)arg1 unpairedBLE:(BOOL)arg2 ;
-(void)_deviceLost:(id)arg1 ;
-(BOOL)_recordExistsForIDS:(id)arg1 ;
-(void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2 ;
-(void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2 ;
-(unsigned long long)_transportForStatusFlag:(unsigned long long)arg1 ;
@end

