/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIControl {

	NSMutableArray* _levelViews;
	BOOL _showsLevelGutters;
	double _interLevelSpacing;
	double _levelCornerRadius;
	double _levelWidth;
	double _maximumLevelHeight;
	double _minimumLevelHeight;
	long long _numberOfLevels;
	long long _playbackState;
	UIColor* _levelGuttersColor;

}

@property (assign,nonatomic) double interLevelSpacing;                 //@synthesize interLevelSpacing=_interLevelSpacing - In the implementation block
@property (assign,nonatomic) double levelCornerRadius;                 //@synthesize levelCornerRadius=_levelCornerRadius - In the implementation block
@property (assign,nonatomic) double levelWidth;                        //@synthesize levelWidth=_levelWidth - In the implementation block
@property (assign,nonatomic) double maximumLevelHeight;                //@synthesize maximumLevelHeight=_maximumLevelHeight - In the implementation block
@property (assign,nonatomic) double minimumLevelHeight;                //@synthesize minimumLevelHeight=_minimumLevelHeight - In the implementation block
@property (assign,nonatomic) long long numberOfLevels;                 //@synthesize numberOfLevels=_numberOfLevels - In the implementation block
@property (assign,nonatomic) long long playbackState;                  //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL showsLevelGutters;                   //@synthesize showsLevelGutters=_showsLevelGutters - In the implementation block
@property (nonatomic,retain) UIColor * levelGuttersColor;              //@synthesize levelGuttersColor=_levelGuttersColor - In the implementation block
-(void)setPlaybackState:(long long)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLevelCornerRadius:(double)arg1 ;
-(void)_reloadLevelViews;
-(UIColor *)levelGuttersColor;
-(double)interLevelSpacing;
-(void)setMinimumLevelHeight:(double)arg1 ;
-(void)setInterLevelSpacing:(double)arg1 ;
-(void)setShowsLevelGutters:(BOOL)arg1 ;
-(void)layoutSubviews;
-(double)levelWidth;
-(double)maximumLevelHeight;
-(double)levelCornerRadius;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setLevelWidth:(double)arg1 ;
-(void)_updateLevelAnimations;
-(long long)numberOfLevels;
-(long long)playbackState;
-(void)setLevelGuttersColor:(UIColor *)arg1 ;
-(double)minimumLevelHeight;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)showsLevelGutters;
-(void)setNumberOfLevels:(long long)arg1 ;
-(void)setMaximumLevelHeight:(double)arg1 ;
@end
