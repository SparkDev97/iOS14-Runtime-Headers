/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;
	SBAppLayout* _fromAppLayout;
	long long _floatingConfiguration;
	unsigned long long _direction;
	BOOL _hasReshuffledZOrder;

}
-(id)transitionWillBegin;
-(id)_layoutSettings;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillUpdate;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)keyboardSuppressionMode;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(unsigned long long)arg5 needsOvershoot:(BOOL)arg6 ;
@end

