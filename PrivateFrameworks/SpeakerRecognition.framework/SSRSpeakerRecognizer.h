/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol SSRSpeakerRecognizer <NSObject>
@property (nonatomic,readonly) NSDictionary * lastScoreCard; 
@required
-(id)initWithContext:(id)arg1 delegate:(id)arg2;
-(void)endAudio;
-(void)resetWithContext:(id)arg1;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
-(NSDictionary *)lastScoreCard;

@end
