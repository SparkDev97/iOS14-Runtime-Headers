/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject {

	NSMutableSet* _bundles;

}

@property (nonatomic,readonly) NSSet * bundles; 
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryPath;
-(NSSet *)bundles;
-(id)init;
-(void)loadBundles;
-(void)registerBundle:(id)arg1 ;
@end

