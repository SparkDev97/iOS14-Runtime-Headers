/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UIHoverEvent : UIEvent {

	NSMapTable* _touchesByContextId;
	NSMapTable* _deliveryTableByTouch;
	BOOL _pointerLocked;
	BOOL _hasOutstandingUpdates;

}

@property (assign,nonatomic) BOOL hasOutstandingUpdates;                                                         //@synthesize hasOutstandingUpdates=_hasOutstandingUpdates - In the implementation block
@property (assign,setter=_setPointerLocked:,getter=_isPointerLocked,nonatomic) BOOL _pointerLocked;              //@synthesize pointerLocked=_pointerLocked - In the implementation block
-(unsigned long long)_inputPrecision;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)_deliveryTableByTouchCreateIfNeeded:(id)arg1 ;
-(id)touchesForWindow:(id)arg1 ;
-(id)allTouches;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(long long)subtype;
-(id)hoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(id)_windows;
-(void)_pointerStateDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(BOOL)arg2 ;
-(id)touchesForView:(id)arg1 ;
-(void)setNeedsUpdateForWindow:(id)arg1 ;
-(void)setHoverTouch:(id)arg1 forContextId:(unsigned)arg2 pathIndex:(long long)arg3 ;
-(void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(id)_init;
-(void)removeHoverTouchForContextId:(unsigned)arg1 pathIndex:(long long)arg2 ;
-(void)_windowDidDetachContext:(id)arg1 ;
-(long long)type;
-(BOOL)_isPointerLocked;
-(id)_touchesByContextId:(unsigned)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)setNeedsHitTestResetForWindow:(id)arg1 ;
-(void)_setPointerLocked:(BOOL)arg1 ;
-(void)_cancelAllGestureRecognizers;
-(void)setHasOutstandingUpdates:(BOOL)arg1 ;
-(BOOL)hasOutstandingUpdates;
@end

