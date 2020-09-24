/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HKBadge : NSObject <NSCopying, NSSecureCoding> {

	long long _count;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * keyValueRepresentation; 
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject> value; 
@property (getter=isErrorBadge,nonatomic,readonly) BOOL errorBadge; 
@property (getter=isIndicatorBadge,nonatomic,readonly) BOOL indicatorBadge; 
@property (getter=isNumberBadge,nonatomic,readonly) BOOL numberBadge; 
@property (getter=isZeroBadge,nonatomic,readonly) BOOL zeroBadge; 
+(id)zeroBadge;
+(id)errorBadge;
+(id)numberBadgeWithCount:(long long)arg1 ;
+(id)indicatorBadge;
+(id)badgeFromKeyValueRepresentation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isZeroBadge;
-(BOOL)isNumberBadge;
-(id)badgeByAggregatingWithBadge:(id)arg1 ;
-(id)badgeByIncrementingByCount:(long long)arg1 ;
-(BOOL)isErrorBadge;
-(BOOL)isIndicatorBadge;
-(NSNumber *)keyValueRepresentation;
-(NSString *)stringValue;
-(long long)type;
-(id<NSObject>)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithType:(long long)arg1 count:(long long)arg2 ;
@end
