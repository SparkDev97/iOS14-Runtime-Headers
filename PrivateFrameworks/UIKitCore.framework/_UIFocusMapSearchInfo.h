/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, _UIFocusGroupMap, NSMutableArray, _UIFocusSearchInfo;

@interface _UIFocusMapSearchInfo : NSObject {

	BOOL _didFindFocusBlockingBoundary;
	NSArray* _linearSortedFocusItems;
	_UIFocusGroupMap* _focusGroupMap;
	NSMutableArray* _mutableSnapshots;
	NSMutableArray* _mutableDestinationRegions;
	_UIFocusSearchInfo* _searchInfo;

}

@property (nonatomic,retain) NSMutableArray * mutableSnapshots;                       //@synthesize mutableSnapshots=_mutableSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDestinationRegions;              //@synthesize mutableDestinationRegions=_mutableDestinationRegions - In the implementation block
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                         //@synthesize searchInfo=_searchInfo - In the implementation block
@property (assign,nonatomic) BOOL didFindFocusBlockingBoundary;                       //@synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary - In the implementation block
@property (nonatomic,retain) NSArray * linearSortedFocusItems;                        //@synthesize linearSortedFocusItems=_linearSortedFocusItems - In the implementation block
@property (nonatomic,retain) _UIFocusGroupMap * focusGroupMap;                        //@synthesize focusGroupMap=_focusGroupMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapshots; 
@property (nonatomic,copy,readonly) NSArray * destinationRegions; 
-(void)addSnapshot:(id)arg1 ;
-(_UIFocusGroupMap *)focusGroupMap;
-(_UIFocusSearchInfo *)searchInfo;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(NSArray *)linearSortedFocusItems;
-(id)init;
-(NSArray *)destinationRegions;
-(NSArray *)snapshots;
-(void)addDestinationRegion:(id)arg1 ;
-(void)setDidFindFocusBlockingBoundary:(BOOL)arg1 ;
-(void)setFocusGroupMap:(_UIFocusGroupMap *)arg1 ;
-(void)setLinearSortedFocusItems:(NSArray *)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(BOOL)didFindFocusBlockingBoundary;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
@end

