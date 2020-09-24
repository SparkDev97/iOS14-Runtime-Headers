/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ENExposureDetectionManagerDelegate;
@class ENConfigurationStore, ENDownloadManager, ENExposureDatabase, NSObject, NSBackgroundActivityScheduler;

@interface ENExposureDetectionManager : NSObject {

	ENConfigurationStore* _configurationStore;
	ENDownloadManager* _downloadManager;
	ENExposureDatabase* _exposureDatabase;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _activated;
	BOOL _enableNativeExposureDetection;
	BOOL _scheduleDetectionAutomatically;
	id<ENExposureDetectionManagerDelegate> _delegate;
	NSBackgroundActivityScheduler* _detectionScheduler;

}

@property (assign,nonatomic,__weak) id<ENExposureDetectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSBackgroundActivityScheduler * detectionScheduler;                //@synthesize detectionScheduler=_detectionScheduler - In the implementation block
@property (assign,nonatomic) BOOL enableNativeExposureDetection;                                  //@synthesize enableNativeExposureDetection=_enableNativeExposureDetection - In the implementation block
@property (assign,nonatomic) BOOL scheduleDetectionAutomatically;                                 //@synthesize scheduleDetectionAutomatically=_scheduleDetectionAutomatically - In the implementation block
-(void)invalidate;
-(void)setDelegate:(id<ENExposureDetectionManagerDelegate>)arg1 ;
-(id<ENExposureDetectionManagerDelegate>)delegate;
-(void)activate;
-(id)initWithConfigurationStore:(id)arg1 downloadManager:(id)arg2 exposureDatabase:(id)arg3 queue:(id)arg4 ;
-(void)setEnableNativeExposureDetection:(BOOL)arg1 ;
-(void)scheduleNativeExposureDetectionForced:(BOOL)arg1 ;
-(id)createDetectionSessionForClient:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(void)performNativeExposureDetectionWithResultHandler:(/*^block*/id)arg1 ;
-(id)createScheduler;
-(void)_downloadsDidBecomeAvailable:(id)arg1 ;
-(void)_unscheduleNativeExposureDetection;
-(id)_getDelegateWithError:(id*)arg1 ;
-(BOOL)_applyRegionalConfigurationToDetectionSession:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)_createDetectionSessionWithError:(id*)arg1 ;
-(void)_performNativeExposureDetectionWithScheduler:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)createNativeDetectionSessionWithError:(id*)arg1 ;
-(id)_publicKeyForRegion:(id)arg1 dictionary:(id)arg2 ;
-(long long)_processFileAtURL:(id)arg1 publicKey:(id)arg2 endpoint:(id)arg3 session:(id)arg4 error:(id*)arg5 ;
-(void)_exposureDetectionSession:(id)arg1 finishedWithResult:(id)arg2 ;
-(id)_signatureFromArchiveAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_openKeyFileWithArchiveAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_archiveAtPath:(id)arg1 entryPathExtension:(id)arg2 error:(id*)arg3 ;
-(BOOL)_scheduleNativeExposureDetection;
-(NSBackgroundActivityScheduler *)detectionScheduler;
-(BOOL)enableNativeExposureDetection;
-(BOOL)scheduleDetectionAutomatically;
-(void)setScheduleDetectionAutomatically:(BOOL)arg1 ;
@end
