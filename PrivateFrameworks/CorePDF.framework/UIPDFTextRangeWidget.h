/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIPDFSelectionWidget.h>

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {

	CALayer* _startSelectionGrabber;
	CALayer* _startBar;
	CALayer* _endSelectionGrabber;
	CALayer* _endBar;
	CALayer* _startHandle;
	CALayer* _endHandle;
	CALayer* _fixedSelectionGrabber;
	UIPDFPageView* _pageView;
	double _handleHeight;
	double _handleWidth;
	CGPoint _initialSelectionPointOnPage;
	double _offsetX;
	double _offsetY;
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	CGColorRef _grabberColor;
	long long _startRectangle;
	long long _endRectangle;
	BOOL _startLeft;
	BOOL _endRight;
	double _startX;
	double _endX;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                           //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage;              //@synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage - In the implementation block
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
-(void)hide;
-(void)remove;
-(void)dealloc;
-(UIPDFPageView *)pageView;
-(void)track:(CGPoint)arg1 ;
-(id)init;
-(void)layout;
-(void)setSelection:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)description;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(void)layoutStartSelectionGrabber:(CGRect)arg1 transform:(CGAffineTransform*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(CGSize)arg5 ;
-(void)layoutEndSelectionGrabber:(CGRect)arg1 transform:(CGAffineTransform*)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(CGSize)arg5 ;
-(void)layoutWidget;
@end
