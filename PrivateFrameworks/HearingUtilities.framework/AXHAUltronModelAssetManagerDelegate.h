/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXHAUltronModelAssetManagerDelegate <NSObject>
@optional
-(void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(BOOL)arg5;

@required
-(void)assetsReadyForUltronManager:(id)arg1;
-(void)assetsNotReadyForUltronManager:(id)arg1;

@end
