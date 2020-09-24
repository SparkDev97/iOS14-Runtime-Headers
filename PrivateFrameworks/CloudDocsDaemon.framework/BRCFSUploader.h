/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>
#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, BRCFairScheduler, BRCDeadlineSource, NSObject, br_pacer, BRCDeadlineScheduler, NSDictionary, NSString;

@interface BRCFSUploader : BRCFSTransferScheduler <BRCModule> {

	NSMutableDictionary* _thumbnailsOperations;
	NSMutableSet* _boostedDocIDs;
	NSMutableDictionary* _stampForDocID;
	BRCFairScheduler* _fairScheduler;
	BRCDeadlineSource* _retryQueueSource;
	NSObject*<OS_dispatch_queue> _thumbnailQueue;
	br_pacer* _quotaPacer;
	br_pacer* _globalQuotaStateUpdatePacer;
	BOOL _prepareReachedMax;
	BOOL _isDefaultOwnerOutOfQuota;
	BRCDeadlineScheduler* _uploadsDeadlineScheduler;

}

@property (nonatomic,readonly) BRCDeadlineScheduler * uploadsDeadlineScheduler;              //@synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler - In the implementation block
@property (nonatomic,readonly) NSDictionary * thumbnailsOperationsByID;                      //@synthesize thumbnailsOperations=_thumbnailsOperations - In the implementation block
@property (assign,nonatomic) BOOL isDefaultOwnerOutOfQuota;                                  //@synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(void)cancel;
-(void)close;
-(void)schedule;
-(void)suspend;
-(void)resume;
-(BOOL)isUploadingItem:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(BOOL)canScheduleMoreJobs;
-(void)deleteJobsMatching:(id)arg1 ;
-(void)_cancelJobs:(id)arg1 state:(int)arg2 ;
-(void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(void)rescheduleJobsPendingInitialSyncInZone:(id)arg1 ;
-(void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)deleteUploadingJobForItem:(id)arg1 ;
-(id)quotaAvailableForOwner:(id)arg1 ;
-(BOOL)isDefaultOwnerOutOfQuota;
-(void)cancelAndCleanupItemUpload:(id)arg1 ;
-(void)setState:(int)arg1 forItem:(id)arg2 ;
-(void)uploadItem:(id)arg1 ;
-(BRCDeadlineScheduler *)uploadsDeadlineScheduler;
-(void)ownerDidReceiveOutOfQuotaError:(id)arg1 ;
-(void)scheduleQuotaFetchIfNeededForOwner:(id)arg1 ;
-(void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2 ;
-(NSDictionary *)thumbnailsOperationsByID;
-(void)_scheduleQuotaFetchForDefaultOwner;
-(void)_globalQuotaStateUpdateForDefaultOwner;
-(void)_scheduleRetries;
-(void)setState:(int)arg1 forUploadJobID:(id)arg2 zone:(id)arg3 ;
-(void)scheduleQuotaStateUpdateForOwner:(id)arg1 ;
-(id)_thumbnailOperationForItemRowID:(id)arg1 ;
-(void)_cancelJobsMatching:(id)arg1 ;
-(id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2 ;
-(BOOL)hasItemsOverQuotaForOwner:(id)arg1 ;
-(void)setIsDefaultOwnerOutOfQuota:(BOOL)arg1 forceSignalContainers:(BOOL)arg2 ;
-(void)_computeRecordForJobID:(id)arg1 item:(id)arg2 syncContext:(id)arg3 ;
-(unsigned long long)_thumbnailOperationsMax;
-(BOOL)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id*)arg4 ;
-(void)_reportUploadErrorForDocument:(id)arg1 error:(id)arg2 ;
-(void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2 ;
-(id)_documentItemForJobID:(id)arg1 stageID:(id)arg2 ;
-(void)_updateRecord:(id)arg1 item:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5 ;
-(void)_updateJobID:(id)arg1 setStageID:(id)arg2 operationID:(id)arg3 ;
-(void)_updateRecord:(id)arg1 jobID:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5 ;
-(void)_doneFetchingThumbnailForJobID:(id)arg1 ;
-(void)_startFetchThumbnail:(id)arg1 jobID:(id)arg2 ;
-(id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id*)arg4 ;
-(BOOL)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id*)arg4 ;
-(id)_documentItemForJobID:(id)arg1 operationID:(id)arg2 ;
-(void)_finishedUploadingItem:(id)arg1 record:(id)arg2 jobID:(id)arg3 stageID:(id)arg4 syncContext:(id)arg5 error:(id)arg6 ;
-(unsigned long long)_minBatchSize;
-(void)_willAttemptJobID:(id)arg1 throttle:(id)arg2 operationID:(id)arg3 ;
-(void)setIsDefaultOwnerOutOfQuota:(BOOL)arg1 ;
-(void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1 ;
-(void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1 ;
-(id)descriptionForJobID:(id)arg1 context:(id)arg2 ;
-(void)deleteJobsForZone:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2 ;
-(void)setState:(int)arg1 forJobID:(id)arg2 zone:(id)arg3 ;
-(void)boostDocID:(id)arg1 item:(id)arg2 ;
-(void)removeBoostedDocID:(id)arg1 ;
-(BOOL)hasItemsOverQuotaInZone:(id)arg1 ;
-(void)forceScheduleQuotaFetchForOwner:(id)arg1 ;
@end
