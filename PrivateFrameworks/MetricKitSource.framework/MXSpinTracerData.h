/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKitSource/MXSourceData.h>

@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData {

	MXCPUExceptionDiagnostic* _cpuExceptionDiagnostic;
	MXDiskWriteExceptionDiagnostic* _diskWriteExceptionDiagnostic;

}

@property (retain) MXCPUExceptionDiagnostic * cpuExceptionDiagnostic;                          //@synthesize cpuExceptionDiagnostic=_cpuExceptionDiagnostic - In the implementation block
@property (retain) MXDiskWriteExceptionDiagnostic * diskWriteExceptionDiagnostic;              //@synthesize diskWriteExceptionDiagnostic=_diskWriteExceptionDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MXCPUExceptionDiagnostic *)cpuExceptionDiagnostic;
-(MXDiskWriteExceptionDiagnostic *)diskWriteExceptionDiagnostic;
-(void)setCpuExceptionDiagnostic:(MXCPUExceptionDiagnostic *)arg1 ;
-(void)setDiskWriteExceptionDiagnostic:(MXDiskWriteExceptionDiagnostic *)arg1 ;
@end
