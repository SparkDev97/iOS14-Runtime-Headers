/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation {

	CGColorRef _highLightColor;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(Class)viewClass;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(int)annotationType;
-(BOOL)recognizeGestures;
-(void)drawLayerUpright:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
-(void)drawLayerRotated:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
@end

