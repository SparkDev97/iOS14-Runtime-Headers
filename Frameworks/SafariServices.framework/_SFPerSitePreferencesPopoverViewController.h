/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SFSwitchTableViewCellDelegate.h>

@class NSString, _SFPerSitePreferencesVendor, NSMutableDictionary, NSArray, UIBarButtonItem, NSIndexPath;

@interface _SFPerSitePreferencesPopoverViewController : UITableViewController <SFSwitchTableViewCellDelegate> {

	NSString* _domain;
	_SFPerSitePreferencesVendor* _perSitePreferencesVendor;
	BOOL _shouldShowSecurePagePreferences;
	NSMutableDictionary* _preferenceToValueCache;
	NSArray* _preferencesBySections;
	UIBarButtonItem* _doneButton;
	NSIndexPath* _expandedRowIndexPath;
	long long _numberOfValuesInExpandedPreference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_initializePreferences;
-(id)_generalPageSection;
-(id)_securePageSection;
-(id)_indexPathForView:(id)arg1 ;
-(id)_preferenceRowIndexPathForCellAtIndexPath:(id)arg1 ;
-(id)_preferenceAtIndexPath:(id)arg1 ;
-(void)_setPreferenceValue:(id)arg1 forPreference:(id)arg2 ;
-(void)_didRetrieveValue:(id)arg1 forPreference:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)reloadPreferences;
-(void)switchTableViewCell:(id)arg1 didChangeSwitchState:(BOOL)arg2 ;
-(id)initWithDomain:(id)arg1 shouldShowSecurePreferences:(BOOL)arg2 perSitePreferencesVendor:(id)arg3 ;
-(void)_setPreferenceValueIndex:(long long)arg1 forView:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

