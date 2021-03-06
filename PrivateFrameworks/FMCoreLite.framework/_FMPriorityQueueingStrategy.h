/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMQueueingStrategy.h>

@class NSString;

@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy> {

	/*^block*/id _priorityComparator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
@end

