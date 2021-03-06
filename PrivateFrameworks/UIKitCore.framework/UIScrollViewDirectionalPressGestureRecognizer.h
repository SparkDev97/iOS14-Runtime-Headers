/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIView, UIScrollView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {

	BOOL _hasBeenModified;
	UIView* _originalView;
	UIScrollView* _scrollView;
	long long _activePressType;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long activePressType;                   //@synthesize activePressType=_activePressType - In the implementation block
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(long long)activePressType;
-(void)reset;
-(void)_setEnabledIfAllowed:(BOOL)arg1 ;
-(void)_addToViewIfAllowed:(id)arg1 ;
-(void)_resetToOriginalViewIfAllowed;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

