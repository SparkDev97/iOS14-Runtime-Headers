/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject {

	SXAnimatedImageViewCache* _cache;
	CGImageSourceRef _imageSource;
	double _duration;
	unsigned long long _index;
	long long _imageType;

}

@property (nonatomic,readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long imageType;                       //@synthesize imageType=_imageType - In the implementation block
-(unsigned long long)index;
-(CGImageSourceRef)imageSource;
-(double)duration;
-(void)dealloc;
-(id)image;
-(long long)imageType;
-(void)captureFrameProperties;
-(id)initWithImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4 ;
@end
