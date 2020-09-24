/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>
@class UIFont, UIColor;


@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@required
-(UIColor *)titleColor;
-(UIColor *)dividerColor;
-(UIFont *)summaryFont;
-(UIEdgeInsets)HUDViewInsets;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryLineHeight;
-(double)summaryLineSpacing;
-(double)summaryModifiersSpacing;
-(double)summaryDescriptionToModifiersSpacing;
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDHeightForHeight:(double)arg1;
-(double)maxHUDWidthForWidth:(double)arg1;
-(double)columnDividerWidth;
-(double)HUDPageControlBottomMargin;
-(double)columnDividerHeightForHUDHeight:(double)arg1;
-(UIColor *)inputColor;

@end


@class UIFont, UIColor, NSString;

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visualStyleForTraitCollection:(id)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
@end
