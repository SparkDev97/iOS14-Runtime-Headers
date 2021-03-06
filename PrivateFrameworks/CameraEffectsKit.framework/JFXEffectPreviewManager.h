/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, JFXEffectPreviewManagerDelegate;
@class NSString, NSObject, JFXLRUCache, JFXEffectPreviewDiskCache, JTImage, NSValue, JFXEffectsPreviewGenerator, PVLivePlayer, JFXEffectContinousPreviewOptions, NSMutableSet, NSSet, NSMapTable;

@interface JFXEffectPreviewManager : NSObject <PVLivePlayerDelegate> {

	SCD_Struct_JF36 _delegateAvailability;
	BOOL _inDealloc;
	BOOL _continouslyPreviewing_internal;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	JFXLRUCache* _previewCache;
	JFXEffectPreviewDiskCache* _previewDiskCache;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentStaticPreviewSemaphore;
	NSObject* _pickerPreviewingToken;
	id<JFXEffectPreviewManagerDelegate> _delegate_internal;
	JTImage* _defaultPreviewImage_internal;
	NSValue* __defaultPreviewImageDisplayTransformValue_internal;
	JFXEffectsPreviewGenerator* _staticPreviewGenerator;
	PVLivePlayer* _continousPreviewPlayer;
	JFXEffectContinousPreviewOptions* _continousPreviewOptions;
	NSMutableSet* _preparedContinousPreviewEffects;
	NSMutableSet* _effectsPreparingForPreview;
	NSSet* _currentContinousPreviewEffects;
	NSMapTable* _assetRequestsForPreviewEffects;
	CGSize _continousPreviewSize;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) JFXLRUCache * previewCache;                                                     //@synthesize previewCache=_previewCache - In the implementation block
