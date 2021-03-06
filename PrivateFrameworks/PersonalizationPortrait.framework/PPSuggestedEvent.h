/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@interface PPSuggestedEvent : PPScoredEvent {

	unsigned char _category;

}

@property (nonatomic,readonly) unsigned char category;              //@synthesize category=_category - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned char)category;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 score:(double)arg2 ;
-(id)description;
@end

