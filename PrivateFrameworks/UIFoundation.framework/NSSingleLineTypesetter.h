/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSATSTypesetter.h>

@class __NSImmutableTextStorage;

@interface NSSingleLineTypesetter : NSATSTypesetter {

	double _lineWidth;
	NSRange _currentBufferRange;
	unsigned short* _glyphs;
	long long* _props;
	unsigned long long* _charIndexes;
	struct {
		unsigned _usesScreenFonts : 1;
		unsigned _syncAlignmentToDirection : 1;
		unsigned _mirrorsTextAlignment : 1;
		unsigned _reserved : 29;
	}  _slFlags;
	__NSImmutableTextStorage* _textStorage;

}
+(void)initialize;
+(BOOL)_validateAttributes:(id)arg1 measuringOnly:(BOOL)arg2 ;
+(void)performWithSingleLineTypesetterContext:(/*^block*/id)arg1 ;
-(unsigned long long)layoutOptions;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(void)setBidiLevels:(const char*)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)substituteGlyphsInRange:(NSRange)arg1 withGlyphs:(unsigned*)arg2 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(id)substituteFontForFont:(id)arg1 ;
-(void)setLocation:(CGPoint)arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(NSRange)arg3 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(NSRange)arg2 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(id)attributedString;
-(void)insertGlyphs:(const unsigned*)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(BOOL)synchronizesAlignmentToDirection;
-(void)dealloc;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(id)createRenderingContextForCharacterRange:(NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 syncDirection:(BOOL)arg5 mirrorsTextAlignment:(BOOL)arg6 maximumWidth:(double)arg7 ;
-(id)_textContainerForAttachmentProtocol;
-(id)init;
-(void)setGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 ;
-(void)getLineFragmentRect:(CGRect*)arg1 usedRect:(CGRect*)arg2 remainingRect:(CGRect*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8 ;
-(id)createRenderingContextForCharacterRange:(NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 maximumWidth:(double)arg5 ;
-(BOOL)_usesScreenFonts;
-(BOOL)_mirrorsTextAlignment;
-(id)_textStorageForAttachmentProtocol;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
@end

