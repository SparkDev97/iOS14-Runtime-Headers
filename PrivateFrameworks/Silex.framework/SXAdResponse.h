/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXAdRequest, SXADBannerView;

@interface SXAdResponse : NSObject {

	SXAdRequest* _request;
	SXADBannerView* _bannerView;

}

@property (nonatomic,retain) SXAdRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SXADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)setBannerView:(SXADBannerView *)arg1 ;
-(SXAdRequest *)request;
-(void)setRequest:(SXAdRequest *)arg1 ;
-(SXADBannerView *)bannerView;
@end
