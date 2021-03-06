/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSArray, NSMutableArray;

@interface BWFigCaptureDevice : NSObject {

	OpaqueFigCaptureDeviceRef _device;
	NSDictionary* _supportedProperties;
	NSDictionary* _streamsByPortType;
	NSArray* _streams;
	NSArray* _synchronizedStreamsGroups;
	NSMutableArray* _activeProcessingSessions;
	BOOL _invalidated;
	os_unfair_lock_s _lock;
	unsigned _ktraceCodePrefix;

}

@property (readonly) NSDictionary * supportedProperties;               //@synthesize supportedProperties=_supportedProperties - In the implementation block
@property (readonly) NSArray * streams;                                //@synthesize streams=_streams - In the implementation block
@property (readonly) NSArray * synchronizedStreamsGroups;              //@synthesize synchronizedStreamsGroups=_synchronizedStreamsGroups - In the implementation block
+(void)initialize;
-(id)getProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(NSArray *)streams;
-(void)invalidate;
-(id)copyStreamWithPortType:(CFStringRef)arg1 error:(int*)arg2 ;
-(int)registerForNotification:(CFStringRef)arg1 listener:(const void*)arg2 callback:(/*function pointer*/void*)arg3 ;
-(void)resetSynchronizedStreamsGroups;
-(int)setMultiCamConfigurationWithActiveUnsynchronizedStreams:(id)arg1 activeSynchronizedStreamsGroups:(id)arg2 cameraControlsPriority:(id)arg3 ;
-(OpaqueFigCaptureDeviceRef)figCaptureDevice;
-(void)processingSessionHasBeenInvalidated:(id)arg1 ;
-(void)dealloc;
-(int)setProperty:(CFStringRef)arg1 value:(id)arg2 ;
-(id)copyStreamsWithPortTypes:(id)arg1 error:(int*)arg2 ;
-(int)relinquishControlOfStreams:(id)arg1 ;
-(id)copySynchronizedStreamsGroupForStreams:(id)arg1 error:(int*)arg2 ;
-(id)copyProperty:(CFStringRef)arg1 error:(int*)arg2 ;
-(id)copyISPProcessingSessionWithType:(int)arg1 error:(int*)arg2 ;
-(int)unregisterForNotification:(CFStringRef)arg1 listener:(const void*)arg2 ;
-(NSDictionary *)supportedProperties;
-(id)initWithFigCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(int)requestControlOfStreams:(id)arg1 ;
-(NSArray *)synchronizedStreamsGroups;
@end

