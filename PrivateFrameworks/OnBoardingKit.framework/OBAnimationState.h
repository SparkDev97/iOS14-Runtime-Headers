/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OBAnimationState : NSObject {

	NSString* _name;
	double _transitionDuration;
	double _transitionSpeed;
	NSString* _darkName;

}

@property (nonatomic,retain) NSString * darkName;                    //@synthesize darkName=_darkName - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double transitionSpeed;                 //@synthesize transitionSpeed=_transitionSpeed - In the implementation block
-(void)setTransitionDuration:(double)arg1 ;
-(NSString *)darkName;
-(id)initWithStateName:(id)arg1 transitionDuration:(double)arg2 transitionSpeed:(double)arg3 ;
-(void)setTransitionSpeed:(double)arg1 ;
-(void)setDarkName:(NSString *)arg1 ;
-(id)initWithStateName:(id)arg1 darkStateName:(id)arg2 transitionDuration:(double)arg3 transitionSpeed:(double)arg4 ;
-(void)setName:(NSString *)arg1 ;
-(double)transitionDuration;
-(NSString *)name;
-(double)transitionSpeed;
-(id)stateForLayer:(id)arg1 ;
@end

