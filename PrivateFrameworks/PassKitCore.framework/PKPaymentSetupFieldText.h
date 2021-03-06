/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSNumberFormatter, NSMutableCharacterSet, NSString, NSArray;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {

	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _amountFormatter;
	NSMutableCharacterSet* _allowedCharacters;
	BOOL _secureText;
	BOOL _secureVisibleText;
	BOOL _numeric;
	BOOL _luhnCheck;
	BOOL _keepPaddingCharactersForSubmission;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSString* _currencyCode;
	NSString* _displayFormatPlaceholder;
	NSArray* _paddingCharacters;

}

@property (assign,nonatomic) unsigned long long minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                                   //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,getter=isSecureText,nonatomic) BOOL secureText;                            //@synthesize secureText=_secureText - In the implementation block
@property (assign,getter=isSecureVisibleText,nonatomic) BOOL secureVisibleText;              //@synthesize secureVisibleText=_secureVisibleText - In the implementation block
@property (assign,getter=isNumeric,nonatomic) BOOL numeric;                                  //@synthesize numeric=_numeric - In the implementation block
@property (assign,getter=useLuhnCheck,nonatomic) BOOL luhnCheck;                             //@synthesize luhnCheck=_luhnCheck - In the implementation block
@property (nonatomic,copy) NSString * displayFormatPlaceholder;                              //@synthesize displayFormatPlaceholder=_displayFormatPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL keepPaddingCharactersForSubmission;                        //@synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission - In the implementation block
@property (nonatomic,retain) NSArray * paddingCharacters;                                    //@synthesize paddingCharacters=_paddingCharacters - In the implementation block
@property (nonatomic,copy) NSMutableCharacterSet * allowedCharacters; 
-(void)setDefaultValue:(id)arg1 ;
-(NSString *)currencyCode;
-(unsigned long long)minLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(unsigned long long)fieldType;
-(BOOL)isNumeric;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(BOOL)useLuhnCheck;
-(BOOL)hasDisplayFormat;
-(id)stringByApplyingDisplayFormat:(id)arg1 ;
-(id)displayFormatPaddingCharacters;
-(NSString *)displayFormatPlaceholder;
-(BOOL)isSecureText;
-(void)setSecureText:(BOOL)arg1 ;
-(BOOL)isSecureVisibleText;
-(void)setSecureVisibleText:(BOOL)arg1 ;
-(void)setNumeric:(BOOL)arg1 ;
-(void)setLuhnCheck:(BOOL)arg1 ;
-(void)setDisplayFormatPlaceholder:(NSString *)arg1 ;
-(NSMutableCharacterSet *)allowedCharacters;
-(void)updateDisplayFormat:(id)arg1 ;
-(void)setAllowedCharacters:(NSMutableCharacterSet *)arg1 ;
-(BOOL)keepPaddingCharactersForSubmission;
-(NSArray *)paddingCharacters;
-(void)setKeepPaddingCharactersForSubmission:(BOOL)arg1 ;
-(void)setPaddingCharacters:(NSArray *)arg1 ;
-(id)displayString;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
-(unsigned long long)maxLength;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithConfiguration:(id)arg1 ;
@end

