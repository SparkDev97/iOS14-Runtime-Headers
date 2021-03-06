/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController {

	MKMapItem* _mapItem;
	NSMutableDictionary* _cacheVC;
	NSMutableDictionary* _cacheModuleType;

}

@property (nonatomic,retain) NSMutableDictionary * cacheVC;                      //@synthesize cacheVC=_cacheVC - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheModuleType;              //@synthesize cacheModuleType=_cacheModuleType - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
-(NSMutableDictionary *)cacheVC;
-(id)_createViewControllerForModule:(id)arg1 ;
-(id)_layoutModuleForMapItem;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheModuleType;
-(id)_cachedViewControllerForModule:(int)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)isLayoutDynamic;
-(void)_createModuleLayout:(id)arg1 ;
-(BOOL)isTransitItem;
@end

