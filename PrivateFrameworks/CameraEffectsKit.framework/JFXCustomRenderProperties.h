/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVCompositeDelegate;
@interface JFXCustomRenderProperties : NSObject {

	BOOL _animojiTapPoint;
	id<PVCompositeDelegate> _renderingDelegate;
	id _metadata;

}

@property (nonatomic,readonly) id<PVCompositeDelegate> renderingDelegate;              //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (nonatomic,readonly) id metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL animojiTapPoint;                                     //@synthesize animojiTapPoint=_animojiTapPoint - In the implementation block
+(id)newCustomRenderProperties:(id)arg1 metadata:(id)arg2 ;
-(id)metadata;
-(id<PVCompositeDelegate>)renderingDelegate;
-(BOOL)animojiTapPoint;
-(void)setAnimojiTapPoint:(BOOL)arg1 ;
@end
