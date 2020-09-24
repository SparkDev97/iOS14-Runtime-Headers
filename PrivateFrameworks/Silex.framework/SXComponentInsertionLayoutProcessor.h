/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXComponentInsertionManager;
@class SXLayoutOptions, NSString;

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor> {

	id<SXComponentInsertionManager> _componentInsertionManager;
	SXLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) id<SXComponentInsertionManager> componentInsertionManager;              //@synthesize componentInsertionManager=_componentInsertionManager - In the implementation block
@property (nonatomic,retain) SXLayoutOptions * layoutOptions;                                          //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXLayoutOptions *)layoutOptions;
-(id)initWithComponentInsertionManager:(id)arg1 ;
-(id<SXComponentInsertionManager>)componentInsertionManager;
-(void)setLayoutOptions:(SXLayoutOptions *)arg1 ;
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
@end
