/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OspreyRPC;
@interface OspreyService : NSObject {

	id<OspreyRPC> _channel;

}

@property (nonatomic,readonly) id<OspreyRPC> channel;              //@synthesize channel=_channel - In the implementation block
-(id<OspreyRPC>)channel;
-(id)initWithConnectionURL:(id)arg1 ;
@end

