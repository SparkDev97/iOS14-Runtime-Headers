/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBTrayButton, CACOnboardingCommandsTableViewController;

@interface CACOnboardingIntroViewController : OBWelcomeController {

	OBTrayButton* _mainButton;
	OBTrayButton* _linkButton;
	CACOnboardingCommandsTableViewController* _onboardingTVC;
	unsigned long long _style;

}

@property (nonatomic,retain) OBTrayButton * mainButton;                                             //@synthesize mainButton=_mainButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * linkButton;                                             //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) CACOnboardingCommandsTableViewController * onboardingTVC;              //@synthesize onboardingTVC=_onboardingTVC - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
+(id)defaultControllerWithStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setLinkButton:(OBTrayButton *)arg1 ;
-(unsigned long long)style;
-(void)viewDidLoad;
-(OBTrayButton *)linkButton;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(BOOL)_canShowWhileLocked;
-(OBTrayButton *)mainButton;
-(void)setMainButton:(OBTrayButton *)arg1 ;
-(void)dismissWelcomeController;
-(void)languageDidChange;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 style:(unsigned long long)arg4 ;
-(void)enableVoiceControlAndMoveToCommandsOverview;
-(void)presentLanguageSelection;
-(void)configureLanguageButton;
-(void)configureDownloadCaption;
-(CACOnboardingCommandsTableViewController *)onboardingTVC;
-(void)setOnboardingTVC:(CACOnboardingCommandsTableViewController *)arg1 ;
@end
