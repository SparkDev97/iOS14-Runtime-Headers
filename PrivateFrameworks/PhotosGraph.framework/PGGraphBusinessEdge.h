/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSDate;

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge {

	BOOL _hasRoutineInfo;
	float _weight;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,readonly) BOOL hasRoutineInfo;                      //@synthesize hasRoutineInfo=_hasRoutineInfo - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate;              //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * universalEndDate;                //@synthesize universalEndDate=_universalEndDate - In the implementation block
-(NSDate *)universalEndDate;
-(NSDate *)universalStartDate;
-(id)edgeDescription;
-(void)setWeight:(float)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)propertyDictionary;
-(float)weight;
-(id)initWithLabel:(id)arg1 fromSourceNode:(id)arg2 toBusinessNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(BOOL)hasRoutineInfo;
@end
