/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FMMixParameters;

@interface FMTrack : NSObject {

	NSArray* _clips;
	FMMixParameters* _mixParameters;

}

@property (nonatomic,retain) NSArray * clips;                              //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) FMMixParameters * mixParameters;              //@synthesize mixParameters=_mixParameters - In the implementation block
-(NSArray *)clips;
-(void)setClips:(NSArray *)arg1 ;
-(id)description;
-(FMMixParameters *)mixParameters;
-(id)initWithClips:(id)arg1 mixParameters:(id)arg2 ;
-(void)setMixParameters:(FMMixParameters *)arg1 ;
@end

