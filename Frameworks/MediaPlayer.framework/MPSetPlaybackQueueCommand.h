/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {

	NSMutableDictionary* _registeredSpecializedQueues;
	NSMutableSet* _registeredQueueTypes;
	NSMutableSet* _registeredCustomQueueIdentifiers;
	BOOL _supportsSharedQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	long long _upNextItemCount;

}

@property (assign,nonatomic) long long upNextItemCount;              //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
-(void)unregisterSpecializedQueueIdentifier:(id)arg1 ;
-(void)setUpNextItemCount:(long long)arg1 ;
-(void)setSupportedSharedQueue:(BOOL)arg1 ;
-(void)unregisterSupportedQueueType:(long long)arg1 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4 ;
-(void)registerSupportedCustomQueueIdentifier:(id)arg1 ;
-(long long)upNextItemCount;
-(void)registerSupportedQueueType:(long long)arg1 ;
-(void)unregisterSupportedCustomQueueIdentifier:(id)arg1 ;
@end

