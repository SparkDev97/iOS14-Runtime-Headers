/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSData, NSArray, NSHTTPURLResponse;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential> {

	NSString* _state;
	NSData* _accessToken;
	NSData* _identityToken;
	NSArray* _authorizedScopes;
	NSHTTPURLResponse* _authenticatedResponse;

}

@property (nonatomic,copy,readonly) NSString * state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityToken;                                 //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;                             //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (nonatomic,copy,readonly) NSHTTPURLResponse * authenticatedResponse;              //@synthesize authenticatedResponse=_authenticatedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)emptyCredential;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)accessToken;
-(id)init;
-(NSData *)identityToken;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)description;
-(NSArray *)authorizedScopes;
-(id)initWithAuthenticatedResponse:(id)arg1 ;
-(NSHTTPURLResponse *)authenticatedResponse;
@end

