/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol WFDrawerGestureCoordinatorDelegate <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIView * drawerView; 
@property (nonatomic,readonly) double minimumDrawerHeight; 
@property (nonatomic,readonly) double maximumDrawerHeight; 
@property (nonatomic,readonly) double drawerHeight; 
@property (nonatomic,readonly) CGRect grabberAreaBounds; 
@required
-(UIView *)containerView;
-(double)drawerHeight;
-(double)minimumDrawerHeight;
-(double)maximumDrawerHeight;
-(CGRect)grabberAreaBounds;
-(void)gestureCoordinatorDidBeginInteraction:(id)arg1;
-(void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
-(void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;
-(UIView *)drawerView;

@end
