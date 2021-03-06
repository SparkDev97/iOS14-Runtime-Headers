/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)reverse;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)stringValue;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)initWithRange:(NSRange)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
@end

