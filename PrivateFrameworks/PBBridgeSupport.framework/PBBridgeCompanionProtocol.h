/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBBridgeCompanionProtocol <NSObject>
@optional
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg1;

@required
-(void)sendProxyActivationRequest:(id)arg1;
-(void)gizmoDidBeginActivating:(id)arg1;
-(void)gizmoDidFinishActivating:(id)arg1;
-(void)getCompanionLanguage:(id)arg1;
-(void)getCompanionRegion:(id)arg1;
-(void)gizmoDidEndPasscodeCreation:(id)arg1;
-(void)getSiriState:(id)arg1;
-(void)handleWarrantySentinelResponse:(id)arg1;
-(void)enableSiriForGizmo:(id)arg1;

@end

