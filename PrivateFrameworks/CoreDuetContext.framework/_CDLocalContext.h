/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDLocalContext <_CDContext>
@required
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;

@end
