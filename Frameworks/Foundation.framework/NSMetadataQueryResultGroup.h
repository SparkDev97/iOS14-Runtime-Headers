/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {

	id _private[9];
	unsigned long long _private2[1];
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (copy,readonly) NSArray * subgroups; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
-(NSArray *)results;
-(NSArray *)subgroups;
-(void)_addResult:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_zapResultArray;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4 ;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(id)value;
-(unsigned long long)resultCount;
-(NSString *)attribute;
@end

