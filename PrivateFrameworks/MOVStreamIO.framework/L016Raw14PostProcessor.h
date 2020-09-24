/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/DefaultPostProcessor.h>

@interface L016Raw14PostProcessor : DefaultPostProcessor {

	BOOL _l010OutputFormatRAW14L016;

}

@property (assign,nonatomic) BOOL l010OutputFormatRAW14L016;              //@synthesize l010OutputFormatRAW14L016=_l010OutputFormatRAW14L016 - In the implementation block
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(unsigned)processedPixelFormat;
-(id)initWithOriginalPixelFormat:(unsigned)arg1 l010OutputFormatRAW14L016:(BOOL)arg2 ;
-(BOOL)l010OutputFormatRAW14L016;
-(void)setL010OutputFormatRAW14L016:(BOOL)arg1 ;
@end
