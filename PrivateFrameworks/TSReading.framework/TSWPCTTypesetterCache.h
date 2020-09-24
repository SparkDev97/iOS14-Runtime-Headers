/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)dealloc;
-(void)clearCache;
-(void)removeTypesetterForParagraphIndex:(unsigned long long)arg1 ;
-(void)p_limitCacheSize:(unsigned long long)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
@end
