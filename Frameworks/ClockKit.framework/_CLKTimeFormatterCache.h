/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject {

	NSMutableDictionary* _timeOnlyFormatters;
	NSMutableDictionary* _timeAndDesignatorFormatters;
	NSMutableDictionary* _timeAndDesignatorFormattersSuppressingWhitespace;

}
+(id)sharedInstance;
+(id)timeZoneName:(id)arg1 ;
-(void)dealloc;
-(void)_invalidateFormatters;
-(id)init;
-(id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
-(id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
@end

