/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount, NSNumber, STManagementState;

@interface WBUFeatureManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSNumber* _cachedShouldRequestMoreTime;
	STManagementState* _managementState;
	BOOL _autoFillAvailable;
	BOOL _bookmarksAvailable;
	BOOL _readingListAvailable;
	BOOL _offlineReadingListAvailable;
	BOOL _cloudSyncAvailable;
	BOOL _inMemoryBookmarkChangeTrackingAvailable;

}

@property (getter=isAutoFillAvailable,nonatomic,readonly) BOOL autoFillAvailable;                                                          //@synthesize autoFillAvailable=_autoFillAvailable - In the implementation block
@property (getter=isBookmarksAvailable,nonatomic,readonly) BOOL bookmarksAvailable;                                                        //@synthesize bookmarksAvailable=_bookmarksAvailable - In the implementation block
@property (getter=isReadingListAvailable,nonatomic,readonly) BOOL readingListAvailable;                                                    //@synthesize readingListAvailable=_readingListAvailable - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;                                      //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (getter=isCloudKitBookmarksAvailable,nonatomic,readonly) BOOL cloudKitBookmarksAvailable; 
@property (getter=isCloudTabsAvailable,nonatomic,readonly) BOOL cloudTabsAvailable; 
@property (getter=isCloudSyncAvailable,nonatomic,readonly) BOOL cloudSyncAvailable;                                                        //@synthesize cloudSyncAvailable=_cloudSyncAvailable - In the implementation block
@property (getter=isCloudHistorySyncAvailable,nonatomic,readonly) BOOL cloudHistorySyncAvailable; 
@property (getter=isCreditCardStorageAvailable,nonatomic,readonly) BOOL creditCardStorageAvailable; 
@property (getter=isPrivateBrowsingAvailable,nonatomic,readonly) BOOL privateBrowsingAvailable; 
@property (getter=isInMemoryBookmarkChangeTrackingAvailable,nonatomic,readonly) BOOL inMemoryBookmarkChangeTrackingAvailable;              //@synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable - In the implementation block
@property (getter=isUserRemotelyManagedAndLocallyRestricted,nonatomic,readonly) BOOL userRemotelyManagedAndLocallyRestricted; 
@property (getter=isAirDropPasswordsAvailable,nonatomic,readonly) BOOL airDropPasswordsAvailable; 
+(long long)accessLevel;
+(BOOL)shouldOfferVirtualCards;
+(id)webui_sharedFeatureManager;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(BOOL)isAirDropPasswordsAvailable;
-(void)_setupAccountStore;
-(void)dealloc;
-(BOOL)isCloudHistorySyncAvailable;
-(void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isCloudKitBookmarksAvailable;
-(BOOL)isUserRemotelyManagedAndLocallyRestricted;
-(id)init;
-(BOOL)isBookmarksAvailable;
-(BOOL)isReadingListAvailable;
-(BOOL)isCloudTabsAvailable;
-(BOOL)isInMemoryBookmarkChangeTrackingAvailable;
-(void)_updateAppleAccount;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isPrivateBrowsingAvailable;
-(BOOL)isCreditCardStorageAvailable;
-(void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(BOOL)isAutoFillAvailable;
-(BOOL)isOfflineReadingListAvailable;
@end

