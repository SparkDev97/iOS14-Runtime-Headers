/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RLMRealm;


@protocol RLMThreadConfined <NSObject>
@property (nonatomic,readonly) RLMRealm * realm; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(RLMRealm *)realm;
-(BOOL)isInvalidated;

@end

