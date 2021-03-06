/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSString* _deviceIdentifier;
	NSDictionary* _userInfo;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)idsIdentifier;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)messageID;
-(void)setFromRequest:(BOOL)arg1 ;
-(id)description;
-(BOOL)isFromRequest;
@end

