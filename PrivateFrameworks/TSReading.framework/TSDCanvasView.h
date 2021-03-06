/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextLinkInteraction.h>
#import <libobjc.A.dylib/_UITextInputRevealSupportProviding.h>

@protocol TSDCanvasLayerHosting, UITextLinkInteraction;
@class TSDInteractiveCanvasController, TSKScrollView, TSDCanvasLayer;

@interface TSDCanvasView : UIView <UITextLinkInteraction, _UITextInputRevealSupportProviding> {

	TSDInteractiveCanvasController* mController;
	id<TSDCanvasLayerHosting> mLayerHost;
	id<UITextLinkInteraction> mHyperLinkDelegate;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (assign,nonatomic) id<UITextLinkInteraction> hyperLinkDelegate; 
@property (readonly) TSKScrollView * enclosingScrollView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) TSDCanvasView * rootCanvasView; 
+(Class)layerClass;
-(BOOL)accessibilityElementsHidden;
-(id)sxaxNextSpeakThisElementFromElement:(id)arg1 ;
-(id)_speakThisElements;
-(BOOL)_isInPreviewPlatter;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)teardown;
-(TSKScrollView *)enclosingScrollView;
-(BOOL)isInteractingWithLink;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)mightHaveLinks;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSDInteractiveCanvasController *)controller;
-(TSDCanvasLayer *)canvasLayer;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(TSDCanvasView *)rootCanvasView;
-(id)_textInputForReveal;
-(id)_textImageFromRect:(CGRect)arg1 ;
-(id<UITextLinkInteraction>)hyperLinkDelegate;
-(void)setHyperLinkDelegate:(id<UITextLinkInteraction>)arg1 ;
@end

