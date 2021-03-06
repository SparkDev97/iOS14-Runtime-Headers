/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject {

	NPKOSTransaction* _transaction;
	/*^block*/id _workBlock;

}

@property (nonatomic,readonly) NPKOSTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) id workBlock;                                //@synthesize workBlock=_workBlock - In the implementation block
+(id)itemWithTransaction:(id)arg1 work:(/*^block*/id)arg2 ;
-(NPKOSTransaction *)transaction;
-(id)workBlock;
-(id)initWithTransaction:(id)arg1 work:(/*^block*/id)arg2 ;
@end

