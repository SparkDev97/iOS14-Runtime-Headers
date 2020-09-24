/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, STUsageBlock;

@interface STUsageCategory : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long totalTimeInSeconds; 
@property (nonatomic,retain) NSSet * timedItems; 
@property (nonatomic,retain) STUsageBlock * block; 
+(id)categoryItemsExcludingSystemCategories:(id)arg1 ;
+(id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end
