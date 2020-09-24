/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject {

	int _injectAudioConfigType;
	double _amplitude;
	NSString* _audioFileName;

}

@property (assign,nonatomic) int injectAudioConfigType;              //@synthesize injectAudioConfigType=_injectAudioConfigType - In the implementation block
@property (assign,nonatomic) double amplitude;                       //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) NSString * audioFileName;               //@synthesize audioFileName=_audioFileName - In the implementation block
-(void)setAmplitude:(double)arg1 ;
-(double)amplitude;
-(int)injectAudioConfigType;
-(void)setInjectAudioConfigType:(int)arg1 ;
-(NSString *)audioFileName;
-(void)setAudioFileName:(NSString *)arg1 ;
@end
