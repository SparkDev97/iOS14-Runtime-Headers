/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITextRange.h>

@interface TSDTextRange : UITextRange {

	NSRange _range;
	BOOL _eolAffinity;
	float _preferredStartPosition;
	float _preferredEndPosition;

}

@property (assign,nonatomic) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) BOOL isAtEndOfLine;                          //@synthesize eolAffinity=_eolAffinity - In the implementation block
@property (nonatomic,readonly) float preferredStartPosition;              //@synthesize preferredStartPosition=_preferredStartPosition - In the implementation block
@property (nonatomic,readonly) float preferredEndPosition;                //@synthesize preferredEndPosition=_preferredEndPosition - In the implementation block
+(id)textRangeWithRange:(NSRange)arg1 ;
+(id)textRangeWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(NSRange)range;
-(id)end;
-(float)preferredEndPosition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsAtEndOfLine:(BOOL)arg1 ;
-(id)initWithRange:(NSRange)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4 ;
-(float)preferredStartPosition;
-(id)start;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isAtEndOfLine;
@end

