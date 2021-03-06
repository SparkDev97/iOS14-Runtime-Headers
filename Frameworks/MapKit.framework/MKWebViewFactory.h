/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKProcessPool, NSCache;

@interface MKWebViewFactory : NSObject {

	WKProcessPool* _processPool;
	NSCache* _webViewCache;

}
+(id)sharedWebViewFactory;
-(id)init;
-(void)requeueItem:(id)arg1 ;
-(id)dequeueItemWithBridgeConfiguration:(id)arg1 ;
@end

