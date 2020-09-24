/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class CIContext, CIFilter, VNDetectContoursRequest, VNImageBuffer, CIImage, ParabolaDetetction;

@interface VNTrajectoryProcessor : NSObject {

	CIContext* _ciContext;
	CIFilter* _absoluteDiffFilter;
	CIFilter* _thresholdFilter;
	CIFilter* _dilateFilter;
	CIFilter* _contrastFilter;
	VNDetectContoursRequest* _detectContoursRequest;
	VNImageBuffer* _previousFrameBuffer;
	CIImage* _previousFrameImage;
	unsigned long long _maximumImageDimension;
	float _preScaleFactor;
	float _dilateRadius;
	SCD_Struct_VN49 _frameAnalysisSpacing;
	SCD_Struct_VN49 _lastAnalyzedFramePTS;
	SCD_Struct_VN49 _nextFrameToBeAnalyzedPTS;
	BOOL _processAllFrames;
	CGColorSpaceRef _sRGB;
	ParabolaDetetction* _parabolaDetector;
	unsigned long long _currentImageWidth;
	unsigned long long _currentImageHeight;

}
-(void)dealloc;
-(id)initWithFrameAnalysisSpacing:(SCD_Struct_VN49)arg1 trajectoryLength:(long long)arg2 ;
-(CVBufferRef)_createCroppedAndScaledBufferFromVNImageBuffer:(id)arg1 regionOfInterest:(CGRect)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)_VNPointsFromCGPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 ;
-(id)processVNImageBuffer:(id)arg1 regionOfInterest:(CGRect)arg2 withOptions:(id)arg3 warningRecorder:(id)arg4 requestUUID:(id)arg5 error:(id*)arg6 ;
@end
