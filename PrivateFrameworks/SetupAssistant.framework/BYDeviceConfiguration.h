/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BYDeviceConfiguration : NSObject {

	NSString* _productVersion;

}

@property (assign,nonatomic) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
+(id)currentConfiguration;
-(NSString *)productVersion;
-(id)init;
-(void)setProductVersion:(NSString *)arg1 ;
@end

