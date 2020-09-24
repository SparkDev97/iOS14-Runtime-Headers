/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, _UIKeyboardArbiter;


@protocol _UIKeyboardArbiterLink <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
@required
-(BOOL)isAvailable;
-(_UIKeyboardArbiter *)owner;
-(void)attach:(id)arg1;
-(void)setOwner:(id)arg1;
-(void)updateSceneSettings;
-(NSString *)serviceName;
-(void)connectWithQueue:(id)arg1;
-(void)detach:(id)arg1;
-(void)createSceneWithCompletion:(/*^block*/id)arg1;

@end
