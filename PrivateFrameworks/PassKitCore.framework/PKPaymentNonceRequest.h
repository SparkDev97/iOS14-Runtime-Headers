/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAugmentBaseRequest.h>

@class NSString;

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest {

	BOOL _useLegacyGetAPI;
	NSString* _merchantIdentifier;

}

@property (assign,nonatomic) BOOL useLegacyGetAPI;                     //@synthesize useLegacyGetAPI=_useLegacyGetAPI - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(id)bodyDictionary;
-(id)_legacyGetURLRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)useLegacyGetAPI;
-(void)setUseLegacyGetAPI:(BOOL)arg1 ;
-(id)endpointName;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
@end

