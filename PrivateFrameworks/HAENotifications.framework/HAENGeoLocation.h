/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface HAENGeoLocation : NSObject {

	unsigned source;
	unsigned sourceDevice;
	NSString* countryCode;
	NSDate* timestamp;

}

@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) unsigned source; 
@property (nonatomic,readonly) unsigned sourceDevice; 
@property (nonatomic,readonly) NSDate * timestamp; 
-(NSString *)countryCode;
-(NSDate *)timestamp;
-(id)init;
-(unsigned)sourceDevice;
-(unsigned)source;
-(id)description;
-(void)fetchGeoLocation;
-(id)describeSource;
@end
