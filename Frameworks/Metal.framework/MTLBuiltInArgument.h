/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLBuiltInArgument : MTLArgumentInternal {

	unsigned short _builtInType;
	unsigned short _builtInDataType;

}
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(BOOL)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7 ;
-(unsigned long long)builtInDataType;
-(unsigned long long)builtInType;
@end

