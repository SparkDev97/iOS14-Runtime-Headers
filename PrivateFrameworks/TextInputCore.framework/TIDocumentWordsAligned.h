/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(void)addToContextMap:(id)arg1 ;
-(void)pushWordToDocument:(id)arg1 ;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
-(id)wordsForContext:(id)arg1 ;
-(void)removeFromContextMap:(id)arg1 ;
-(unsigned long long)wordsCount;
-(id)init;
-(id)lastWord;
-(NSMutableDictionary *)leftContextToWordMap;
-(NSMutableArray *)inDocumentWordsStack;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
-(int)deleteWordsUptoContext:(id)arg1 ;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(id)description;
@end

