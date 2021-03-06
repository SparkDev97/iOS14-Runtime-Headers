/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JFXEffectAssetProviderProtocol <NSObject>
@required
-(id)requestAllAssetsWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)requestAssetWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)cancelAssetRequest:(id)arg1;
-(id)availableAssetsWithFilteringOptionsArray:(id)arg1;
-(id)availableAssetsWithFilteringOptions:(id)arg1;
-(id)localAssetsWithFilteringOptions:(id)arg1;
-(id)describeRequest:(id)arg1;
-(void)updatePriorityForAssetRequest:(id)arg1 newPriority:(long long)arg2;

@end

