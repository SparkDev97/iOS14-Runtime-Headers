/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HDDatabasePendingWriteRecord : NSObject {

	/*^block*/id _writeBlock;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id writeBlock;              //@synthesize writeBlock=_writeBlock - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)initWithWriteBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completion;
-(id)init;
-(id)writeBlock;
@end

