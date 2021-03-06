/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
#import <CMCapture/CMCapture-Structs.h>
@class FigMetalContext;

@interface FigMetalHistogram : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _pipelineStates[1];

}
-(int)_initShaders;
-(int)singleComponentCPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputHistogram:(SCD_Struct_Fi92*)arg3 ;
-(int)singleComponentGPUAverageInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputAverage:(float*)arg3 ;
-(int)singleComponentCPUAverageInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputAverage:(float*)arg3 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)singleComponentCPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 subSampleX:(unsigned)arg3 subSampleY:(unsigned)arg4 outputHistogram:(SCD_Struct_Fi92*)arg5 ;
-(int)singleComponentGPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputHistogram:(SCD_Struct_Fi92*)arg3 ;
@end

