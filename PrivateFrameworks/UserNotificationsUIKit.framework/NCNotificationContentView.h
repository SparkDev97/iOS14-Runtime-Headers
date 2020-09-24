/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol NCNotificationContentViewDelegate;
@class UIView, UIImageView, NSMutableDictionary, NSStringDrawingContext, MTVisualStylingProvider, UILabel, UITextView, NSString, BSUIFontProvider, BSUIEmojiLabelView, UIImage, NSArray;

@interface NCNotificationContentView : UIView <UITextViewDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {

	long long _lookStyle;
	UIEdgeInsets _contentInsets;
	UIView* _contentView;
	UIImageView* _thumbnailImageView;
	NSMutableDictionary* _widthToFontToStringToMeasuredNumLines;
	NSStringDrawingContext* _drawingContext;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _hasUpdatedContent;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _useSmallTopMargin;
	UILabel* _secondaryLabel;
	UITextView* _secondaryTextView;
	NSString* _preferredContentSizeCategory;
	id<NCNotificationContentViewDelegate> _delegate;
	UIView* _accessoryView;
	unsigned long long _maximumNumberOfPrimaryTextLines;
	unsigned long long _maximumNumberOfPrimaryLargeTextLines;
	unsigned long long _maximumNumberOfSecondaryTextLines;
	unsigned long long _maximumNumberOfSecondaryLargeTextLines;
	BSUIFontProvider* _fontProvider;
	UILabel* _primaryLabel;
	UILabel* _primarySubtitleLabel;
	BSUIEmojiLabelView* _summaryLabel;

}

@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider;                             //@synthesize fontProvider=_fontProvider - In the implementation block
@property (setter=_setPrimaryLabel:,getter=_primaryLabel,nonatomic,retain) UILabel * primaryLabel;                                      //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (setter=_setPrimarySubtitleLabel:,getter=_primarySubtitleLabel,nonatomic,retain) UILabel * primarySubtitleLabel;              //@synthesize primarySubtitleLabel=_primarySubtitleLabel - In the implementation block
@property (getter=_secondaryLabel,nonatomic,readonly) UILabel * secondaryLabel;                                                         //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (getter=_secondaryTextView,nonatomic,readonly) UITextView * secondaryTextView;                                                //@synthesize secondaryTextView=_secondaryTextView - In the implementation block
@property (setter=_setSummaryLabel:,getter=_summaryLabel,nonatomic,retain) BSUIEmojiLabelView * summaryLabel;                           //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationContentViewDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView;                                                                                    //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;                                                        //@synthesize maximumNumberOfPrimaryTextLines=_maximumNumberOfPrimaryTextLines - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;                                                   //@synthesize maximumNumberOfPrimaryLargeTextLines=_maximumNumberOfPrimaryLargeTextLines - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;                                                      //@synthesize maximumNumberOfSecondaryTextLines=_maximumNumberOfSecondaryTextLines - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;                                                 //@synthesize maximumNumberOfSecondaryLargeTextLines=_maximumNumberOfSecondaryLargeTextLines - In the implementation block
@property (assign,nonatomic) BOOL useSmallTopMargin;                                                                                    //@synthesize useSmallTopMargin=_useSmallTopMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                                     //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                    //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_updateContentInsets;
-(id)_fontProvider;
-(UIView *)accessoryView;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(id)initWithStyle:(long long)arg1 ;
-(NSString *)debugDescription;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)_layoutSubviews;
-(void)setAccessoryView:(UIView *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(NSString *)summaryText;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<NCNotificationContentViewDelegate>)arg1 ;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)_summaryLabel;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(UIImage *)thumbnail;
-(id<NCNotificationContentViewDelegate>)delegate;
-(UIEdgeInsets)_contentInsets;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_primaryLabel;
-(id)_secondaryLabel;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1 ;
-(void)setUseSmallTopMargin:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;
-(void)_setFontProvider:(id)arg1 ;
-(UIEdgeInsets)_contentInsetsForStyle:(long long)arg1 ;
-(id)_lazyPrimaryLabel;
-(id)_lazySecondaryTextSupportingView;
-(id)_lazySummaryLabel;
-(UIEdgeInsets)_contentInsetsForLongLook;
-(UIEdgeInsets)_contentInsetsForShortLook;
-(BOOL)useSmallTopMargin;
-(unsigned long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3 scale:(double)arg4 ;
-(double)_primaryTextBaselineOffsetForCurrentStyle;
-(double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(id)_lazyPrimarySubtitleLabel;
-(double)_primarySubtitleTextBaselineOffsetForCurrentStyle;
-(unsigned long long)_secondaryTextNumberOfLines;
-(double)_secondaryTextBaselineOffsetForCurrentStyle;
-(double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1 ;
-(double)_summaryTextBaselineOffsetForCurrentStyle;
-(double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1 ;
-(void)_invalidateNumberOfLinesCache;
-(unsigned long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(CGSize)arg3 ;
-(unsigned long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2 ;
-(unsigned long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2 ;
-(unsigned long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2 ;
-(unsigned long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2 ;
-(unsigned long long)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1 ;
-(double)topMarginToPrimaryLabelForCurrentStyle;
-(CGRect)_primaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_primarySubtitleLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_secondaryTextViewBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGRect)_summaryLabelBoundsForSize:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 withContentInsets:(UIEdgeInsets)arg2 ;
-(void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2 ;
-(id)_newPrimaryLabel;
-(void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2 ;
-(void)_clearCacheForFont:(id)arg1 ;
-(void)_updateContentModeForThumbnailImage:(id)arg1 ;
-(void)_updateStyleForThumbnailImage:(id)arg1 withStyle:(long long)arg2 ;
-(id)_secondaryTextSupportingView;
-(void)_updateTextAttributesForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2 ;
-(void)_configureTextSupportingView:(id)arg1 ;
-(id)_newSecondaryLabel;
-(void)_updateStyleForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2 ;
-(id)_newSecondaryTextView;
-(id)_lazySecondaryTextView;
-(id)_lazySecondaryLabel;
-(void)_updateTextAttributesForSummaryLabel:(id)arg1 withStyle:(long long)arg2 ;
-(id)_newSummaryLabel;
-(void)_updateStyleForSummaryLabel:(id)arg1 withStyle:(long long)arg2 ;
-(id)_lazyThumbnailImageView;
-(CGRect)_frameForThumbnailInRect:(CGRect)arg1 withContentViewInsets:(UIEdgeInsets)arg2 ;
-(id)_primarySubtitleLabel;
-(id)_secondaryTextView;
-(void)_setPrimaryLabel:(id)arg1 ;
-(void)_setPrimarySubtitleLabel:(id)arg1 ;
-(void)_setSummaryLabel:(id)arg1 ;
@end
