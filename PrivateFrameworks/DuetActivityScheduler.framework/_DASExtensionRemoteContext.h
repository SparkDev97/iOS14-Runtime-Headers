/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_DASRemoteExtensionContextProtocol.h>

@protocol OS_os_log;
@class NSObject, _DASExtension, NSString;

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol> {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (readonly) _DASExtension * extension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)extensionRunnerClassWhitelist;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(_DASExtension *)extension;
-(NSObject*<OS_os_log>)log;
-(id)createExtensionRunnerWithClassName:(id)arg1 ;
-(void)suspend;
-(id)init;
-(void)performActivity:(id)arg1 ;
-(id)hostContextWithError:(id*)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
@end
