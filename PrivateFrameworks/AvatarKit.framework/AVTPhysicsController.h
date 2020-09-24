/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTPhysicsControllerDelegate;
@class NSMutableArray;

@interface AVTPhysicsController : NSObject {

	NSMutableArray* _physicsRigs;
	BOOL _setupDone;
	BOOL _firstFrameRendered;
	id<AVTPhysicsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVTPhysicsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AVTPhysicsControllerDelegate>)arg1 ;
-(id<AVTPhysicsControllerDelegate>)delegate;
-(id)physicsState;
-(void)setupPhysics;
-(void)applyForcesWithMultiplier:(double)arg1 ;
-(void)_setupPhysicsChain:(id)arg1 ;
-(void)_setupCollisionNode:(id)arg1 ;
-(void)updateAtTime:(double)arg1 forceMultiplier:(double)arg2 ;
-(3)offsetFromRestingPositionForNode:(id)arg1 inCoordinateSpaceOfNode:(id)arg2 ;
-(void)downforcesDidChange;
-(void)setupPhysicsIfNeeded;
-(void)resetToPhysicsState:(id)arg1 ;
@end
