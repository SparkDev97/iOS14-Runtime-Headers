/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface SBFluidSwitcherIconImageContainerView : UIView {

	UIImageView* _imageView;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_configureIconImageView:(id)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)_crossfadeToImage:(id)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

