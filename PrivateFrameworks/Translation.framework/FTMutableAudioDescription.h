/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioDescription.h>

@interface FTMutableAudioDescription : FTAudioDescription

@property (assign,nonatomic) double sample_rate; 
@property (assign,nonatomic) unsigned format_id; 
@property (assign,nonatomic) unsigned format_flags; 
@property (assign,nonatomic) unsigned bytes_per_packet; 
@property (assign,nonatomic) unsigned frames_per_packet; 
@property (assign,nonatomic) unsigned bytes_per_frame; 
@property (assign,nonatomic) unsigned channels_per_frame; 
@property (assign,nonatomic) unsigned bits_per_channel; 
@property (assign,nonatomic) unsigned reserved; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReserved:(unsigned)arg1 ;
-(double)sample_rate;
-(void)setSample_rate:(double)arg1 ;
-(unsigned)format_id;
-(void)setFormat_id:(unsigned)arg1 ;
-(unsigned)format_flags;
-(void)setFormat_flags:(unsigned)arg1 ;
-(unsigned)bytes_per_packet;
-(void)setBytes_per_packet:(unsigned)arg1 ;
-(unsigned)frames_per_packet;
-(void)setFrames_per_packet:(unsigned)arg1 ;
-(unsigned)bytes_per_frame;
-(void)setBytes_per_frame:(unsigned)arg1 ;
-(unsigned)channels_per_frame;
-(void)setChannels_per_frame:(unsigned)arg1 ;
-(unsigned)bits_per_channel;
-(void)setBits_per_channel:(unsigned)arg1 ;
-(id)init;
-(unsigned)reserved;
@end
