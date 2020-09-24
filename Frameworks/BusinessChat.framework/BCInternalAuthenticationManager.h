/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACAccountProtocol, ACAccountStoreProtocol;
@class BCInternalAuthenticationRequest, NSString;

@interface BCInternalAuthenticationManager : NSObject {

	BCInternalAuthenticationRequest* _authenticationRequest;
	id<ACAccountProtocol> _account;
	id<ACAccountStoreProtocol> _accountStore;

}

@property (nonatomic,retain) id<ACAccountProtocol> account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<ACAccountStoreProtocol> accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) BCInternalAuthenticationRequest * authenticationRequest;              //@synthesize authenticationRequest=_authenticationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * middleName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUserSignedIn; 
-(NSString *)subtitle;
-(NSString *)lastName;
-(NSString *)firstName;
-(void)setAccountStore:(id<ACAccountStoreProtocol>)arg1 ;
-(void)setAccount:(id<ACAccountProtocol>)arg1 ;
-(NSString *)action;
-(NSString *)title;
-(id<ACAccountProtocol>)account;
-(id<ACAccountStoreProtocol>)accountStore;
-(NSString *)username;
-(NSString *)middleName;
-(long long)state;
-(id)deviceSerialNumber;
-(id)personIdentifier;
-(BCInternalAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(id)initWithAuthenticationRequest:(id)arg1 acAccount:(id)arg2 acAccountStore:(id)arg3 ;
-(void)setAuthenticationRequest:(BCInternalAuthenticationRequest *)arg1 ;
-(id)altPersonIdentifier;
-(id)globalAuthToken;
-(id)labelCategory;
-(BOOL)isUserSignedIn;
-(void)fetchCredentials:(/*^block*/id)arg1 ;
@end
