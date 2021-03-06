/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class WGWidgetPinningTeachingAnimationView, UISwitch;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {

	WGWidgetPinningTeachingAnimationView* _pinImageView;
	UISwitch* _pinSwitch;

}

@property (nonatomic,readonly) UISwitch * pinSwitch;              //@synthesize pinSwitch=_pinSwitch - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)stopAnimating;
-(void)startAnimating;
-(UISwitch *)pinSwitch;
@end

