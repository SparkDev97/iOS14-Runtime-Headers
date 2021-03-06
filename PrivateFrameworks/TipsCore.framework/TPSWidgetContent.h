/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContent.h>

@class NSDictionary;

@interface TPSWidgetContent : TPSContent {

	long long _priority;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long priority;                   //@synthesize priority=_priority - In the implementation block
+(id)classSet;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSDictionary *)attributes;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)priority;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

