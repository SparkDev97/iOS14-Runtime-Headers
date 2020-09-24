/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol IMAssistantAudioPlayerDelegate;
@class NSString, AVAudioPlayer;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	id<IMAssistantAudioPlayerDelegate> _delegate;
	NSString* _identifier;
	AVAudioPlayer* _player;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)stopPlaying;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(long long)playerState;
-(BOOL)setupAudioSession;
-(void)cleanupAudioSession;
-(BOOL)startPlayingAudioURL:(id)arg1 ;
@end
