/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKSQLitePool : NSObject {

	BOOL _traced;
	BOOL _drainScheduled;
	/*^block*/id _factory;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _dbs;

}

@property (nonatomic,retain) NSMutableArray * dbs;                            //@synthesize dbs=_dbs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL drainScheduled;                             //@synthesize drainScheduled=_drainScheduled - In the implementation block
@property (nonatomic,readonly) id factory;                                    //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) BOOL traced;                                     //@synthesize traced=_traced - In the implementation block
-(NSMutableArray *)dbs;
-(id)factory;
-(void)setTraced:(BOOL)arg1 ;
-(BOOL)traced;
-(void)setDbs:(NSMutableArray *)arg1 ;
-(void)closeAll;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_drain;
-(id)_openDatabaseWithError:(id*)arg1 ;
-(id)initWithFactory:(/*^block*/id)arg1 queueAttr:(id)arg2 ;
-(id)_acquireDatabaseWithError:(id*)arg1 ;
-(void)_scheduleDrain;
-(void)_closeDatabase:(id)arg1 ;
-(void)releaseDatabase:(id)arg1 ;
-(BOOL)performWithDatabase:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(id)acquireDatabase:(BOOL)arg1 ;
-(BOOL)drainScheduled;
-(id)acquireDatabaseWithError:(id*)arg1 ;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(void)setDrainScheduled:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

