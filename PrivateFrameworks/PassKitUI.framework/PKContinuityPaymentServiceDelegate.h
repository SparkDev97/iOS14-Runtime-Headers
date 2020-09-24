/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContinuityPaymentServiceDelegate <NSObject>
@optional
-(void)didReceiveUpdatedPaymentDevices:(id)arg1;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;

@end
