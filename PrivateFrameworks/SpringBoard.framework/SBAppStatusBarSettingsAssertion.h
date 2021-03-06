/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBAppStatusBarSettings, NSString, NSDate;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {

	SBAppStatusBarSettings* _settings;
	unsigned long long _level;
	NSString* _reason;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned long long level;                            //@synthesize level=_level - In the implementation block
@property (nonatomic,copy,readonly) SBAppStatusBarSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)level;
-(void)modifySettingsWithBlock:(/*^block*/id)arg1 animationParameters:(id)arg2 ;
-(void)invalidate;
-(id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)acquire;
-(void)dealloc;
-(NSDate *)timestamp;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)invalidateWithAnimationParameters:(id)arg1 ;
-(id)initWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(id)init;
-(SBAppStatusBarSettings *)settings;
-(NSString *)reason;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)modifySettingsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)acquireWithAnimationParameters:(id)arg1 ;
@end

