/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding> {

	NSString* _iccid;
	NSString* _carrierName;
	NSString* _phoneNumber;
	NSString* _countryCode;
	NSString* _label;

}

@property (nonatomic,retain) NSString * iccid;                    //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5 ;
-(NSString *)countryCode;
-(void)setCarrierName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)carrierName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)description;
-(void)setCountryCode:(NSString *)arg1 ;
@end

