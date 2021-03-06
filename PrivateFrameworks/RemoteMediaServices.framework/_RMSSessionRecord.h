/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMSPowerAssertion, RMSRunAssertion;

@interface _RMSSessionRecord : NSObject {

	int _refreshCount;
	int _timeout;
	id _session;
	RMSPowerAssertion* _powerAssertion;
	RMSRunAssertion* _runAssertion;

}

@property (assign,nonatomic) int refreshCount;                                //@synthesize refreshCount=_refreshCount - In the implementation block
@property (assign,nonatomic) int timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) RMSPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) RMSRunAssertion * runAssertion;                  //@synthesize runAssertion=_runAssertion - In the implementation block
-(int)timeout;
-(RMSPowerAssertion *)powerAssertion;
-(void)setSession:(id)arg1 ;
-(id)session;
-(void)setTimeout:(int)arg1 ;
-(void)setPowerAssertion:(RMSPowerAssertion *)arg1 ;
-(RMSRunAssertion *)runAssertion;
-(void)setRunAssertion:(RMSRunAssertion *)arg1 ;
-(int)refreshCount;
-(void)setRefreshCount:(int)arg1 ;
@end

