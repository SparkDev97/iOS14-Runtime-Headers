/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UICollectionViewCellAppearanceState : NSObject {

	BOOL _hasLifted;
	BOOL _hasBeganCancelling;
	int _dragState;

}

@property (assign,nonatomic) int dragState;                                       //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic) BOOL hasLifted;                                      //@synthesize hasLifted=_hasLifted - In the implementation block
@property (assign,nonatomic) BOOL hasBeganCancelling;                             //@synthesize hasBeganCancelling=_hasBeganCancelling - In the implementation block
@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,readonly) BOOL hasBeganDroppingInto; 
@property (nonatomic,readonly) BOOL enrouteToOrReachedTerminalState; 
-(void)didEnd;
-(void)didMove;
-(long long)appearance;
-(BOOL)hasLifted;
-(id)init;
-(int)dragState;
-(void)didBeginLift;
-(void)setDragState:(int)arg1 ;
-(void)setHasLifted:(BOOL)arg1 ;
-(void)didCompleteLift;
-(BOOL)hasBeganCancelling;
-(void)didBeginCancelling;
-(BOOL)hasBeganDroppingInto;
-(void)didCompleteCancelling;
-(void)willBeginCancelling;
-(void)didCompleteDropping;
-(void)didBeginDroppingInto;
-(void)didBeginDropping;
-(BOOL)enrouteToOrReachedTerminalState;
-(id)description;
-(void)setHasBeganCancelling:(BOOL)arg1 ;
@end

