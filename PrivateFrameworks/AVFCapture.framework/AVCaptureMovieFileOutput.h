/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_AV0 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
+(id)new;
+(void)initialize;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
+(long long)uniqueID;
-(void)stopRecording;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)connectionMediaTypes;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(NSArray *)metadata;
-(void)pauseRecording;
-(void)dealloc;
-(id)outputFileURL;
-(void)_startRecording:(id)arg1 ;
-(int)_stopRecording;
-(id)supportedOutputSettingsKeysForConnection:(id)arg1 ;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3 ;
-(void)_removeRecordingDelegateWrapper:(id)arg1 ;
-(BOOL)isRecordingPaused;
-(void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1 ;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1 ;
-(void)setConnectionsActive:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2 ;
-(void)startRecordingMovieWithSettings:(id)arg1 delegate:(id)arg2 ;
-(SCD_Struct_AV0)movieFragmentInterval;
-(id)init;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecording;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg1 ;
-(id)bravoCameraSelectionBehaviorForRecording;
-(NSArray *)availableVideoCodecTypes;
-(BOOL)_recordingInProgress;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)resumeRecording;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV0)arg1 ;
@end

