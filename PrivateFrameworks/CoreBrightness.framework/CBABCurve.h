/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBABCurve : NSObject {

	SCD_Struct_CB11 pref;
	float currentLux;
	float mappedBrightness;
	NSObject*<OS_os_log> _logHandle;
	float _scaleFactor;
	unsigned long long _version;

}

@property (readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign) float scaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(id)initWithUUID:(id)arg1 ;
-(unsigned long long)version;
-(void)setScaleFactor:(float)arg1 ;
-(float)scaleFactor;
-(void)resetToDefaultState;
-(id)init;
-(BOOL)setLux:(float)arg1 ;
-(id)description;
-(unsigned long long)getVersion;
-(float)getScaledBL2;
-(float)getScaledBL1;
-(void)setScaledBL2:(float)arg1 ;
-(void)setScaledBL1:(float)arg1 ;
-(void)setLinearBrightnessMin:(float)arg1 andMax:(float)arg2 ;
-(float)getLinearBrightness;
-(void)updateALSParametersForDisplayBrightness:(float)arg1 ;
-(id)copyUserPrefState;
-(void)setSavedPrefences:(id)arg1 ;
@end
