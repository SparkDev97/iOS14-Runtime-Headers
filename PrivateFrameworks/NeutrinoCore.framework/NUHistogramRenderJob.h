/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUScalePolicy;
@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;

@interface NUHistogramRenderJob : NURenderJob {

	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NUImageHistogram* _histogram;
	CIRenderTask* _renderTask;
	id<NUScalePolicy> _scalePolicy;

}
-(id)cacheKey;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(BOOL)complete:(out id*)arg1 ;
-(void)cleanUp;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithHistogramRequest:(id)arg1 ;
-(id)histogramRequest;
@end
