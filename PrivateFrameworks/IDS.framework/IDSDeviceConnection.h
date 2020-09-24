/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSDeviceConnection, NSInputStream, NSOutputStream, NSDictionary;

@interface IDSDeviceConnection : NSObject {

	_IDSDeviceConnection* _internal;

}

@property (nonatomic,readonly) _IDSDeviceConnection * _internal; 
@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (nonatomic,readonly) NSDictionary * metrics; 
-(unsigned long long)mtu;
-(NSDictionary *)metrics;
-(void)close;
-(id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(int)socket;
-(void)dealloc;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(_IDSDeviceConnection *)_internal;
@end
