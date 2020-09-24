/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSPStateMachineDelegate.h>
#import <libobjc.A.dylib/HKSPStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HKSPStateMachineEventHandler.h>

@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider;
@class HKSPStateMachineState, NSString;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler> {

	BOOL _initialized;
	HKSPStateMachineState* _currentState;
	id<HKSPStateMachineDelegate> _delegate;
	id<HKSPStateMachineInfoProvider> _infoProvider;

}

@property (nonatomic,readonly) BOOL initialized;                                                  //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (nonatomic,readonly) HKSPStateMachineState * currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSPStateMachineState *)currentState;
-(void)setInitialState:(id)arg1 ;
-(void)updateState;
-(BOOL)initialized;
-(id<HKSPStateMachineInfoProvider>)infoProvider;
-(id)stateMachineLog;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(id<HKSPStateMachineDelegate>)delegate;
-(BOOL)enterState:(id)arg1 ;
-(id)stateMachineName;
-(BOOL)enterState:(id)arg1 context:(id)arg2 ;
-(void)notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
@end
