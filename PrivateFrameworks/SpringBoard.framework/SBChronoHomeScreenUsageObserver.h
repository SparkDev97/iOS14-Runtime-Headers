/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHHomeScreenUsageMonitorObserver.h>

@class SBHIconManager, CHSConfiguredWidgetContainerConsumer, NSString;

@interface SBChronoHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {

	SBHIconManager* _iconManager;
	CHSConfiguredWidgetContainerConsumer* _chronoConsumer;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                       //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) CHSConfiguredWidgetContainerConsumer * chronoConsumer;              //@synthesize chronoConsumer=_chronoConsumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_descriptionForArray:(id)arg1 name:(id)arg2 ;
-(CHSConfiguredWidgetContainerConsumer *)chronoConsumer;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconRemoved:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 ;
-(id)_containerDescriptorForWidgetIcon:(id)arg1 atLocation:(long long)arg2 page:(unsigned long long)arg3 ;
-(SBHIconManager *)iconManager;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconAdded:(id)arg2 ;
-(id)init;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2 ;
-(void)_rebuildAndTransmitConfiguredWidgetData:(id)arg1 ;
-(id)initWithIconManager:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2 ;
@end
