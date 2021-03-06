/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {

	BOOL _signedInAccountShouldBeApprover;
	BOOL _forceServerFetch;
	BOOL _doNotFetchFromServer;
	BOOL _promptUserToResolveAuthenticatonFailure;
	NSArray* _expectedDSIDs;
	NSArray* _expectedAltDSIDs;
	unsigned long long _cachePolicy;
	NSDictionary* _serverResponse;
	long long _qualityOfService;

}

@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                      //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (copy) NSArray * expectedAltDSIDs;                                  //@synthesize expectedAltDSIDs=_expectedAltDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) unsigned long long cachePolicy;                            //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) BOOL promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
-(NSArray *)expectedDSIDs;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
-(BOOL)promptUserToResolveAuthenticatonFailure;
-(void)setForceServerFetch:(BOOL)arg1 ;
-(long long)qualityOfService;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)forceServerFetch;
-(unsigned long long)cachePolicy;
-(id)init;
-(id)fetchFamilyCircleWithError:(id*)arg1 ;
-(BOOL)doNotFetchFromServer;
-(void)setExpectedAltDSIDs:(NSArray *)arg1 ;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(unsigned long long)_cachePolicy;
-(id)requestOptions;
-(NSArray *)expectedAltDSIDs;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)signedInAccountShouldBeApprover;
-(NSDictionary *)serverResponse;
-(void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1 ;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
@end

