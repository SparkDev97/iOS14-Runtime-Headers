/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDContainerInfo, NSObject;

@interface CKDContainerSpecificInfoOperation : CKDOperation {

	BOOL _requireUserIDs;
	CKDContainerInfo* _containerInfo;
	NSObject*<OS_dispatch_group> _infoFetchedGroup;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;                               //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                                          //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> infoFetchedGroup;              //@synthesize infoFetchedGroup=_infoFetchedGroup - In the implementation block
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(BOOL)shouldCheckAppVersion;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setRequireUserIDs:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)infoFetchedGroup;
@end
