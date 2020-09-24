/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy,readonly) id handlerBlock;              //@synthesize handlerBlock=_handlerBlock - In the implementation block
-(id)handlerBlock;
-(void)dealloc;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
@end
