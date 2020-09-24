/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView, UIImageView, NSURLSessionDataTask, WFGiphyObject;

@interface WFGiphyCell : UICollectionViewCell {

	UIActivityIndicatorView* _indicatorView;
	UIImageView* _imageView;
	UIImageView* _selectedImageView;
	NSURLSessionDataTask* _dataTask;
	WFGiphyObject* _object;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * selectedImageView;                      //@synthesize selectedImageView=_selectedImageView - In the implementation block
@property (assign,nonatomic,__weak) NSURLSessionDataTask * dataTask;                      //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) WFGiphyObject * object;                               //@synthesize object=_object - In the implementation block
-(void)setObject:(WFGiphyObject *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)layoutSubviews;
-(NSURLSessionDataTask *)dataTask;
-(UIImageView *)imageView;
-(WFGiphyObject *)object;
-(UIImageView *)selectedImageView;
-(void)setSelectedImageView:(UIImageView *)arg1 ;
@end
