/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class STUsageReportGraphDataPoint, UIView, UILabel, NSDateIntervalFormatter, NSDateFormatter;

@interface STPaddleView : UIView {

	STUsageReportGraphDataPoint* _dataPoint;
	UIView* _backgroundView;
	UILabel* _dayLabel;
	UILabel* _dateTimeLabel;
	UILabel* _usageLabel;
	NSDateIntervalFormatter* _hourIntervalDateFormatter;
	NSDateFormatter* _weekdayDateFormatter;
	NSDateFormatter* _monthDateFormatter;

}

@property (readonly) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) UILabel * dayLabel;                                               //@synthesize dayLabel=_dayLabel - In the implementation block
@property (readonly) UILabel * dateTimeLabel;                                          //@synthesize dateTimeLabel=_dateTimeLabel - In the implementation block
@property (readonly) UILabel * usageLabel;                                             //@synthesize usageLabel=_usageLabel - In the implementation block
@property (readonly) NSDateIntervalFormatter * hourIntervalDateFormatter;              //@synthesize hourIntervalDateFormatter=_hourIntervalDateFormatter - In the implementation block
@property (readonly) NSDateFormatter * weekdayDateFormatter;                           //@synthesize weekdayDateFormatter=_weekdayDateFormatter - In the implementation block
@property (readonly) NSDateFormatter * monthDateFormatter;                             //@synthesize monthDateFormatter=_monthDateFormatter - In the implementation block
@property (nonatomic,retain) STUsageReportGraphDataPoint * dataPoint;                  //@synthesize dataPoint=_dataPoint - In the implementation block
-(UILabel *)usageLabel;
-(id)init;
-(UIView *)backgroundView;
-(UILabel *)dayLabel;
-(void)setDataPoint:(STUsageReportGraphDataPoint *)arg1 ;
-(STUsageReportGraphDataPoint *)dataPoint;
-(NSDateIntervalFormatter *)hourIntervalDateFormatter;
-(UILabel *)dateTimeLabel;
-(NSDateFormatter *)weekdayDateFormatter;
-(NSDateFormatter *)monthDateFormatter;
@end
