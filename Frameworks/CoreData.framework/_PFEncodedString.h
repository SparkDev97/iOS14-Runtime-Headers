/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFAbstractString.h>

@interface _PFEncodedString : _PFAbstractString {

	int _cd_rc;
	unsigned _length;
	id _sourceData;

}
-(BOOL)_isCString;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)_tryRetain;
-(void)getCharacters:(unsigned short*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(unsigned long long)length;
-(id)copy;
-(id)init;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)getCString:(char*)arg1 ;
-(BOOL)_isDeallocating;
-(unsigned long long)hash;
-(id)retain;
-(unsigned long long)cStringLength;
@end

