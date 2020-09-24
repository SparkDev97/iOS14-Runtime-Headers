/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSPowerStatusProviding <NSObject>
@property (getter=isOnAC,nonatomic,readonly) BOOL onAC; 
@property (getter=isConnectedToExternalChargingSource,nonatomic,readonly) BOOL connectedToExternalChargingSource; 
@property (getter=isConnectedToQiPower,nonatomic,readonly) BOOL connectedToQiPower; 
@required
-(BOOL)isConnectedToQiPower;
-(BOOL)isConnectedToExternalChargingSource;
-(BOOL)isOnAC;

@end
