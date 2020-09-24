/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPEmailCompatibleCaptionBarItemChild.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPSize, LPPointUnit, LPPadding, LPShadowStyle, UIColor;

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying> {

	BOOL _requireFixedSize;
	BOOL _allowsPlatterPresentation;
	LPSize* _fixedSize;
	LPSize* _minimumSize;
	LPPointUnit* _fixedFallbackImageSize;
	LPPadding* _margin;
	LPPadding* _padding;
	long long _scalingMode;
	long long _filter;
	long long _verticalAlignment;
	LPShadowStyle* _shadow;
	UIColor* _maskColor;
	double _opacity;
	UIColor* _backgroundColor;
	LPPointUnit* _backgroundInset;
	LPPointUnit* _cornerRadius;
	double _darkeningAmount;

}

@property (nonatomic,retain) LPSize * fixedSize;                                //@synthesize fixedSize=_fixedSize - In the implementation block
@property (assign,nonatomic) BOOL requireFixedSize;                             //@synthesize requireFixedSize=_requireFixedSize - In the implementation block
@property (nonatomic,retain) LPSize * minimumSize;                              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,retain) LPPointUnit * fixedFallbackImageSize;              //@synthesize fixedFallbackImageSize=_fixedFallbackImageSize - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * margin;                       //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                      //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long scalingMode;                             //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) long long filter;                                  //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                       //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) LPShadowStyle * shadow;                            //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) UIColor * maskColor;                               //@synthesize maskColor=_maskColor - In the implementation block
@property (assign,nonatomic) double opacity;                                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL allowsPlatterPresentation;                    //@synthesize allowsPlatterPresentation=_allowsPlatterPresentation - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) LPPointUnit * backgroundInset;                     //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (nonatomic,retain) LPPointUnit * cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double darkeningAmount;                            //@synthesize darkeningAmount=_darkeningAmount - In the implementation block
-(LPShadowStyle *)shadow;
-(LPSize *)minimumSize;
-(LPPointUnit *)cornerRadius;
-(long long)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)backgroundInset;
-(void)setShadow:(LPShadowStyle *)arg1 ;
-(long long)verticalAlignment;
-(double)opacity;
-(void)setCornerRadius:(LPPointUnit *)arg1 ;
-(LPPadding *)padding;
-(UIColor *)backgroundColor;
-(void)setScalingMode:(long long)arg1 ;
-(void)setFixedSize:(LPSize *)arg1 ;
-(long long)scalingMode;
-(LPPadding *)margin;
-(id)init;
-(UIColor *)maskColor;
-(double)darkeningAmount;
-(BOOL)requireFixedSize;
-(void)setRequireFixedSize:(BOOL)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setDarkeningAmount:(double)arg1 ;
-(LPPointUnit *)fixedFallbackImageSize;
-(void)setFixedFallbackImageSize:(LPPointUnit *)arg1 ;
-(BOOL)allowsPlatterPresentation;
-(id)emailCompatibleMargin;
-(void)setAllowsPlatterPresentation:(BOOL)arg1 ;
-(void)setBackgroundInset:(LPPointUnit *)arg1 ;
-(void)setMinimumSize:(LPSize *)arg1 ;
-(void)setFilter:(long long)arg1 ;
-(LPSize *)fixedSize;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
@end
