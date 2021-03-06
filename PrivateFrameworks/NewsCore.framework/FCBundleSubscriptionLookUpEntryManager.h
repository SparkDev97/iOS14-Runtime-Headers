/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* _bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry;              //@synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                 //@synthesize localStore=_localStore - In the implementation block
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(void)loadLocalCachesFromStore;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
-(void)cleanupStaleExpiredEntry;
-(id)initWithLocalStore:(id)arg1 ;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
@end

