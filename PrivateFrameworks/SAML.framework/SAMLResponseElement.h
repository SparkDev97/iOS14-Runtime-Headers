/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLStatus, NSArray;

@interface SAMLResponseElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * relatedRequest; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLStatus * status; 
@property (nonatomic,readonly) NSArray * assertions; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)destination;
-(NSString *)issuer;
-(SAMLStatus *)status;
-(SAMLSignature *)signature;
-(NSString *)consent;
-(NSArray *)assertions;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(NSDate *)issueInstant;
-(id)authnStatement;
-(NSString *)relatedRequest;
@end

