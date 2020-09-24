/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {

	BOOL _allowsFuseHeaderEnrichment;
	ICMusicSubscriptionStatusRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICMusicSubscriptionStatusRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL allowsFuseHeaderEnrichment;                                //@synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)initWithRequest:(id)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(BOOL)allowsFuseHeaderEnrichment;
-(BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1 ;
-(void)setAllowsFuseHeaderEnrichment:(BOOL)arg1 ;
-(ICMusicSubscriptionStatusRequest *)request;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2 ;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)execute;
@end
