/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITapCommand.h>
#import <libobjc.A.dylib/ATXActionSearchResultExecutionDelegate.h>

@class ATXActionSearchResultExecution, NSString;

@interface SearchUIShortcutExecutableCommand : SearchUITapCommand <ATXActionSearchResultExecutionDelegate> {

	/*^block*/id _commandCompletion;
	ATXActionSearchResultExecution* _actionExecution;

}

@property (nonatomic,copy) id commandCompletion;                                            //@synthesize commandCompletion=_commandCompletion - In the implementation block
@property (nonatomic,retain) ATXActionSearchResultExecution * actionExecution;              //@synthesize actionExecution=_actionExecution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
-(unsigned long long)destination;
-(void)dealloc;
-(void)setCommandCompletion:(id)arg1 ;
-(void)setActionExecution:(ATXActionSearchResultExecution *)arg1 ;
-(ATXActionSearchResultExecution *)actionExecution;
-(id)commandCompletion;
-(void)actionSearchResultExecution:(id)arg1 didDismissRemoteAlertWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 withResult:(long long)arg4 shouldClearAction:(BOOL)arg5 ;
-(BOOL)shouldDeselectPreviousSelection;
-(void)performCommandWithCompletion:(/*^block*/id)arg1 ;
@end

