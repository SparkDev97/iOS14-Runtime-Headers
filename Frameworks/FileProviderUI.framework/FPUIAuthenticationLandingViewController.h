/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderUI/FileProviderUI-Structs.h>
#import <FileProviderUI/FPUIAuthenticationTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/FPUIAuthenticationServerInfoDelegate.h>

@class FPUIAuthenticationSectionDescriptor, NSMutableArray, UITextField, NSURL, NSArray, NSString;

@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate, FPUIAuthenticationServerInfoDelegate> {

	FPUIAuthenticationSectionDescriptor* _recentServersSection;
	NSMutableArray* _recentServersRowDescriptors;
	UITextField* _serverInputTextField;
	NSURL* _initialURL;
	NSURL* _sanitizedURL;
	NSURL* _initialUsername;
	NSArray* _recentServers;
	NSURL* _initialConnectionURL;

}

@property (nonatomic,copy) NSURL * initialConnectionURL;              //@synthesize initialConnectionURL=_initialConnectionURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setInitialConnectionURL:(NSURL *)arg1 ;
-(NSURL *)initialConnectionURL;
-(BOOL)_canMoveToNextStep;
-(id)defaultRightBarButtonItem;
-(void)setupTableViewSections;
-(void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2 ;
-(void)removeServerWithRepresentation:(id)arg1 ;
-(void)_disectURLToComponents:(id)arg1 ;
-(void)_updateNextStep;
-(void)_connect:(id)arg1 ;
-(void)_showRecentServersSectionWithRecentServers:(id)arg1 rowAnimation:(long long)arg2 ;
-(void)_connectToServer:(id)arg1 ;
-(void)_transitionUIStateToConnecting;
@end
