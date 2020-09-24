/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class AVAsset, AVAudioMix, AVVideoComposition, NSArray, NSObject, AVAssetExportSession, NSError, NSURL, NSString, CLLocation, NSDate, PFAssetAdjustments;

@interface PFVideoSharingOperation : NSOperation {

	AVAsset* _videoAsset;
	AVAudioMix* _audioMix;
	AVVideoComposition* _videoComposition;
	NSArray* _videoMetadata;
	NSObject*<OS_dispatch_queue> _externalIsolation;
	AVAssetExportSession* _exportSession;
	BOOL _beganExport;
	BOOL _operationSuccess;
	NSError* _operationError;
	BOOL _shouldStripMetadata;
	BOOL _shouldStripLocation;
	BOOL _shouldStripCaption;
	BOOL _shouldStripAccessibilityDescription;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customCaption;
	NSString* _customAccessibilityLabel;
	NSString* _exportPreset;
	NSString* _exportFileType;
	NSURL* _videoURL;
	NSURL* _resultingFileURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setVideoURL:,nonatomic,copy) NSURL * videoURL;                                    //@synthesize videoURL=_videoURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (assign,setter=_setSuccess:,nonatomic) BOOL success; 
@property (setter=_setOperationError:,nonatomic,retain) NSError * operationError; 
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                                              //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                                                      //@synthesize customDate=_customDate - In the implementation block
@property (assign,nonatomic) BOOL shouldStripCaption;                                                //@synthesize shouldStripCaption=_shouldStripCaption - In the implementation block
@property (nonatomic,copy) NSString * customCaption;                                                 //@synthesize customCaption=_customCaption - In the implementation block
@property (assign,nonatomic) BOOL shouldStripAccessibilityDescription;                               //@synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * exportPreset;                                                  //@synthesize exportPreset=_exportPreset - In the implementation block
@property (nonatomic,copy) NSString * exportFileType;                                                //@synthesize exportFileType=_exportFileType - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,copy,readonly) NSURL * resultingFileURL;                                        //@synthesize resultingFileURL=_resultingFileURL - In the implementation block
+(id)operationErrorWithCode:(long long)arg1 underlyingError:(id)arg2 withDescription:(id)arg3 ;
-(NSError *)operationError;
-(void)cancel;
-(NSString *)outputFilename;
-(BOOL)success;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(void)setCustomCaption:(NSString *)arg1 ;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(void)setExportFileType:(NSString *)arg1 ;
-(void)setExportPreset:(NSString *)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(PFAssetAdjustments *)_adjustments;
-(NSString *)exportPreset;
-(void)setOutputFilename:(NSString *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(void)_setVideoURL:(id)arg1 ;
-(float)progress;
-(void)_setSuccess:(BOOL)arg1 ;
-(void)main;
-(BOOL)shouldStripLocation;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripCaption;
-(void)setShouldStripCaption:(BOOL)arg1 ;
-(BOOL)shouldStripAccessibilityDescription;
-(void)setShouldStripAccessibilityDescription:(BOOL)arg1 ;
-(NSURL *)outputDirectoryURL;
-(CLLocation *)customLocation;
-(NSString *)customCaption;
-(NSDate *)customDate;
-(void)setCustomDate:(NSDate *)arg1 ;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(NSURL *)resultingFileURL;
-(void)_setAdjustments:(id)arg1 ;
-(NSString *)exportFileType;
-(id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2 ;
-(BOOL)_ensureVideoProperties;
-(void)_validateMetadata;
-(BOOL)_runExport;
-(void)_setOperationError:(id)arg1 ;
@end
