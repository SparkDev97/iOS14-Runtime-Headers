/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)removeContextProvider:(id)arg1 ;
-(void)startCenter:(id)arg1 ;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)dealloc;
-(id)_serverName;
-(void)_shutdownServer;
-(id)init;
-(void)nothing;
-(void)_stopListening;
-(void)_startListening;
-(BOOL)addContextProvider:(id)arg1 ;
-(id)_collateContexts;
@end

