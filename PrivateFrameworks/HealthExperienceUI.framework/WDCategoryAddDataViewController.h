/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/WDAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, HKValueRange, NSString;

@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _categoryValueEntryItem;
	WDAddDataManualEntryItem* _dateEntryItem;

}

@property (nonatomic,readonly) WDAddDataManualEntryItem * categoryValueEntryItem;              //@synthesize categoryValueEntryItem=_categoryValueEntryItem - In the implementation block
@property (nonatomic,readonly) WDAddDataManualEntryItem * dateEntryItem;                       //@synthesize dateEntryItem=_dateEntryItem - In the implementation block
@property (nonatomic,readonly) HKValueRange * selectedDateRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_orderedTitlesForCategoryValuePicker;
-(long long)_defaultSelectedIndex;
-(void)updateSavingEnabled;
-(BOOL)_hasCategoryValueEntryItem;
-(HKValueRange *)selectedDateRange;
-(id)_categoryCells;
-(void)viewDidLoad;
-(long long)numberOfSections;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(WDAddDataManualEntryItem *)categoryValueEntryItem;
-(WDAddDataManualEntryItem *)dateEntryItem;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(BOOL)useSingleStartAndEndDate;
-(BOOL)useDuration;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultEditingItem;
-(id)generateHKObjects;
@end

