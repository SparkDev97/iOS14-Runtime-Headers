/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXStoreFrontProvider.h>

@protocol FCAppleAccount;
@class NSString;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider> {

	id<FCAppleAccount> _appleAccount;

}

@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCAppleAccount>)appleAccount;
-(NSString *)storeFrontIdentifier;
-(id)initWithAppleAccount:(id)arg1 ;
@end

