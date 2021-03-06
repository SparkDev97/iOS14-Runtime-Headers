/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings {

	int _movieMode;
	FigCaptureMovieFileRecordingSettings* _movieRecordingSettings;
	NSURL* _movieURLForOriginalImage;
	NSArray* _movieLevelMetadataForOriginalImage;
	NSURL* _spatialOverCaptureMovieURLForOriginalImage;
	NSArray* _spatialOverCaptureMovieLevelMetadataForOriginalImage;
	CGSize _nonDestructiveCropSize;

}

@property (assign,nonatomic) int movieMode;                                                             //@synthesize movieMode=_movieMode - In the implementation block
@property (nonatomic,copy) FigCaptureMovieFileRecordingSettings * movieRecordingSettings;               //@synthesize movieRecordingSettings=_movieRecordingSettings - In the implementation block
@property (nonatomic,copy) NSURL * movieURLForOriginalImage;                                            //@synthesize movieURLForOriginalImage=_movieURLForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForOriginalImage;                                //@synthesize movieLevelMetadataForOriginalImage=_movieLevelMetadataForOriginalImage - In the implementation block
@property (nonatomic,copy) NSURL * spatialOverCaptureMovieURLForOriginalImage;                          //@synthesize spatialOverCaptureMovieURLForOriginalImage=_spatialOverCaptureMovieURLForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * spatialOverCaptureMovieLevelMetadataForOriginalImage;              //@synthesize spatialOverCaptureMovieLevelMetadataForOriginalImage=_spatialOverCaptureMovieLevelMetadataForOriginalImage - In the implementation block
@property (assign,nonatomic) CGSize nonDestructiveCropSize;                                             //@synthesize nonDestructiveCropSize=_nonDestructiveCropSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMovieURLForOriginalImage:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpatialOverCaptureMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(void)dealloc;
-(NSURL *)movieURLForOriginalImage;
-(NSURL *)spatialOverCaptureMovieURLForOriginalImage;
-(void)setMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(FigCaptureMovieFileRecordingSettings *)movieRecordingSettings;
-(void)setMovieMode:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpatialOverCaptureMovieURLForOriginalImage:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)nonDestructiveCropSize;
-(int)movieMode;
-(void)setMovieRecordingSettings:(FigCaptureMovieFileRecordingSettings *)arg1 ;
-(NSArray *)spatialOverCaptureMovieLevelMetadataForOriginalImage;
-(id)description;
-(NSArray *)movieLevelMetadataForOriginalImage;
-(void)setNonDestructiveCropSize:(CGSize)arg1 ;
@end

