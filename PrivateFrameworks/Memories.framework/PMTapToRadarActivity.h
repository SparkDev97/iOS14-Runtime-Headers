/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class VEKProduction, MiroMovie, VEKResult;

@interface PMTapToRadarActivity : UIActivity {

	VEKProduction* _production;
	MiroMovie* _tapToRadarMovie;
	VEKResult* _result;

}

@property (assign,nonatomic,__weak) VEKProduction * production;               //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
@property (assign,nonatomic,__weak) VEKResult * result;                       //@synthesize result=_result - In the implementation block
-(id)activityType;
-(VEKResult *)result;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(void)setResult:(VEKResult *)arg1 ;
-(void)performActivity;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 result:(id)arg2 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(id)_returnTextDebugAsString;
-(MiroMovie *)tapToRadarMovie;
@end

