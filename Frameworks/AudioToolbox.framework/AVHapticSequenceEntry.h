/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVHapticSequenceEntry : NSObject {

	/*^block*/id _handler;
	BOOL _running;
	BOOL _detached;

}

@property (copy) id handler;                   //@synthesize handler=_handler - In the implementation block
@property (assign) BOOL running;               //@synthesize running=_running - In the implementation block
@property (assign) BOOL detached;              //@synthesize detached=_detached - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)detached;
-(void)setDetached:(BOOL)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
-(BOOL)running;
@end
