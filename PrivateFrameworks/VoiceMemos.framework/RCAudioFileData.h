/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreFoundation/NSData.h>

@interface RCAudioFileData : NSData {

	OpaqueAudioFileIDRef _audioFile;
	unsigned long long _audioFileSize;

}
+(id)audioFileDataWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)_initWithURL:(id)arg1 error:(id*)arg2 ;
@end
