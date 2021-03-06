/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <SearchToShareCore/STSImageCell.h>

@class UIButton, UIView, UILabel, UIImageView, NSMutableArray, UIImage, NSString;

@interface STSVideoCell : STSImageCell {

	UIButton* _playButton;
	UIView* _footerContainer;
	UILabel* _titleLabel;
	UIImageView* _providerIconView;
	UILabel* _subtitleLabel;
	UILabel* _providerLabel;
	UILabel* _durationLabel;
	NSMutableArray* _constraints;
	/*^block*/id _playButtonAction;

}

@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,copy) NSString * duration; 
@property (nonatomic,copy) id playButtonAction;                   //@synthesize playButtonAction=_playButtonAction - In the implementation block
-(NSString *)subtitle;
-(NSString *)providerName;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(NSString *)duration;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDuration:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)title;
-(void)layoutSubviews;
-(void)setProviderName:(NSString *)arg1 ;
-(double)imageAspectRatio;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)_didPressPlay;
-(void)_updateHiddenViewsAnimated:(BOOL)arg1 ;
-(void)setPlayButtonAction:(id)arg1 ;
-(id)playButtonAction;
@end

