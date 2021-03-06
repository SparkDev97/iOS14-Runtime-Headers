/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPURLFetcher, LPLinkMetadata;

@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	LPURLFetcher* _fetcher;
	LPLinkMetadata* _metadata;
	/*^block*/id _completionHandler;

}
+(unsigned long long)specialization;
+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

