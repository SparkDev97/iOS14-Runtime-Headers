/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface CFXEffectMessagesStickerProperties : NSObject {

	NSString* _effectID;
	NSURL* _previewUrl;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) NSString * effectID;                          //@synthesize effectID=_effectID - In the implementation block
@property (nonatomic,readonly) NSURL * previewUrl;                           //@synthesize previewUrl=_previewUrl - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedDescription;
-(NSString *)effectID;
-(id)initWithEffectID:(id)arg1 previewUrl:(id)arg2 localizedDescription:(id)arg3 ;
-(NSURL *)previewUrl;
@end

