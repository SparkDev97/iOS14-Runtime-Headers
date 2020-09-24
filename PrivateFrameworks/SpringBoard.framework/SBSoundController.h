/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, UINotificationFeedbackGenerator, NSMapTable, NSHashTable, NSMutableArray;

@interface SBSoundController : NSObject {

	NSMutableDictionary* _soundsBySystemSoundIDs;
	NSMutableSet* _usedNotificationTypes;
	UINotificationFeedbackGenerator* _hapticFeedbackGenerator;
	NSMapTable* _toneAlertsBySounds;
	NSMapTable* _soundsByToneAlerts;
	NSHashTable* _observers;
	unsigned long long _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;

}
+(id)sharedInstance;
-(void)_soundDidFinishPlaying:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_playToneAlert:(id)arg1 ;
-(void)_endPendingCallbacksBlock;
-(BOOL)handleVolumeButtonDownEvent;
-(id)init;
-(void)_cleanupSystemSound:(unsigned)arg1 andKill:(BOOL)arg2 ;
-(BOOL)isPlayingAnySound;
-(BOOL)_playSystemSound:(id)arg1 ;
-(void)_cleanupToneAlertForSound:(id)arg1 andKill:(BOOL)arg2 ;
-(BOOL)playSoundWithDefaultEnvironment:(id)arg1 ;
-(void)_enqueueCallback:(/*^block*/id)arg1 ;
-(void)_ringerStateChanged:(id)arg1 ;
-(BOOL)stopSound:(id)arg1 ;
-(BOOL)playSound:(id)arg1 environments:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_playFeedback:(id)arg1 ;
-(void)_soundDidStartPlaying:(id)arg1 ;
-(void)_beginPendingCallbacksBlock;
-(BOOL)isPlaying:(id)arg1 ;
-(BOOL)stopAllSounds;
@end
