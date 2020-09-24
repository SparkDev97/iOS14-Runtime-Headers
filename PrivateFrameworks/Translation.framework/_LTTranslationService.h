/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LTTranslationService
@required
-(void)cleanup;
-(void)clearCaches;
-(void)translate:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)provideFeedback:(id)arg1 withContext:(id)arg2;
-(void)startInstallRequest:(id)arg1;
-(void)addSpeechAudioData:(id)arg1;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endAudio;
-(void)installedLocales:(/*^block*/id)arg1;
-(void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_offlineLanguageStatus:(/*^block*/id)arg1;
-(void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)_getAssetSize:(/*^block*/id)arg1;
-(void)_purgeAllAssets:(/*^block*/id)arg1;
-(void)_updateAllAssets:(/*^block*/id)arg1;
-(void)availableLocalePairsForTask:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(/*^block*/id)arg3;
-(void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(/*^block*/id)arg3;
-(void)languageForText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)languagesForText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)logWithRequestData:(id)arg1;
-(void)preheatWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSpeechTranslationWithContext:(id)arg1;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;

@end
