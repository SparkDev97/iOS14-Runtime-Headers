/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSNumber, CIFilter;

@interface CIImageWriter : CIFilter {

	CIImage* inputImage;
	NSString* inputFilename;
	NSNumber* inputShouldDumpInputValues;
	CIFilter* inputOriginalFilter;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSString * inputFilename; 
@property (retain) NSNumber * inputShouldDumpInputValues; 
@property (retain) CIFilter * inputOriginalFilter; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(NSNumber *)inputShouldDumpInputValues;
-(NSString *)inputFilename;
-(void)setInputFilename:(NSString *)arg1 ;
-(void)setInputShouldDumpInputValues:(NSNumber *)arg1 ;
-(CIFilter *)inputOriginalFilter;
-(void)setInputOriginalFilter:(CIFilter *)arg1 ;
@end
