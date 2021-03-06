/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLBag;

@interface SKUIReloadConfigurationOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (retain) SSURLBag * URLBag; 
@property (copy) id outputBlock; 
+(id)cachePath;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(SSURLBag *)URLBag;
-(id)init;
-(void)main;
-(void)setURLBag:(SSURLBag *)arg1 ;
@end

