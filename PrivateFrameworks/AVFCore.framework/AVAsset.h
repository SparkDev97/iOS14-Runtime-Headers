/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, AVAssetTrack, NSString, NSArray, AVDisplayCriteria;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (readonly) AVAssetTrack * mainVideoTrack; 
@property (readonly) AVAssetTrack * mainAudioTrack; 
@property (readonly) CGSize mainVideoTrackNaturalSize; 
@property (readonly) CGSize mainVideoTrackPreferredSize; 
@property (readonly) CGAffineTransform mainVideoTrackPreferredTransform; 
@property (readonly) float mainVideoTrackNominalFrameRate; 
@property (readonly) CGSize scaleFactors; 
@property (readonly) NSString * localizedDisplayName; 
@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) long long moovAtomSize; 
@property (nonatomic,readonly) NSArray * fragments; 
@property (nonatomic,retain,readonly) id<AVLoggingIdentifier> loggingIdentifier; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumTimeOffsetFromLive; 
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)assetWithURL:(id)arg1 ;
+(id)makeAssetLoggingIdentifier;
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
+(BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)arg1 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(BOOL)supportsPlayerItems;
+(id)inspectionOnlyAssetWithFigAsset:(OpaqueFigAssetRef)arg1 ;
+(id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2 ;
-(NSString *)localizedDisplayName;
-(CGSize)scaleFactors;
-(id)commonMetadataStringValueForKey:(id)arg1 ;
-(AVAssetTrack *)mainVideoTrack;
-(CGSize)mainVideoTrackNaturalSize;
-(CGAffineTransform)mainVideoTrackPreferredTransform;
-(BOOL)canPassthroughExport;
-(AVAssetTrack *)mainAudioTrack;
-(BOOL)isMarkedNotSerializable;
-(CGSize)mainVideoTrackPreferredSize;
-(float)mainVideoTrackNominalFrameRate;
-(BOOL)valuesForKeysAreFinishedLoading:(id)arg1 ;
-(id)plVideoCodecName;
-(id)plVideoCodecFourCharCodeString;
-(id)createLanguageOptionGroups;
-(void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)ipaVideoCodecName;
-(float)preferredVolume;
-(id)lyrics;
-(id<AVLoggingIdentifier>)loggingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(BOOL)isPlayable;
-(SCD_Struct_AV6)overallDurationHint;
-(Class)_classForTrackInspectors;
-(id)availableVideoDynamicRanges;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(id)propertyListForProxy;
-(id)alternateTrackGroups;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(id)tracks;
-(int)unusedTrackID;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(id)_mediaSelectionGroupDictionaries;
-(SCD_Struct_AV6)duration;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)trackReferences;
-(void)dealloc;
-(BOOL)canContainFragments;
-(BOOL)isCompatibleWithAirPlayVideo;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(id)init;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigAssetRef)_figAsset;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_assetAnalysisMessages;
-(id)trackWithTrackID:(int)arg1 ;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(NSArray *)availableChapterLocales;
-(float)preferredSoundCheckVolumeNormalization;
-(id)_exportURL;
-(NSArray *)fragments;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(double)_fragmentMindingInterval;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)availableChapterLanguages;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(BOOL)_mindsFragments;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaTypes:(id)arg1 ;
-(id)preferredMediaSelection;
-(void)_serverHasDied;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(id)_nameForLogging;
-(id)_comparisonToken;
-(void)_setLoggingIdentifier:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(unsigned long long)referenceRestrictions;
-(BOOL)_needsLegacyChangeNotifications;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)_ID3Metadata;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)allMediaSelections;
-(id)_tracksWithClass:(Class)arg1 ;
-(id)commonMetadata;
-(void)_tracksDidChange;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(void)_loadChapterInfo;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(long long)moovAtomSize;
-(id)_availableCanonicalizedChapterLanguages;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterTracks;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(BOOL)supportsAnalysisReporting;
-(int)naturalTimeScale;
-(BOOL)containsFragments;
-(BOOL)providesPreciseDurationAndTiming;
-(id)creationDate;
-(id)_weakReference;
-(void)cancelLoading;
-(BOOL)isExportable;
-(float)preferredRate;
-(unsigned long long)hash;
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isReadable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStreaming;
-(CGSize)maximumVideoResolution;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)availableMetadataFormats;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)hasProtectedContent;
-(BOOL)isProxy;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
@end
