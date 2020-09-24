/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFVerticalLayoutCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, NSDictionary, NSData;


@protocol SFVerticalLayoutCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (nonatomic,retain) SFRichText * title; 
@property (nonatomic,retain) SFRichText * footnote; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(SFRichText *)title;
-(SFColor *)backgroundColor;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSString *)type;
-(void)setThumbnail:(id)arg1;
-(void)setFootnote:(id)arg1;
-(void)setType:(id)arg1;
-(SFImage *)thumbnail;
-(SFRichText *)footnote;
-(NSArray *)punchoutOptions;
-(void)setTitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFVerticalLayoutCardSection : SFCardSection <SFVerticalLayoutCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _thumbnail;
	SFRichText* _title;
	SFRichText* _footnote;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(Class)_searchUIHorizontallyScrollingButtonControllerClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(SFRichText *)title;
-(SFColor *)backgroundColor;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSString *)type;
-(void)setThumbnail:(SFImage *)arg1 ;
-(void)setFootnote:(SFRichText *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(SFImage *)thumbnail;
-(void)encodeWithCoder:(id)arg1 ;
-(SFRichText *)footnote;
-(NSArray *)punchoutOptions;
-(void)setTitle:(SFRichText *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
@end
