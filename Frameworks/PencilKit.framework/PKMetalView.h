/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAMetalLayer;

@interface PKMetalView : UIView {

	CABackdropLayer* _backdropLayer;
	CAMetalLayer* _metalLayer;
	BOOL _isFixedPixelSize;
	BOOL _doubleBuffered;
	BOOL _useLuminanceColorFilter;
	unsigned long long _pixelFormat;
	CGSize _fixedPixelSize;

}

@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
@property (nonatomic,readonly) BOOL isFixedPixelSize;                       //@synthesize isFixedPixelSize=_isFixedPixelSize - In the implementation block
@property (nonatomic,readonly) CGSize fixedPixelSize;                       //@synthesize fixedPixelSize=_fixedPixelSize - In the implementation block
@property (assign,nonatomic) BOOL doubleBuffered;                           //@synthesize doubleBuffered=_doubleBuffered - In the implementation block
@property (nonatomic,readonly) BOOL isDrawableAvailable; 
@property (nonatomic,readonly) CGSize drawableSize; 
@property (assign,nonatomic) BOOL presentsWithTransaction; 
@property (assign,nonatomic) BOOL useLuminanceColorFilter;                  //@synthesize useLuminanceColorFilter=_useLuminanceColorFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(unsigned long long)pixelFormat;
-(BOOL)isDrawableAvailable;
-(CGSize)drawableSize;
-(BOOL)presentsWithTransaction;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg1 ;
-(void)setUseLuminanceColorFilter:(BOOL)arg1 ;
-(BOOL)useLuminanceColorFilter;
-(CAMetalLayer *)metalLayer;
-(void)setFixedPixelSize:(CGSize)arg1 ;
-(void)resizeDrawableIfNecessary;
-(id)initWithFrame:(CGRect)arg1 andPixelSize:(CGSize)arg2 pixelFormat:(unsigned long long)arg3 ;
-(void)flushDrawables;
-(BOOL)doubleBuffered;
-(void)setDoubleBuffered:(BOOL)arg1 ;
-(BOOL)isFixedPixelSize;
-(void)initLayer;
-(void)installLuminanceColorFilter;
-(CGImageRef)newLuminanceMap;
-(CGSize)fixedPixelSize;
-(id)initWithFrame:(CGRect)arg1 pixelFormat:(unsigned long long)arg2 ;
@end
