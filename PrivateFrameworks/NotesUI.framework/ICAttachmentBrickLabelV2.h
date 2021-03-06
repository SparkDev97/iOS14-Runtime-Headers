/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILabel.h>

@class UIColor, NSAttributedString, NSString;

@interface ICAttachmentBrickLabelV2 : UILabel {

	BOOL _vibrant;
	BOOL _disableVibrancy;
	UIColor* _defaultTextColor;

}

@property (assign,nonatomic) BOOL vibrant;                                               //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,nonatomic) BOOL disableVibrancy;                                       //@synthesize disableVibrancy=_disableVibrancy - In the implementation block
@property (nonatomic,retain) UIColor * defaultTextColor;                                 //@synthesize defaultTextColor=_defaultTextColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * ic_attributedStringValue; 
@property (nonatomic,retain) NSString * ic_stringValue; 
-(void)setTextColor:(id)arg1 ;
-(UIColor *)defaultTextColor;
-(NSString *)ic_stringValue;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)vibrant;
-(BOOL)allowsVibrancy;
-(void)setVibrant:(BOOL)arg1 ;
-(void)setDisableVibrancy:(BOOL)arg1 ;
-(BOOL)disableVibrancy;
-(NSAttributedString *)ic_attributedStringValue;
-(void)setIc_attributedStringValue:(NSAttributedString *)arg1 ;
-(void)setDefaultTextColor:(UIColor *)arg1 ;
-(void)setIc_stringValue:(NSString *)arg1 ;
@end

