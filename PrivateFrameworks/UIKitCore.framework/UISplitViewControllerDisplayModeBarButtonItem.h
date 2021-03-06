/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem {

	BOOL _hasBeenUsed;
	id<UISplitViewControllerImpl> _impl;

}

@property (assign,setter=_setImpl:,getter=_impl,nonatomic,__weak) id<UISplitViewControllerImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (getter=_hasBeenUsed,nonatomic,readonly) BOOL hasBeenUsed;                                               //@synthesize hasBeenUsed=_hasBeenUsed - In the implementation block
-(void)_setImpl:(id)arg1 ;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(BOOL)_hasBeenUsed;
-(SEL)action;
-(void)_wasUsed;
-(id)_impl;
-(id)target;
@end

