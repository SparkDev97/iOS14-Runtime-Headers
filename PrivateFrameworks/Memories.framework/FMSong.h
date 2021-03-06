/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlexSongProtocol;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FMSong : NSObject {

	NSObject*<FlexSongProtocol> _backend;

}

@property (readonly) NSObject*<FlexSongProtocol> backend;              //@synthesize backend=_backend - In the implementation block
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg1 ;
+(id)loadSongBundleAtPath:(id)arg1 ;
+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg1 ;
+(BOOL)hasValidTagIDs:(id)arg1 ;
+(long long)versionFromArtworkFilename:(id)arg1 ;
-(id)tagIDs;
-(long long)sampleRate;
-(BOOL)isLoaded;
-(long long)metadataVersion;
-(id)keywords;
-(BOOL)hidden;
-(BOOL)canPlay;
-(NSObject*<FlexSongProtocol>)backend;
-(void)_loadIfNeeded;
-(id)initWithBackend:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
-(id)artwork;
-(id)artistName;
-(id)_impl;
-(id)description;
-(id)uid;
-(SCD_Struct_PM8)minimumDuration;
-(id)songName;
-(id)assetWithID:(id)arg1 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(BOOL)recalled;
-(id)mappedToVEK;
-(SCD_Struct_PM8)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2 ;
-(void)_notifySongAssetsChanged;
-(BOOL)_loadFlexSong;
-(id)existingAssetWithID:(id)arg1 ;
-(void)updateBackend:(id)arg1 ;
-(id)songFormat;
-(id)audioEncoderPresetName;
-(void)updateAsset:(id)arg1 downloadProgress:(double)arg2 ;
-(id)idealDurations;
-(id)renditionForDuration:(SCD_Struct_PM8)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(id)customOptions;
@end

