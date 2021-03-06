/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned long long _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned long long errorCount;              //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2 ;
-(id)initWithInvocation:(id)arg1 ;
-(NSInvocation *)invocation;
-(void)setErrorCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)errorCount;
@end

