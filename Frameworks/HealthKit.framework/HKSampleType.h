/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType

@property (nonatomic,readonly) BOOL isMaximumDurationRestricted; 
@property (nonatomic,readonly) double maximumAllowedDuration; 
@property (nonatomic,readonly) BOOL isMinimumDurationRestricted; 
@property (nonatomic,readonly) double minimumAllowedDuration; 
+(id)medicalRecordTypesWithOptions:(unsigned long long)arg1 ;
+(id)medicalRecordTypes;
+(id)_sampleTypeWithCode:(long long)arg1 ;
-(BOOL)isMinimumDurationRestricted;
-(double)minimumAllowedDuration;
-(id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1 ;
-(double)_maximumAllowedDuration;
-(double)_minimumAllowedDuration;
-(BOOL)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id*)arg3 ;
-(BOOL)isMaximumDurationRestricted;
-(double)maximumAllowedDuration;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
@end
