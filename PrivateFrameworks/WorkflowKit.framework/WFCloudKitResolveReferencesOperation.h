/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class WFCloudKitItemRequest, NSArray, CKOperationGroup, CKFetchRecordsOperation, WFCloudKitItemTask;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation {

	WFCloudKitItemRequest* _request;
	NSArray* _records;
	CKOperationGroup* _operationGroup;
	CKFetchRecordsOperation* _currentOperation;
	WFCloudKitItemTask* _task;

}

@property (nonatomic,__weak,readonly) WFCloudKitItemRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * records;                                     //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                     //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,retain) CKFetchRecordsOperation * currentOperation;              //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) WFCloudKitItemTask * task;                               //@synthesize task=_task - In the implementation block
-(void)cancel;
-(WFCloudKitItemTask *)task;
-(CKFetchRecordsOperation *)currentOperation;
-(void)setTask:(WFCloudKitItemTask *)arg1 ;
-(void)start;
-(NSArray *)records;
-(CKOperationGroup *)operationGroup;
-(WFCloudKitItemRequest *)request;
-(void)setCurrentOperation:(CKFetchRecordsOperation *)arg1 ;
-(id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4 ;
@end

