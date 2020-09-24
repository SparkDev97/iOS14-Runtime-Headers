/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVHomeIPCameraActionButtonHandling.h>
#import <AVKit/AVBehavior.h>

@class AVHomeIPCameraBehaviorContext, NSString;

@interface AVHomeIPCameraBehavior : NSObject <AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior> {

	AVHomeIPCameraBehaviorContext* _behaviorContext;

}

@property (assign,nonatomic,__weak) AVHomeIPCameraBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(void)willMoveToContext:(id)arg1 ;
-(AVHomeIPCameraBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVHomeIPCameraBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
@end
