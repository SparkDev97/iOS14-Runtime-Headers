/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSURL;

@interface LPFetcherURLResponse : LPFetcherResponse {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 fetcher:(id)arg2 ;
@end

