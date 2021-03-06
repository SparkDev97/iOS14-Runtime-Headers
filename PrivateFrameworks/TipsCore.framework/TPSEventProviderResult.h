/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface TPSEventProviderResult : NSObject {

	NSString* _identifier;
	NSDictionary* _observationMap;
	NSDate* _resultDate;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * observationMap;              //@synthesize observationMap=_observationMap - In the implementation block
@property (nonatomic,retain) NSDate * resultDate;                      //@synthesize resultDate=_resultDate - In the implementation block
-(NSString *)identifier;
-(id)debugDescription;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setResultDate:(NSDate *)arg1 ;
-(void)setObservationMap:(NSDictionary *)arg1 ;
-(NSDate *)resultDate;
-(NSDictionary *)observationMap;
@end

