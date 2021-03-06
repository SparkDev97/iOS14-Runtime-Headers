/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class UIKBRenderConfig, UIDictationView, NSString;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {

	UIKBRenderConfig* _renderConfig;
	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)backgroundColorForCurrentRenderConfig;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;
-(CGRect)_backgroundFillFrame;
-(void)drawRect:(CGRect)arg1 ;
-(UIDictationView *)dictationView;
@end

