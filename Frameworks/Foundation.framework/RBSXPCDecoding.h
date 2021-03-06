/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSXPCDecoding <NSObject>
@required
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(BOOL)containsValueForKey:(id)arg1;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;
-(double)decodeDoubleForKey:(id)arg1;
-(long long)decodeInt64ForKey:(id)arg1;
-(BOOL)decodeBoolForKey:(id)arg1;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;
-(id)decodeStringForKey:(id)arg1;

@end

