/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSIndexExtensionDelegate <NSObject>
@required
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

