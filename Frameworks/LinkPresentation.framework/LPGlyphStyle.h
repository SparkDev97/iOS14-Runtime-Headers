/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPImage, LPPadding, LPImageViewStyle, LPPointUnit;

@interface LPGlyphStyle : NSObject {

	LPImage* _image;
	LPPadding* _padding;
	double _opacity;
	LPImageViewStyle* _imageStyle;
	LPPointUnit* _baselineOffset;

}

@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double opacity;                               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,retain) LPPointUnit * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
-(void)setImage:(LPImage *)arg1 ;
-(void)setBaselineOffset:(LPPointUnit *)arg1 ;
-(double)opacity;
-(LPPadding *)padding;
-(id)init;
-(LPImageViewStyle *)imageStyle;
-(LPImage *)image;
-(id)initSearchGlyph;
-(LPPointUnit *)baselineOffset;
-(void)setOpacity:(double)arg1 ;
@end
