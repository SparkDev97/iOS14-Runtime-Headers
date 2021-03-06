/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDriverProtocol <NSObject>
@required
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)configureWithReply:(/*^block*/id)arg1;

@end

