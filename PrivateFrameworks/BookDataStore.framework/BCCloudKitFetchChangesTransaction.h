/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction {

	BCCloudKitController* _cloudKitController;

}

@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;              //@synthesize cloudKitController=_cloudKitController - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(double)coalescingDelay;
-(BCCloudKitController *)cloudKitController;
-(id)initWithCloudKitController:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)transactionLifetimeTimout;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
@end

