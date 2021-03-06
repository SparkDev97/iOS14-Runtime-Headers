/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic,readonly) NSArray * uniformTimeIntervals; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long scheduledDays; 
@property (nonatomic,readonly) NSArray * recurrences; 
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)recurrences;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)isEmpty;
-(unsigned long long)hash;
-(id)recurrencesForDay:(long long)arg1 ;
-(BOOL)isScheduledForDay:(long long)arg1 ;
-(id)timeIntervalsForDay:(long long)arg1 ;
-(long long)scheduledDays;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(NSArray *)uniformTimeIntervals;
@end

