/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKConfigurationSource.h>

@protocol OS_dispatch_queue, CRKConfigurationSource;
@class NSObject, CRKNonCatalystStudentDaemonProxy, NSString;

@interface CRKStudentdXPCProfileConfigurationSource : NSObject <CRKConfigurationSource> {

	NSObject*<OS_dispatch_queue> mCallbackQueue;
	id<CRKConfigurationSource> mPlaceholderFileConfigurationSource;
	CRKNonCatalystStudentDaemonProxy* _studentDaemonProxy;

}

@property (nonatomic,readonly) CRKNonCatalystStudentDaemonProxy * studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(BOOL)isStudentdInstalled;
-(CRKNonCatalystStudentDaemonProxy *)studentDaemonProxy;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

