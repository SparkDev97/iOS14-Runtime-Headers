/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlInteractiveContentContaining <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> quickControlHost; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide; 
@optional
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;

@required
-(BOOL)isUserInteractionEnabled;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(void)setPreferredFrameLayoutGuide:(id)arg1;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
-(void)setQuickControlHost:(id)arg1;
-(id<HUQuickControlContentHosting>)quickControlHost;

@end

