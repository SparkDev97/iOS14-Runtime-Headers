/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>
#import <libobjc.A.dylib/SBHLibraryViewControllerObserver.h>

@class SBHLibraryViewController, SBFolderController, SBHLibraryPodFolderView, UIView, NSArray, SBFolderIcon, SBIconView, SBHLibraryPodZoomSettings, NSString;

@interface SBHLibraryPodIconZoomAnimator : SBIconZoomAnimator <SBHLibraryViewControllerObserver> {

	SBHLibraryViewController* _libraryViewController;
	SBFolderController* _folderController;
	SBHLibraryPodFolderView* _folderView;
	UIView* _folderScalingView;
	UIView* _folderClippingView;
	UIView* _matchMoveWrapperView;
	UIView* _searchBar;
	UIView* _libraryScalingView;
	NSArray* _visibleIconViews;
	NSArray* _miniPodIconViews;
	BOOL _animationComplete;
	SBFolderIcon* _targetIcon;
	SBIconView* _targetIconView;

}

@property (nonatomic,readonly) id<SBHLibraryPodIconZoomAnimationContaining> animationContainer; 
@property (nonatomic,retain) SBHLibraryPodZoomSettings * settings; 
@property (nonatomic,readonly) SBFolderIcon * targetIcon;                                                    //@synthesize targetIcon=_targetIcon - In the implementation block
@property (nonatomic,readonly) SBIconView * targetIconView;                                                  //@synthesize targetIconView=_targetIconView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(SBFolderIcon *)targetIcon;
-(void)cleanup;
-(SBIconView *)targetIconView;
-(void)_prepareAnimation;
-(id)referenceIconView;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_setupMatchMoveAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)dealloc;
-(void)_handleIconViewClippedNotification:(id)arg1 ;
-(void)_setupFolderAndLibraryScalingViews;
-(void)_captureVisibleAndMiniPodIconViews;
-(void)_prepareToCrossfadeMiniPodIconViews;
-(void)_updateIconCrossfadeForZoomFraction:(double)arg1 ;
-(void)_updateFolderNavigationBarAlphaForZoomFraction:(double)arg1 ;
-(void)_updateLibraryAlphaForZoomFraction:(double)arg1 ;
-(void)_updateFolderViewFramesForZoomFraction:(double)arg1 ;
-(void)_updateLibraryScaleForZoomFraction:(double)arg1 ;
-(void)_updateSearchBarForZoomFraction:(double)arg1 ;
-(void)_updateSearchBarAlphaForZoomFraction:(double)arg1 ;
-(void)_animateIconViewTransformsAndAlphaForZoomFraction:(double)arg1 withAnimationSettings:(id)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_returnFolderAndLibraryScalingViews;
-(void)_cleanupMiniPodIconViewsAfterCrossfade;
-(void)_removeMatchMoveAnimation;
-(double)_scaleForZoomFraction:(double)arg1 ;
-(CGPoint)_centerOfMiniPodIconViews;
-(void)_cancelAnimationForIconViewClippedOrObscured;
-(id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3 searchBar:(id)arg4 libraryViewController:(id)arg5 ;
-(void)libraryViewController:(id)arg1 willPresentSearchController:(id)arg2 ;
@end

