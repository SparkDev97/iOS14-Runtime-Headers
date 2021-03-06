/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFParameterState <NSCopying,WFVariableSerialization>
@optional
+(Class)processingValueClass;
+(id)processingValueClasses;
-(id)initWithVariable:(id)arg1;
-(id)legacySerializedRepresentation;

@required
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)containedVariables;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3;

@end

