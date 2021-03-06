/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface AXTapticChimeAsset : NSObject {

	float _volume;
	NSString* _audioFilePath;
	double _prePlayTimeInterval;
	NSDictionary* _hapticDictionary;

}

@property (nonatomic,readonly) NSDictionary * hapticDictionary;              //@synthesize hapticDictionary=_hapticDictionary - In the implementation block
@property (nonatomic,readonly) NSString * audioFilePath;                     //@synthesize audioFilePath=_audioFilePath - In the implementation block
@property (nonatomic,readonly) double prePlayTimeInterval;                   //@synthesize prePlayTimeInterval=_prePlayTimeInterval - In the implementation block
@property (nonatomic,readonly) float volume;                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) NSArray * hapticAtomEntries; 
+(id)quarterHourAssetForType:(long long)arg1 ;
+(id)hourAssetForType:(long long)arg1 hour:(unsigned long long)arg2 ;
+(id)_assetPathForChimeSoundType:(long long)arg1 fileName:(id)arg2 ;
-(float)volume;
-(id)description;
-(NSString *)audioFilePath;
-(unsigned)createSystemSoundIDForStartTime:(double)arg1 ;
-(NSArray *)hapticAtomEntries;
-(double)prePlayTimeInterval;
-(id)_initWithChimeSoundType:(long long)arg1 audioFilePath:(id)arg2 hapticsFilePath:(id)arg3 ;
-(NSDictionary *)hapticDictionary;
@end

