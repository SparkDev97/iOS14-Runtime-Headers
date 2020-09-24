/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;
@interface RTTUIReplyActionCell : UITableViewCell {

	id<RTTUIReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<RTTUIReplyActionCellDelegate>)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<RTTUIReplyActionCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
-(double)adjustedHeight;
@end
