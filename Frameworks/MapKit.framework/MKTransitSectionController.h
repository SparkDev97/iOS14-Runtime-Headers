/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, MKTransitSectionPagingFilter, NSSet, NSDate;

@interface MKTransitSectionController : NSObject {

	MKMapItem* _mapItem;
	MKTransitSectionPagingFilter* __pagingFilter;
	NSSet* _linesToShow;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfFilteredRows;
	unsigned long long _numberOfFilteredLines;
	BOOL _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _incidentEntitiesToExclude;

}

@property (nonatomic,readonly) id<GEOTransitSystem> system;                               //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                     //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * incidentEntitiesToExclude;                           //@synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                  //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) MKTransitSectionPagingFilter * _pagingFilter;              //@synthesize _pagingFilter=__pagingFilter - In the implementation block
-(unsigned long long)numberOfRows;
-(id)init;
-(void)_buildRows;
-(id<GEOTransitSystem>)system;
-(id)linesToShow;
-(void)_setNeedsBuildRows;
-(MKTransitSectionPagingFilter *)_pagingFilter;
-(BOOL)_needsBuildRows;
-(NSDate *)departureCutoffDate;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(BOOL)hasFilteredRows;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(void)incrementPagingFilter;
-(BOOL)hasFilteredLines;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(NSSet *)incidentEntitiesToExclude;
-(unsigned long long)numberOfFilteredLines;
@end
