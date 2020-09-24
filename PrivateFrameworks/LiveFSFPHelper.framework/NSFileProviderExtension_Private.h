/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileProviderExtension_Private <NSObject>
@optional
-(id)customPushTopics;
-(void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)evictItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_removeTrashedItemsOlderThanDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_dumpInternalStateToTermDumper:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acknowledgeUserVisibleRootLocationDidChangeToURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6;
-(void)preflightTrashItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(CGSize)arg2 perThumbnailCompletionHandlerWithType:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)preflightReparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)fetchPublishingURLForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)_propertiesForItemAtURL:(id)arg1 error:(id*)arg2;
-(id)_defaultApplicationContainerForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_additionalDumpInfoWithCompletionHandler:(/*^block*/id)arg1;
-(void)materializedItemsDidChange;
-(void)fetchTrashIdentifiersWithCompletionHandler:(/*^block*/id)arg1;

@end
