/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVAudioSession;

@interface _DKAudioInputMonitor : _DKMonitor {

	AVAudioSession* _inputMonitor;

}
+(id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5 ;
+(id)entitlement;
+(id)eventStream;
-(void)onAudioRouteChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)deactivate;
-(void)stop;
@end

