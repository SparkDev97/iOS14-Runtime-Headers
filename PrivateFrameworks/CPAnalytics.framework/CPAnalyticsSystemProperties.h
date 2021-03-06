/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject {

	NSMutableDictionary* _systemProperties;
	NSMutableDictionary* _dynamicProperties;

}

@property (nonatomic,retain) NSMutableDictionary * systemProperties;               //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicProperties;              //@synthesize dynamicProperties=_dynamicProperties - In the implementation block
+(id)dynamicPhotoLibraryProperties;
+(id)staticPhotoLibraryProperties;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(NSMutableDictionary *)dynamicProperties;
-(void)removePhotoLibraryProperties;
-(void)setSystemProperties:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)addDynamicProperty:(id)arg1 withProvider:(id)arg2 ;
-(void)setDynamicProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)systemProperties;
@end

