/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, TTArray, CRDictionary, NSString, NSUUID;

@interface CRArray : NSObject <CRCoding, CRUndoDelegate, CRDataType> {

	BOOL _moveClock;
	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	TTArray* _array;
	CRDictionary* _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TTArray * array;                                        //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) CRDictionary * contents;                                //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) BOOL moveClock;                                         //@synthesize moveClock=_moveClock - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;                           //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setContents:(CRDictionary *)arg1 ;
-(id)_addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(CRDictionary *)contents;
-(void)addObject:(id)arg1 ;
-(NSUUID *)replicaUUID;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(void)setMoveClock:(BOOL)arg1 ;
-(id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3 ;
-(id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(BOOL)arg4 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(BOOL)arg2 ;
-(unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2 ;
-(TTArray *)array;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 array:(Array*)arg2 ;
-(id)initWithCRCoder:(id)arg1 array:(const Array*)arg2 ;
-(id)init;
-(id)initWithCRCoder:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setArray:(TTArray *)arg1 ;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(NSObject*<CRUndoDelegate>)delegate;
-(unsigned long long)hash;
-(CRDocument *)document;
-(void)mergeWith:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)moveClock;
-(id)tombstone;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSString *)description;
@end
