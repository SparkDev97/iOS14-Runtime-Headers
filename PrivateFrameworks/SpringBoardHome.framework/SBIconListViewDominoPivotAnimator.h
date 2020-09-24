/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListLayoutAnimating.h>

@protocol SBIconListViewDominoPivotAnimatorDelegate;
@class SBHIconEditingSettings, SBIcon, NSString;

@interface SBIconListViewDominoPivotAnimator : NSObject <SBIconListLayoutAnimating> {

	SBHIconEditingSettings* _iconEditingSettings;
	SBIcon* _pivotIcon;
	id<SBIconListViewDominoPivotAnimatorDelegate> _delegate;
	unsigned long long _pivotIconIndex;

}

@property (assign,nonatomic) unsigned long long pivotIconIndex;                                          //@synthesize pivotIconIndex=_pivotIconIndex - In the implementation block
@property (nonatomic,readonly) SBIcon * pivotIcon;                                                       //@synthesize pivotIcon=_pivotIcon - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListViewDominoPivotAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBIcon *)pivotIcon;
-(unsigned long long)pivotIconIndex;
-(void)setPivotIconIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SBIconListViewDominoPivotAnimatorDelegate>)arg1 ;
-(void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(SBIconListLayoutAnimationParameters)arg3 alongsideAnimationBlock:(/*^block*/id)arg4 ;
-(void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SBIconListViewDominoPivotAnimatorDelegate>)delegate;
-(id)initWithPivotIcon:(id)arg1 ;
@end
