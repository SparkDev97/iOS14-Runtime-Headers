/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {

	BOOL _backgroundsAreSame;
	_UIBarBackgroundAppearanceData* _backgroundData1;
	_UIBarBackgroundAppearanceData* _backgroundData2;

}

@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData1;              //@synthesize backgroundData1=_backgroundData1 - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData2;              //@synthesize backgroundData2=_backgroundData2 - In the implementation block
-(id)bg2Color;
-(id)bg2Effects;
-(id)bg2ShadowColor;
-(double)bg1Alpha;
-(long long)bg2ImageMode;
-(id)bg2ShadowEffect;
-(long long)bg1ImageMode;
-(id)bg1Color;
-(id)bg1ShadowEffect;
-(double)bg2ShadowAlpha;
-(BOOL)shouldUseExplicitGeometry;
-(BOOL)bg2HasShadow;
-(double)bg1ShadowAlpha;
-(id)bg1Image;
-(id)bg1Effects;
-(id)bg2ShadowImage;
-(id)bg2ShadowTint;
-(id)bg1ShadowTint;
-(id)bg1ShadowImage;
-(id)bg2Image;
-(BOOL)bg2Enabled;
-(BOOL)bg1HasShadow;
-(void)describeInto:(id)arg1 ;
-(void)setBackgroundData1:(_UIBarBackgroundAppearanceData *)arg1 ;
-(double)bg2Alpha;
-(id)initWithLayout:(id)arg1 ;
-(id)bg1ShadowColor;
-(_UIBarBackgroundAppearanceData *)backgroundData2;
-(_UIBarBackgroundAppearanceData *)backgroundData1;
-(void)setBackgroundData2:(_UIBarBackgroundAppearanceData *)arg1 ;
@end
