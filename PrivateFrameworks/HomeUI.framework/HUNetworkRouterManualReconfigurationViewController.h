/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkRouterManualReconfigurationItemManager;

@interface HUNetworkRouterManualReconfigurationViewController : HUItemTableViewController

@property (nonatomic,readonly) HUNetworkRouterManualReconfigurationItemManager * itemManager; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
@end

