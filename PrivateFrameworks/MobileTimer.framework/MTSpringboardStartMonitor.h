/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MTObserverStore, NSObject;

@interface MTSpringboardStartMonitor : NSObject {

	int _notifyToken;
	BOOL _isSpringBoardStarted;
	MTObserverStore* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(BOOL)isSpringboardStarted;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveSpringboardStarted:(BOOL)arg1 ;
-(BOOL)_checkSpringBoardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
@end
