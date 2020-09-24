/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PGTitleSpecCollection : NSObject {

	NSArray* _specPools;

}

@property (nonatomic,readonly) NSArray * specPools;              //@synthesize specPools=_specPools - In the implementation block
+(id)collectionWithSpecPools:(id)arg1 ;
-(id)description;
-(id)initWithSpecPools:(id)arg1 ;
-(id)allPossibleTitlesWithMomentNodes:(id)arg1 ;
-(id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1 ;
-(id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(BOOL)arg2 ;
-(NSArray *)specPools;
@end
