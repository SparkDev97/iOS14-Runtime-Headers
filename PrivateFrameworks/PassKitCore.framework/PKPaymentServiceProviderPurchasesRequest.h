/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseState;
	NSString* _serviceProviderIdentifier;
	NSString* _productIdentifier;
	NSString* _actionIdentifier;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSString * purchaseState;                          //@synthesize purchaseState=_purchaseState - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;              //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                            //@synthesize countryCode=_countryCode - In the implementation block
-(void)setActionIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)countryCode;
-(NSString *)productIdentifier;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(NSString *)serviceProviderIdentifier;
-(NSString *)purchaseState;
-(void)setPurchaseState:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(id)initWithPurchaseState:(id)arg1 serviceProviderIdentifier:(id)arg2 productIdentifier:(id)arg3 actionIdentifier:(id)arg4 serviceProviderCountryCode:(id)arg5 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
@end
