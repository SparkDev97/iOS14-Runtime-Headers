/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSString, HMHome, NSSet;

@interface HFServiceIconItemProvider : HFItemProvider {

	NSString* _serviceType;
	NSString* _serviceSubtype;
	HMHome* _home;
	NSSet* _iconItems;

}

@property (nonatomic,copy) NSSet * iconItems;                      //@synthesize iconItems=_iconItems - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;              //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)init;
-(NSSet *)iconItems;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3 ;
-(void)setIconItems:(NSSet *)arg1 ;
-(id)reloadItems;
-(HMHome *)home;
-(NSString *)serviceType;
@end
