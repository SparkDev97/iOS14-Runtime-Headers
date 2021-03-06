/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSDictionary;

@interface SSErrorHandlerSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _properties;
	long long _sessionID;

}
-(void)retry;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(void)_setSessionID:(long long)arg1 ;
-(void)_setControlConnection:(id)arg1 ;
-(void)_setErrorProperties:(id)arg1 ;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)arg1 ;
-(id)init;
@end

