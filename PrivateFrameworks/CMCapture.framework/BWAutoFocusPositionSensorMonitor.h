/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, FigCaptureDisplayLayoutMonitor;

@interface BWAutoFocusPositionSensorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _apsMonitorQueue;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}
+(id)sharedInstance;
+(void)initialize;
+(void)clientHasBeenBackgrounded;
+(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
+(void)logStillImageAPSStatistics:(id)arg1 ;
+(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)clientHasBeenBackgrounded;
-(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)dealloc;
-(void)logStillImageAPSStatistics:(id)arg1 ;
-(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(id)init;
-(void)_processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)_reportStillImageAPSStatisticsToAggd:(id)arg1 ;
-(void)_logStillImageAPSStatistics:(id)arg1 ;
-(void)_reportVideoRecordingAPSStatisticsToAggd:(BWAPSStatistics*)arg1 ;
-(void)_logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)_postMagneticDetectionUserNotification;
-(void)_reportAPSOffsetEstimatorInfoToAggdAndCoreAnalytics:(id)arg1 portType:(id)arg2 ;
-(void)_logAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(id)_getLogFileHandle;
-(void)_appendApsMotionData:(id)arg1 sphereMotionData:(id)arg2 toDataString:(id)arg3 ;
@end
