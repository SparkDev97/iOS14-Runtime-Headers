/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	double _percentComplete;

}

@property (assign,nonatomic) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(double)valueForFunctionWithName:(id)arg1 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4 ;
-(id)timingFunctionNames;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 ;
-(void)setPercentComplete:(double)arg1 ;
-(double)percentComplete;
-(id)init;
@end

