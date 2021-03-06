/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOWiFiConnectionQuality, NSString;

@interface WiFiUsageConnectionQualityRecord : NSObject {

	GEOWiFiConnectionQuality* _geoMessage;
	NSString* _identifier;

}

@property (nonatomic,retain) GEOWiFiConnectionQuality * geoMessage;              //@synthesize geoMessage=_geoMessage - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithUsageSession:(id)arg1 andNeighborBssList:(id)arg2 andOtherBssList:(id)arg3 ;
-(void)queryNetworkPerformanceFeedAndSubmitToGeoWiFi;
-(GEOWiFiConnectionQuality *)geoMessage;
-(void)setGeoMessage:(GEOWiFiConnectionQuality *)arg1 ;
@end

