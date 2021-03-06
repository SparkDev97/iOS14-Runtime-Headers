/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIAdvertisingPrivacyControlProtocol.h>
#import <UIKitCore/_UIVariableGestureContextMenuInteractionDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate_Private.h>
#import <UIKitCore/_UICursorInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class NSString, NSMutableArray, UIPointerInteraction, _UICursorInteraction, NSSet, UIContextMenuInteraction;

@interface UIControl : UIView <SKUIAdvertisingPrivacyControlProtocol, _UIVariableGestureContextMenuInteractionDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate_Private, _UICursorInteractionDelegate, UIContextMenuInteractionDelegate> {

	NSMutableArray* _targetActions;
	CGPoint _previousPoint;
	double _downTime;
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 3;
		unsigned horizontalAlignment : 3;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
		unsigned hasPointerInteraction : 1;
		unsigned hasProxyPointerInteraction : 1;
		unsigned hasContextMenuInteraction : 1;
		unsigned highlightForMenuPresentation : 1;
	}  _controlFlags;
	long long _requiredButtonMask;

}

@property (assign,nonatomic) BOOL ttrIsEnabled; 
@property (nonatomic,retain) NSString * adPrivacyData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long effectiveContentVerticalAlignment; 
@property (nonatomic,readonly) UIPointerInteraction * pointerInteraction; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (nonatomic,readonly) UIPointerInteraction * _pointerInteraction; 
@property (setter=_setProxyPointerInteraction:,nonatomic,retain) UIPointerInteraction * _proxyPointerInteraction; 
@property (assign,setter=_setProxySender:,nonatomic,__weak) id _proxySender; 
@property (assign,getter=isContextMenuEnabled,nonatomic) BOOL contextMenuEnabled; 
@property (assign,nonatomic) BOOL contextMenuIsPrimary; 
@property (assign,setter=_setRequiredButtonMask:,nonatomic) long long _requiredButtonMask;                                     //@synthesize requiredButtonMask=_requiredButtonMask - In the implementation block
@property (nonatomic,readonly) _UICursorInteraction * cursorInteraction; 
@property (nonatomic,readonly) _UICursorInteraction * _cursorInteraction; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) long long contentVerticalAlignment; 
@property (assign,nonatomic) long long contentHorizontalAlignment; 
@property (nonatomic,readonly) long long effectiveContentHorizontalAlignment; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (getter=isTouchInside,nonatomic,readonly) BOOL touchInside; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (nonatomic,readonly) unsigned long long allControlEvents; 
@property (nonatomic,readonly) UIContextMenuInteraction * contextMenuInteraction; 
@property (assign,getter=isContextMenuInteractionEnabled,nonatomic) BOOL contextMenuInteractionEnabled; 
@property (assign,nonatomic) BOOL showsMenuAsPrimaryAction; 
+(BOOL)_allowActionsToQueue;
+(BOOL)_cursorInteractionEnabled;
+(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(void)ne_sendAction:(id)arg1 ;
-(void)tmlSignalAttach:(id)arg1 ;
-(void)tmlSignalDetach:(id)arg1 ;
-(BOOL)ttrIsEnabled;
-(void)setTtrIsEnabled:(BOOL)arg1 ;
-(NSString *)adPrivacyData;
-(void)setAdPrivacyData:(NSString *)arg1 ;
-(void)_mapkit_setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_cnui_super_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)isTracking;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(UIPointerInteraction *)pointerInteraction;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_distributionStatisticsForUserInteractionDuration;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2 ;
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isEnabled;
-(BOOL)canBecomeFocused;
-(long long)effectiveContentHorizontalAlignment;
-(BOOL)shouldTrack;
-(void)setContextMenuIsPrimary:(BOOL)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_cancelDelayedActions;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(BOOL)_wasLastHighlightSuccessful;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_invalidatePointerInteraction;
-(long long)effectiveContentVerticalAlignment;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(void)_setProxySender:(id)arg1 ;
-(void)sendAction:(id)arg1 ;
-(id)_proxySender;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(id)_createPointerInteraction;
-(void)_delayActions;
-(BOOL)cancelTouchTracking;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(unsigned long long)allControlEvents;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(_UICursorInteraction *)cursorInteraction;
-(void)_installCursorInteractionIfNeeded;
-(id)_allTargetActions;
-(BOOL)isSelected;
-(BOOL)isPointerInteractionEnabled;
-(void)_addControlTargetAction:(id)arg1 ;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(long long)_requiredButtonMask;
-(BOOL)requiresDisplayOnTracking;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(NSSet *)allTargets;
-(BOOL)hasOneOrMoreTargets;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_commitInteractionDurationStatisticMeasurements;
-(BOOL)isContextMenuInteractionEnabled;
-(BOOL)cancelMouseTracking;
-(void)_contextMenuInteraction:(id)arg1 willBeginWithConfiguration:(id)arg2 ;
-(void)removeAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)_sendDelayedActions;
-(void)removeActionForIdentifier:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(void)enumerateEventHandlers:(/*^block*/id)arg1 ;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(void)setContextMenuInteractionEnabled:(BOOL)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(BOOL)isTouchInside;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(void)setContextMenuEnabled:(BOOL)arg1 ;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(BOOL)isContextMenuEnabled;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(BOOL)contextMenuIsPrimary;
-(void)_setRequiredButtonMask:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)addAction:(id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)_unhighlight;
-(BOOL)touchDragged;
-(long long)_focusedSound;
-(void)setPointerInteractionEnabled:(BOOL)arg1 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(double)_highlightCornerRadius;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(void)_setProxyPointerInteraction:(id)arg1 ;
-(UIPointerInteraction *)_proxyPointerInteraction;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(_UICursorInteraction *)_cursorInteraction;
-(unsigned long long)state;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIPointerInteraction *)_pointerInteraction;
-(void)setShowsMenuAsPrimaryAction:(BOOL)arg1 ;
-(long long)_sceneDraggingBehaviorOnPan;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)_commonInitForPrimaryAction:(id)arg1 ;
-(BOOL)_touchHasHighlighted;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 primaryAction:(id)arg2 ;
-(long long)contentVerticalAlignment;
-(id)_contextMenuInteraction;
-(long long)contentHorizontalAlignment;
-(BOOL)showsMenuAsPrimaryAction;
@end

