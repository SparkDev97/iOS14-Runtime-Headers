/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class MTVisualStylingProvider, UILongPressGestureRecognizer, CCUICAPackageDescription, UIImage, NSString, UIColor, UIView, UIImageView, CCUICAPackageView;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {

	MTVisualStylingProvider* _visualStylingProvider;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _useAlternateBackground;
	CCUICAPackageDescription* _glyphPackageDescription;
	UIImage* _glyphImage;
	NSString* _glyphState;
	UIColor* _highlightColor;
	UIView* _normalStateBackgroundView;
	UIView* _selectedStateBackgroundView;
	UIView* _alternateSelectedStateBackgroundView;
	UIImageView* _glyphImageView;
	UIImageView* _selectedGlyphView;
	CCUICAPackageView* _glyphPackageView;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIView * normalStateBackgroundView;                              //@synthesize normalStateBackgroundView=_normalStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedStateBackgroundView;                            //@synthesize selectedStateBackgroundView=_selectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * alternateSelectedStateBackgroundView;                   //@synthesize alternateSelectedStateBackgroundView=_alternateSelectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;                                    //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIImageView * selectedGlyphView;                                 //@synthesize selectedGlyphView=_selectedGlyphView - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * glyphPackageView;                            //@synthesize glyphPackageView=_glyphPackageView - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,nonatomic) BOOL useAlternateBackground;                                     //@synthesize useAlternateBackground=_useAlternateBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setGlyphPackageView:(CCUICAPackageView *)arg1 ;
-(void)setAlternateSelectedStateBackgroundView:(UIView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(UIImage *)glyphImage;
-(void)setSelectedStateBackgroundView:(UIView *)arg1 ;
-(double)_cornerRadius;
-(CGSize)intrinsicContentSize;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(void)_updateForStateChange;
-(void)_primaryActionPerformed:(id)arg1 ;
-(UIView *)selectedStateBackgroundView;
-(UIView *)normalStateBackgroundView;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(BOOL)useAlternateBackground;
-(void)_deactivateReachability:(id)arg1 ;
-(void)dealloc;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(void)layoutSubviews;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(void)_updateVisualStylingOfGlyphView:(id)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIImageView *)glyphImageView;
-(NSString *)glyphState;
-(id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(CCUICAPackageView *)glyphPackageView;
-(UIColor *)highlightColor;
-(void)setNormalStateBackgroundView:(UIView *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)alternateSelectedStateBackgroundView;
-(void)setSelectedGlyphView:(UIImageView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)didMoveToWindow;
-(UIImageView *)selectedGlyphView;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
@end

