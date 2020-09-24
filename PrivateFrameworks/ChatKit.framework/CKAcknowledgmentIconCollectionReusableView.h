/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIImageView;

@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView {

	UIImageView* _glyphImageView;

}

@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)glyphImageView;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
@end
