/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	NSMutableSet* _supportedAudioPayloads;

}

@property (nonatomic,retain) NSSet * supportedAudioPayloads;              //@synthesize supportedAudioPayloads=_supportedAudioPayloads - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)supportedAudioPayloads;
-(void)setSupportedAudioPayloads:(NSSet *)arg1 ;
-(void)addPayload:(int)arg1 ;
@end

