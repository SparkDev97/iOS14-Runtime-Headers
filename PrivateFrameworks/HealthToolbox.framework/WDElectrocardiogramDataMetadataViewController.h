/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKDataMetadataDeletionSectionDelegate.h>
#import <libobjc.A.dylib/HKElectrocardiogramMetadataViewDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKElectrocardiogram, NSMutableArray, WDElectrocardiogramReportDataSource, HRElectrocardiogramReportGenerator;

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate> {

	BOOL _firstViewDidLayoutSubviews;
	BOOL _actionsEnabled;
	HKElectrocardiogram* _sample;
	id<HKDataMetadataViewControllerDelegate> _delegate;
	NSMutableArray* _sections;
	WDElectrocardiogramReportDataSource* _reportDataSource;
	HRElectrocardiogramReportGenerator* _reportGenerator;

}

@property (assign,nonatomic) BOOL firstViewDidLayoutSubviews;                                       //@synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample;                                          //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WDElectrocardiogramReportDataSource * reportDataSource;                //@synthesize reportDataSource=_reportDataSource - In the implementation block
@property (nonatomic,retain) HRElectrocardiogramReportGenerator * reportGenerator;                  //@synthesize reportGenerator=_reportGenerator - In the implementation block
@property (assign,nonatomic) BOOL actionsEnabled;                                                   //@synthesize actionsEnabled=_actionsEnabled - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(HKElectrocardiogram *)sample;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(NSMutableArray *)sections;
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setActionsEnabled:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)shareButtonTapped:(id)arg1 ;
-(void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1 ;
-(void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1 ;
-(id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2 ;
-(id)initWithSample:(id)arg1 delegate:(id)arg2 ;
-(void)deletionSectionDidSelectRow:(id)arg1 ;
-(void)_loadSections;
-(void)_localeOrDisplayTypeChange:(id)arg1 ;
-(BOOL)_addSectionIfNonNull:(id)arg1 ;
-(BOOL)firstViewDidLayoutSubviews;
-(void)setFirstViewDidLayoutSubviews:(BOOL)arg1 ;
-(void)_reloadElectrocardiogramMetadataTableHeaderView;
-(id)_electrocardiogramMetadataContainerView;
-(BOOL)actionsEnabled;
-(void)deleteSampleTriggeredBySection:(id)arg1 ;
-(WDElectrocardiogramReportDataSource *)reportDataSource;
-(void)presentPDFViewController;
-(HRElectrocardiogramReportGenerator *)reportGenerator;
-(BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1 ;
-(void)setReportDataSource:(WDElectrocardiogramReportDataSource *)arg1 ;
-(void)setReportGenerator:(HRElectrocardiogramReportGenerator *)arg1 ;
@end

