/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell {

	BOOL _showsActionSpinner;
	UIColor* _highlightColor;
	UIColor* _checkmarkAccessoryColor;
	UIColor* _customAccessoryColor;
	double _minimumHeight;

}

@property (nonatomic,copy) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) UIColor * checkmarkAccessoryColor;              //@synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor - In the implementation block
@property (nonatomic,copy) UIColor * customAccessoryColor;                 //@synthesize customAccessoryColor=_customAccessoryColor - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                      //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (assign,nonatomic) double minimumHeight;                         //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(double)minimumHeight;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(UIColor *)highlightColor;
-(UIColor *)customAccessoryColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMinimumHeight:(double)arg1 ;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(BOOL)showsActionSpinner;
-(UIColor *)checkmarkAccessoryColor;
-(void)setCheckmarkAccessoryColor:(UIColor *)arg1 ;
-(void)setCustomAccessoryColor:(UIColor *)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
@end

