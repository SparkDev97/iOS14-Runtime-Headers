/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _PASSqliteDatabase;

@interface ATXNotificationsDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	_PASSqliteDatabase* _db;
	BOOL _dbInitialized;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db; 
-(_PASSqliteDatabase *)db;
-(BOOL)migrate;
-(id)createCustomSchema;
-(void)_disconnectFromDb;
-(id)createSchema;
-(long long)currentSchemaVersion;
-(id)init;
-(long long)latestVersion;
-(BOOL)_configureDatabase;
-(id)initWithDbPath:(id)arg1 ;
-(void)_startDatabase;
-(void)_runMigration;
-(BOOL)_initializeTables;
-(void)_initializeSchemaVersion:(long long)arg1 ;
-(id)initWithDefaultPath:(id)arg1 ;
-(long long)countRowsOfTable:(id)arg1 ;
@end

