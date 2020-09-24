/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject {

	NSLengthFormatter* _heightFormatter;
	NSNumber* _usesImperialUnits;

}

@property (nonatomic,readonly) BOOL usesImperialUnits; 
+(id)sharedFormatter;
-(void)_localeChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)usesImperialUnits;
-(void)getFeet:(long long*)arg1 inches:(long long*)arg2 fromCentimeters:(double)arg3 ;
-(id)formattedValueForFeet:(double)arg1 ;
-(id)formattedValueForInches:(double)arg1 ;
-(id)formattedValueForCentimeters:(double)arg1 ;
-(double)centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
-(id)localizedStringFromHeightInCentimeters:(id)arg1 ;
@end
