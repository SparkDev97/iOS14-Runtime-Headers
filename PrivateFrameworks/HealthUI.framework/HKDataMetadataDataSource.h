/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKDataMetadataProvider.h>

@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider> {

	HKSample* _sample;
	HKUnitPreferenceController* _unitPreferenceController;

}
-(id)initWithSample:(id)arg1 unitPreferenceController:(id)arg2 ;
-(void)addDetailValuesToSection:(id)arg1 ;
-(id)_mediaSourceDisplayNamesForSample:(id)arg1 ;
-(void)addAdditionalDetailValuesToSection:(id)arg1 key:(id)arg2 value:(id)arg3 ;
@end
