/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PMDurationProvider, UITableView, UIPickerView, UILabel, NSString;

@interface PMEditorDurationViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDelegate, UITableViewDataSource> {

	PMDurationProvider* _durationProvider;
	UITableView* _tableView;
	UIPickerView* _durationPicker;
	UILabel* _minutesLabel;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UIPickerView * durationPicker;                      //@synthesize durationPicker=_durationPicker - In the implementation block
@property (nonatomic,retain) UILabel * minutesLabel;                             //@synthesize minutesLabel=_minutesLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;                             //@synthesize secondsLabel=_secondsLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumDuration; 
@property (nonatomic,readonly) unsigned long long maximumDuration; 
@property (nonatomic,retain) PMDurationProvider * durationProvider;              //@synthesize durationProvider=_durationProvider - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)maximumDuration;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(UILabel *)secondsLabel;
-(void)setSecondsLabel:(UILabel *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)minimumDuration;
-(PMDurationProvider *)durationProvider;
-(UIPickerView *)durationPicker;
-(void)setDurationPicker:(UIPickerView *)arg1 ;
-(void)setMinutesLabel:(UILabel *)arg1 ;
-(UILabel *)minutesLabel;
-(void)refreshPickerSelectionTime;
-(long long)secondsComponentOffset;
-(BOOL)isValidSelectionForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 voiceOverStringForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)createDurationPickerView;
-(void)setDurationProvider:(PMDurationProvider *)arg1 ;
@end
