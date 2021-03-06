/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol REActiveWorkoutPredictorProperties <REExportedInterface>
@property (nonatomic,readonly) BOOL currentlyHasActiveWorkout; 
@property (nonatomic,readonly) float dailyAverageWorkouts; 
@property (nonatomic,readonly) unsigned long long numberOfWorkoutsPerformedToday; 
@property (nonatomic,readonly) NSDate * lastWorkoutDate; 
@required
-(BOOL)currentlyHasActiveWorkout;
-(float)dailyAverageWorkouts;
-(unsigned long long)numberOfWorkoutsPerformedToday;
-(NSDate *)lastWorkoutDate;

@end

