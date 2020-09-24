/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray, UIActivityIndicatorView, UIColor;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell {

	UILabel* _label;
	NSArray* _persistentConstraints;
	double _leftInset;
	UIActivityIndicatorView* _spinner;
	UIColor* _originalLabelFontColor;

}

@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (assign,nonatomic) double leftInset;                               //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIColor * originalLabelFontColor;               //@synthesize originalLabelFontColor=_originalLabelFontColor - In the implementation block
+(id)_labelFont;
+(id)_grayTextColor;
+(id)_showMoreLocalizedString;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)updateConstraints;
-(void)setOriginalLabelFontColor:(UIColor *)arg1 ;
-(void)setShowMoreState;
-(UIColor *)originalLabelFontColor;
-(void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(BOOL)arg3 ;
-(void)setInitialSearchInProgressState;
-(void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)arg1 hasError:(BOOL)arg2 ;
-(void)setAvailabilityRequestInProgressState;
-(double)leftInset;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLeftInset:(double)arg1 ;
@end
