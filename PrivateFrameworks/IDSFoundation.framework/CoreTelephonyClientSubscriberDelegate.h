/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
-(void)simStatusDidChange:(id)arg1 status:(id)arg2;
-(void)authTokenChanged:(id)arg1;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)subscriberCountryCodeDidChange:(id)arg1;
-(void)shortLabelsDidChange;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)prlVersionDidChange:(id)arg1 version:(id)arg2;
-(void)userDefaultVoiceSlotDidChange:(id)arg1;

@end

