/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class UITextField, UIResponder, CNPropertyGroupItem;

@interface CNPropertyNameCell : CNContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;
	id<CNPropertyCellDelegate> _delegate;

}

@property (nonatomic,retain) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;                      //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)shouldIndentWhileEditing;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(double)minCellHeight;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(id<CNPropertyCellDelegate>)delegate;
-(CNPropertyGroupItem *)propertyItem;
-(void)textFieldChanged:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIResponder *)firstResponderItem;
-(UITextField *)textField;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
@end

