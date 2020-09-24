/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCNonDestructivePrivateDataActionProvider;
@class NSArray;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject {

	BOOL _privateDataSyncingEnabled;
	id<FCNonDestructivePrivateDataActionProvider> _privateDataActionProvider;
	NSArray* _privateDataControllers;

}

@property (nonatomic,retain) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;              //@synthesize privateDataActionProvider=_privateDataActionProvider - In the implementation block
@property (nonatomic,copy) NSArray * privateDataControllers;                                                       //@synthesize privateDataControllers=_privateDataControllers - In the implementation block
@property (assign,getter=isPrivateDataSyncingEnabled,nonatomic) BOOL privateDataSyncingEnabled;                    //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
-(void)handleMigration;
-(id)initWithPrivateDataActionProvider:(id)arg1 privateDataControllers:(id)arg2 privateDataSyncingEnabled:(BOOL)arg3 ;
-(BOOL)isPrivateDataSyncingEnabled;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(void)setPrivateDataActionProvider:(id<FCNonDestructivePrivateDataActionProvider>)arg1 ;
-(id)init;
-(NSArray *)privateDataControllers;
-(void)setPrivateDataControllers:(NSArray *)arg1 ;
-(id<FCNonDestructivePrivateDataActionProvider>)privateDataActionProvider;
@end
