/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class UIViewController, UIVisualEffectView, NSString;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController> {

	UIViewController* _contentViewController;
	UIViewController* _pocketViewController;
	UIVisualEffectView* _pocketBackgroundView;

}

@property (nonatomic,retain) UIVisualEffectView * pocketBackgroundView;               //@synthesize pocketBackgroundView=_pocketBackgroundView - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * pocketViewController;                 //@synthesize pocketViewController=_pocketViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(id)initWithContentViewController:(id)arg1 pocketViewController:(id)arg2 ;
-(void)_installContentViewController;
-(id)_installPocket;
-(id)_tearDownPocket;
-(UIViewController *)pocketViewController;
-(void)setPocketBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)pocketBackgroundView;
-(void)setPocketViewController:(UIViewController *)arg1 ;
@end
