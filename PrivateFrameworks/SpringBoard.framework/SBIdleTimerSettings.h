/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface SBIdleTimerSettings : PTSettings {

	BOOL _disableIdleTimer;

}

@property (assign,nonatomic) BOOL disableIdleTimer;              //@synthesize disableIdleTimer=_disableIdleTimer - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setDisableIdleTimer:(BOOL)arg1 ;
-(BOOL)disableIdleTimer;
@end

