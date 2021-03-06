/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface _UIKeyboardLayoutAlignmentView : UIView {

	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
+(CGRect)_endFrameForNotification:(id)arg1 inView:(id)arg2 ;
+(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 inView:(id)arg2 ;
+(BOOL)_shouldIgnoreFrameChangeNotification:(id)arg1 inView:(id)arg2 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_removeConstraints;
-(void)_stopObservingKeyboardNotifications;
-(void)_keyboardChanged:(id)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_matchInitialKeyboardFrame;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
-(void)_createConstraints;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
@end

