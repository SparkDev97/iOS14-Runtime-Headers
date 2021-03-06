/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {

	NSMutableArray* _buffer;
	unsigned _bufferedState;
	/*^block*/id _fetchNextBatch;

}

@property (nonatomic,copy) id fetchNextBatch;              //@synthesize fetchNextBatch=_fetchNextBatch - In the implementation block
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isResetSync;
-(void)setFetchNextBatch:(id)arg1 ;
-(unsigned)_sendBufferedChanges:(/*^block*/id)arg1 ;
-(id)fetchNextBatch;
@end

