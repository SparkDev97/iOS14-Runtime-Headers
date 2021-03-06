/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSuspendedUnderLockManagerDelegate;
@class FBWorkspaceEventQueue;

@interface SBSuspendedUnderLockManager : NSObject {

	id<SBSuspendedUnderLockManagerDelegate> _delegate;
	FBWorkspaceEventQueue* _eventQueue;
	BOOL _suspendedUnderLock;
	BOOL _eventQueue_suspendedUnderLock;

}

@property (assign,nonatomic,__weak) id<SBSuspendedUnderLockManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock;                  //@synthesize suspendedUnderLock=_suspendedUnderLock - In the implementation block
-(BOOL)isSuspendedUnderLock;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 alongsideWillChangeBlock:(/*^block*/id)arg2 alongsideDidChangeBlock:(/*^block*/id)arg3 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(BOOL)_shouldBeBackgroundUnderLockForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)setDelegate:(id<SBSuspendedUnderLockManagerDelegate>)arg1 ;
-(id<SBSuspendedUnderLockManagerDelegate>)delegate;
-(void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
@end

