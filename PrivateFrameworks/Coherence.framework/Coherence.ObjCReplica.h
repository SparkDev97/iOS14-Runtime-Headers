/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface Coherence.ObjCReplica : NSObject {

	??? uuid;
	 index;

}

@property (copy,nonatomic) NSUUID * uuid; 
@property (assign,nonatomic) long long index; 
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(id)init;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)initWithUuid:(id)arg1 index:(long long)arg2 ;
@end
