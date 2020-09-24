/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	long long _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)image;
-(CGRect)imageFrame;
-(void)setScaleMode:(long long)arg1 ;
-(id)imageView;
@end
