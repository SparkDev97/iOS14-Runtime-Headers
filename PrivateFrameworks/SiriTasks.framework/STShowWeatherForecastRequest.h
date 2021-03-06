/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, NSArray, STCity, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	NSArray* _hourlyForecasts;
	STCity* _city;
	STWeatherUnits* _units;
	long long _forecastType;

}
+(BOOL)supportsSecureCoding;
-(id)hourlyForecasts;
-(id)units;
-(id)createResponse;
-(id)city;
-(long long)forecastType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5 ;
@end

