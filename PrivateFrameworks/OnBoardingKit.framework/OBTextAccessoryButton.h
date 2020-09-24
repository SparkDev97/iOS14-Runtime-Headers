/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class NSString;

@interface OBTextAccessoryButton : UIButton {

	NSString* _textStyle;

}

@property (assign,nonatomic) NSString * textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
+(id)accessoryButtonWithTextStyle:(id)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
@end
