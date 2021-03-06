/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk {

	NSString* _type;

}

@property (copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
-(id)attributeDescriptions;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3 ;
@end

