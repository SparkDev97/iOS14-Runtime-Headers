/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFServiceItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider {

	HMUser* _user;

}

@property (nonatomic,readonly) HMUser * user;              //@synthesize user=_user - In the implementation block
-(HMUser *)user;
-(/*^block*/id)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 user:(id)arg2 ;
@end
