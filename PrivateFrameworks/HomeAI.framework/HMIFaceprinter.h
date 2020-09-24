/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)currentModelUUID;
+(long long)_minorVersionFromVisionVersion:(int)arg1 ;
-(void)warmStart;
-(CVBufferRef)createFacePixelBufferForFaceDetection:(id)arg1 pixelBuffer:(CVBufferRef)arg2 roll:(id)arg3 error:(id*)arg4 ;
-(id)createFaceprintForFacePixelBuffer:(CVBufferRef)arg1 fastMode:(BOOL)arg2 error:(id*)arg3 ;
-(CVBufferRef)createFacePixelBufferFromFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)generateFaceprintForFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)updatedFaceprintsForFaceCrops:(id)arg1 withExistingFaceprints:(id)arg2 error:(id*)arg3 ;
@end
