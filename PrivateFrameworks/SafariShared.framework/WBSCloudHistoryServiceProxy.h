/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCloudHistoryServiceProtocol.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol> {

	id<NSXPCProxyCreating> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetForAccountChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(void)saveChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

