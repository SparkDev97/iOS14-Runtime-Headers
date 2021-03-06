/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSLock, EMFInvertedIndex;

@interface EMFIndexManager : NSObject {

	NSBundle* _searchEngineBundle;
	NSLock* _defaultIndexLock;
	NSLock* _stemmedIndexLock;
	BOOL _triedLoadingDefaultIndex;
	BOOL _triedLoadingStemmedIndex;
	EMFInvertedIndex* _defaultIndex;
	EMFInvertedIndex* _stemmedIndex;

}

@property (nonatomic,copy) EMFInvertedIndex * defaultIndex;              //@synthesize defaultIndex=_defaultIndex - In the implementation block
@property (nonatomic,copy) EMFInvertedIndex * stemmedIndex;              //@synthesize stemmedIndex=_stemmedIndex - In the implementation block
-(id)initWithBundle:(id)arg1 ;
-(EMFInvertedIndex *)defaultIndex;
-(void)setDefaultIndex:(EMFInvertedIndex *)arg1 ;
-(EMFInvertedIndex *)stemmedIndex;
-(void)preheatIndexes;
-(void)setStemmedIndex:(EMFInvertedIndex *)arg1 ;
@end

