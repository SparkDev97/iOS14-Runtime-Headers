/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BCSMetric.h>
#import <libobjc.A.dylib/BCSCoreAnalyticsEventDescribing.h>
#import <libobjc.A.dylib/BCSItemFetchMetricProtocol.h>
#import <libobjc.A.dylib/BCSBusinessLinkChoppingMetric.h>

@class BCSTimingMeasurement, NSString, NSDictionary;

@interface BCSBusinessLinkFetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol, BCSBusinessLinkChoppingMetric> {

	BOOL choppingEnabled;
	BOOL errorEncountered;
	long long successfulChop;
	BCSTimingMeasurement* timingMeasurement;

}

@property (nonatomic,readonly) NSString * coreAnalyticsEventName; 
@property (nonatomic,readonly) NSDictionary * coreAnalyticsPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@property (assign,getter=isChoppingEnabled,nonatomic) BOOL choppingEnabled; 
@property (assign,nonatomic) long long successfulChop; 
+(id)metricWithPostProcessingMetricHandlers:(id)arg1 ;
-(NSString *)coreAnalyticsEventName;
-(NSDictionary *)coreAnalyticsPayload;
-(void)setTimingMeasurement:(BCSTimingMeasurement *)arg1 ;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1 ;
-(void)setChoppingEnabled:(BOOL)arg1 ;
-(void)setSuccessfulChop:(long long)arg1 ;
-(BOOL)errorEncountered;
-(BOOL)isChoppingEnabled;
-(long long)successfulChop;
@end

