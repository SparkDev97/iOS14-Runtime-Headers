/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSError;

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cancelled;
	BOOL _manualEntrySelected;
	NSString* _cardCardholderName;
	NSNumber* _cardExpirationDay;
	NSNumber* _cardExpirationMonth;
	NSNumber* _cardExpirationYear;
	NSString* _cardExpirationStringValue;
	NSString* _cardNumber;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) NSString * cardCardholderName;                     //@synthesize cardCardholderName=_cardCardholderName - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationDay;                      //@synthesize cardExpirationDay=_cardExpirationDay - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationMonth;                    //@synthesize cardExpirationMonth=_cardExpirationMonth - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationYear;                     //@synthesize cardExpirationYear=_cardExpirationYear - In the implementation block
@property (nonatomic,copy) NSString * cardExpirationStringValue;              //@synthesize cardExpirationStringValue=_cardExpirationStringValue - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                             //@synthesize cardNumber=_cardNumber - In the implementation block
@property (assign,nonatomic) BOOL manualEntrySelected;                        //@synthesize manualEntrySelected=_manualEntrySelected - In the implementation block
@property (nonatomic,copy) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setCancelled:(BOOL)arg1 ;
-(id)attributeKeys;
-(NSString *)cardNumber;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)cancelled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCardNumber:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(BOOL)manualEntrySelected;
-(void)setCardCardholderName:(NSString *)arg1 ;
-(void)setCardExpirationDay:(NSNumber *)arg1 ;
-(void)setCardExpirationMonth:(NSNumber *)arg1 ;
-(void)setCardExpirationYear:(NSNumber *)arg1 ;
-(void)setCardExpirationStringValue:(NSString *)arg1 ;
-(NSString *)cardCardholderName;
-(NSNumber *)cardExpirationDay;
-(NSNumber *)cardExpirationMonth;
-(NSNumber *)cardExpirationYear;
-(NSString *)cardExpirationStringValue;
-(void)setManualEntrySelected:(BOOL)arg1 ;
@end

