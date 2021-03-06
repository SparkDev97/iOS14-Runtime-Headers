/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFAutoFillHelperProtocol.h>

@class NSXPCConnection, NSString;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(id)init;
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getRemoteAutoFillAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
@end

