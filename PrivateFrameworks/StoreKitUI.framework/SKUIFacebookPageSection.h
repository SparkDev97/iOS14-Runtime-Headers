/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIReviewsFacebookView, SKUIViewElementLayoutContext, SKUIFacebookLikeStatus, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection {

	ACAccountStore* _accountStore;
	char _facebookAccountsExist;
	SKUIReviewsFacebookView* _facebookView;
	BOOL _isLoadingLikeStatus;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIFacebookLikeStatus* _likeStatus;

}

@property (nonatomic,readonly) SKUIFacebookPageComponent * pageComponent; 
-(id)_accountStore;
-(void)_resetState;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfCells;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
-(id)_facebookView;
-(void)_applyColorSchemeToFacebookView:(id)arg1 ;
-(long long)_facebookAccountsExist;
-(void)_reloadLikeStatus;
-(void)_reloadCollectionViewSection;
-(void)_toggleLikeAction:(id)arg1 ;
-(void)_finishLookupWithStatus:(id)arg1 error:(id)arg2 ;
@end
