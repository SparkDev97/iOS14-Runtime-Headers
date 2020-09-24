/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIBlockAnimationController.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class NSString;

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver> {

	/*^block*/id _animationCompletion;

}

@property (nonatomic,copy) id animationCompletion;                  //@synthesize animationCompletion=_animationCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)setAnimationCompletion:(id)arg1 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(BOOL)isFluidSwitcherAnimationController;
-(id)animationCompletion;
@end