@property (nonatomic,readonly) JFXEffectPreviewDiskCache * previewDiskCache;                                   //@synthesize previewDiskCache=_previewDiskCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> synchronizationQueue;                              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> previewQueue;                                      //@synthesize previewQueue=_previewQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> concurrentStaticPreviewSemaphore;              //@synthesize concurrentStaticPreviewSemaphore=_concurrentStaticPreviewSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject * pickerPreviewingToken;                                               //@synthesize pickerPreviewingToken=_pickerPreviewingToken - In the implementation block
@property (assign,nonatomic,__weak) id<JFXEffectPreviewManagerDelegate> delegate_internal;                     //@synthesize delegate_internal=_delegate_internal - In the implementation block
@property (assign,nonatomic) BOOL continouslyPreviewing_internal;                                              //@synthesize continouslyPreviewing_internal=_continouslyPreviewing_internal - In the implementation block
@property (nonatomic,retain) JTImage * defaultPreviewImage_internal;                                           //@synthesize defaultPreviewImage_internal=_defaultPreviewImage_internal - In the implementation block
@property (nonatomic,retain) NSValue * _defaultPreviewImageDisplayTransformValue_internal;                     //@synthesize _defaultPreviewImageDisplayTransformValue_internal=__defaultPreviewImageDisplayTransformValue_internal - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGenerator * staticPreviewGenerator;                              //@synthesize staticPreviewGenerator=_staticPreviewGenerator - In the implementation block
@property (nonatomic,retain) PVLivePlayer * continousPreviewPlayer;                                            //@synthesize continousPreviewPlayer=_continousPreviewPlayer - In the implementation block
@property (assign,nonatomic) CGSize continousPreviewSize;                                                      //@synthesize continousPreviewSize=_continousPreviewSize - In the implementation block
@property (nonatomic,retain) JFXEffectContinousPreviewOptions * continousPreviewOptions;                       //@synthesize continousPreviewOptions=_continousPreviewOptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * preparedContinousPreviewEffects;                                   //@synthesize preparedContinousPreviewEffects=_preparedContinousPreviewEffects - In the implementation block
@property (nonatomic,retain) NSMutableSet * effectsPreparingForPreview;                                        //@synthesize effectsPreparingForPreview=_effectsPreparingForPreview - In the implementation block
@property (nonatomic,retain) NSSet * currentContinousPreviewEffects;                                           //@synthesize currentContinousPreviewEffects=_currentContinousPreviewEffects - In the implementation block
@property (nonatomic,retain) NSMapTable * assetRequestsForPreviewEffects;                                      //@synthesize assetRequestsForPreviewEffects=_assetRequestsForPreviewEffects - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<JFXEffectPreviewManagerDelegate> delegate; 
@property (nonatomic,copy) NSSet * continousPreviewEffects; 
@property (getter=isContinouslyPreviewing,nonatomic,readonly) BOOL continouslyPreviewing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JFX_createTransparentEmptyImageForPreviewSize:(CGSize)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)defaultPreviewImage;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(void)setDelegate:(id<JFXEffectPreviewManagerDelegate>)arg1 ;
-(JFXLRUCache *)previewCache;
-(id<JFXEffectPreviewManagerDelegate>)delegate;
-(NSString *)name;
-(BOOL)isContinouslyPreviewing;
-(id)initWithName:(id)arg1 callbackQueue:(id)arg2 ;
-(void)startPreparingPreviewsContinuouslyAtSize:(CGSize)arg1 options:(id)arg2 ;
-(void)setContinousPreviewEffects:(NSSet *)arg1 ;
-(void)previewForEffect:(id)arg1 atSize:(CGSize)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)continousPreviewsForEffectIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JF3)arg2 ;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3 ;
-(void)JFX_stopCachingPreviewsContinuously;
-(void)JFX_cancelAssetRequestForAllEffects;
-(void)JFX_setContinousPreviewEffects:(id)arg1 ;
-(void)setCurrentContinousPreviewEffects:(NSSet *)arg1 ;
-(JFXEffectContinousPreviewOptions *)continousPreviewOptions;
-(void)JFX_prepareEffectForContinousPreview:(id)arg1 ;
-(void)JFX_updateAssetRequestsPriorityAssociatedWithEffects:(id)arg1 toPriority:(long long)arg2 ;
-(void)JFX_updateAssetRequestsPriorityNotAssociatedWithEffects:(id)arg1 toPriority:(long long)arg2 ;
-(NSSet *)currentContinousPreviewEffects;
-(NSMapTable *)assetRequestsForPreviewEffects;
-(void)setAssetRequestsForPreviewEffects:(NSMapTable *)arg1 ;
-(void)JFX_delegateWillBeginDownloadingPreviewAssetsForEffect:(id)arg1 ;
-(void)JFX_delegateDownloadingPreviewAssetsForEffect:(id)arg1 progress:(double)arg2 ;
-(void)JFX_delegateDidFinishDownloadingPreviewAssetsForEffect:(id)arg1 wasCancelled:(BOOL)arg2 error:(id)arg3 ;
-(void)setContinouslyPreviewing:(BOOL)arg1 ;
-(void)JFX_startPreparingPreviewsContinuouslyAtSize:(CGSize)arg1 options:(id)arg2 ;
-(void)setContinousPreviewSize:(CGSize)arg1 ;
-(void)setContinousPreviewOptions:(JFXEffectContinousPreviewOptions *)arg1 ;
-(void)setContinousPreviewPlayer:(PVLivePlayer *)arg1 ;
-(PVLivePlayer *)continousPreviewPlayer;
-(void)setPreparedContinousPreviewEffects:(NSMutableSet *)arg1 ;
-(NSObject *)pickerPreviewingToken;
-(void)setDefaultPreviewImage:(id)arg1 transformValue:(id)arg2 ;
-(NSMutableSet *)preparedContinousPreviewEffects;
-(NSMutableSet *)effectsPreparingForPreview;
-(CGSize)continousPreviewSize;
-(void)JFX_configureCommonRenderingPropertiesForEffect:(id)arg1 forPreviewSize:(CGSize)arg2 withPreviewOptions:(id)arg3 ;
-(void)JFX_loadRenderingResourcesForEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)JFX_requestPreviewAssetsForEffect:(id)arg1 withPriority:(long long)arg2 onlyThumbnailAssetWhenAvailable:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)JFX_rendersDefaultContinousPreviewImage;
-(BOOL)JFX_lowPriorityScheduling;
-(JFXEffectsPreviewGenerator *)staticPreviewGenerator;
-(void)JFX_delegateUpdateContinousPreviewsForEffectIDs:(id)arg1 ;
-(void)JFX_renderPreviewForEffect:(id)arg1 previewSize:(CGSize)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preparePreviewForEffect:(id)arg1 atSize:(CGSize)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cachedPreviewForEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)concurrentStaticPreviewSemaphore;
-(JFXEffectPreviewDiskCache *)previewDiskCache;
-(void)JFX_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(/*^block*/id)arg1 ;
-(id)defaultPreviewImageDisplayTransformValue;
-(void)setStaticPreviewGenerator:(JFXEffectsPreviewGenerator *)arg1 ;
-(NSSet *)continousPreviewEffects;
-(void)stopCachingPreviewsContinuously;
-(void)purgeCachedPreviewForEffect:(id)arg1 ;
-(void)purgeCachedPreviewsForAllEffects;
-(id<JFXEffectPreviewManagerDelegate>)delegate_internal;
-(void)setDelegate_internal:(id<JFXEffectPreviewManagerDelegate>)arg1 ;
-(BOOL)continouslyPreviewing_internal;
-(void)setContinouslyPreviewing_internal:(BOOL)arg1 ;
-(JTImage *)defaultPreviewImage_internal;
-(void)setDefaultPreviewImage_internal:(JTImage *)arg1 ;
-(NSValue *)_defaultPreviewImageDisplayTransformValue_internal;
-(void)set_defaultPreviewImageDisplayTransformValue_internal:(NSValue *)arg1 ;
-(void)setEffectsPreparingForPreview:(NSMutableSet *)arg1 ;
@end

