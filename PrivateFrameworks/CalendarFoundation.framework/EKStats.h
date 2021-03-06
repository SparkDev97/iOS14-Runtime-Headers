/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKStats : NSObject
+(void)clearScalar:(id)arg1 domain:(int)arg2 ;
+(void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3 ;
+(void)clearDistribution:(id)arg1 domain:(int)arg2 ;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 ;
+(void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
+(void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned)arg4 ;
+(BOOL)enabled;
-(void)commit;
-(void)clearScalar:(id)arg1 ;
-(id)initWithDomain:(int)arg1 significantDigits:(unsigned)arg2 ;
-(void)setScalar:(id)arg1 value:(long long)arg2 ;
-(void)addToScalar:(id)arg1 value:(long long)arg2 ;
-(void)clearDistribution:(id)arg1 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 ;
-(void)setDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
-(void)pushToDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned)arg3 ;
-(id)initWithDomain:(int)arg1 ;
@end

