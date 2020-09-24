/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>

@class SUPreviewOverlayStorePageViewController, NSString;

@interface SUPreviewOverlayViewController : SUViewController {

	CGSize _contentSize;
	/*^block*/id _loadBlock;
	BOOL _loaded;
	double _paddingRight;
	double _paddingTop;
	SUPreviewOverlayStorePageViewController* _storePageViewController;
	NSString* _userInfoString;
	BOOL _visible;

}

@property (getter=isContentLoaded,nonatomic,readonly) BOOL contentLoaded; 
@property (assign,nonatomic) CGSize contentSize;                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double paddingRight;                                      //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) double paddingTop;                                        //@synthesize paddingTop=_paddingTop - In the implementation block
@property (nonatomic,copy) NSString * userInfoString;                                  //@synthesize userInfoString=_userInfoString - In the implementation block
+(double)defaultAnimationDuration;
+(id)defaultRequestProperties;
+(void)offsetScrollView:(id)arg1 forViewController:(id)arg2 ;
+(void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2 ;
-(double)paddingRight;
-(CGSize)contentSize;
-(double)paddingTop;
-(void)dealloc;
-(void)setPaddingTop:(double)arg1 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)loadView;
-(BOOL)isContentLoaded;
-(void)setPaddingRight:(double)arg1 ;
-(id)_storePageViewController;
-(void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)loadWithRequestProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)hideInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)showInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)invalidateForMemoryPurge;
-(void)setUserInfoString:(NSString *)arg1 ;
-(id)_previewOverlayContainerForViewController:(id)arg1 ;
-(id)_scrollViewForViewController:(id)arg1 ;
-(NSString *)userInfoString;
@end
