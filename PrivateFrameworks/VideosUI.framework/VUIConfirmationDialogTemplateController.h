/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSTimer, VUIConfirmationDialogTemplateView;

@interface VUIConfirmationDialogTemplateController : UIViewController {

	BOOL _setTimer;
	NSTimer* _dismissTimer;

}

@property (nonatomic,readonly) NSTimer * dismissTimer;                                        //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,readonly) VUIConfirmationDialogTemplateView * templateView; 
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSTimer *)dismissTimer;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setupTimer;
-(void)loadView;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
-(VUIConfirmationDialogTemplateView *)templateView;
@end

