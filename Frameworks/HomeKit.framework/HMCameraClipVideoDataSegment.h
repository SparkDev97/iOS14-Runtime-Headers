/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMCameraClipVideoSegment.h>

@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment {

	double _duration;
	double _timeOffset;

}

@property (readonly) double duration;                //@synthesize duration=_duration - In the implementation block
@property (readonly) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(double)duration;
-(double)timeOffset;
-(id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 duration:(double)arg3 timeOffset:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
