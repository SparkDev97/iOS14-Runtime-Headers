/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;
@class _UIDynamicAnimationGroup, UIView, UIColor, UIPanGestureRecognizer, NSString;

@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate> {

	double _prevResizingOffset;
	double _resizingOffset;
	double _foregroundOpacity;
	_UIDynamicAnimationGroup* _resizingAnimationGroup;
	UIView* _grabber;
	UIColor* _grabberColor;
	BOOL _isResizing;
	id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _gestureRecognizer;

}

@property (assign,nonatomic,__weak) id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double resizingOffset;                                                             //@synthesize resizingOffset=_resizingOffset - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * gestureRecognizer;                                        //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL isResizing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)savedResizingOffset;
-(void)uninstallGestureRecognizers;
-(void)updateGestureRecognizers;
-(double)resizingOffset;
-(void)dimKeys:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isResizing;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setRenderConfig:(id)arg1 ;
-(void)stopResizing;
-(void)reloadResizingOffset;
-(id)init;
-(void)setDelegate:(id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate>)arg1 ;
-(void)saveResizingStopIndex:(unsigned long long)arg1 ;
-(id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate>)delegate;
-(void)handleResizeGesture:(id)arg1 ;
-(void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(BOOL)arg2 ;
-(void)updateGrabber;
@end

