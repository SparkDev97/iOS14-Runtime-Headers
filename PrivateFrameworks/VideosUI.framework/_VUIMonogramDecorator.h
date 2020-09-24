/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface _VUIMonogramDecorator : TVImageScaleDecorator {

	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(UIColor *)borderColor;
-(void)setBorderWidth:(double)arg1 ;
-(id)decoratorIdentifier;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
@end
