/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFPagePrivate, PDFDocument, NSString, NSArray, NSAttributedString, NSData;

@interface PDFPage : NSObject <NSCopying> {

	PDFPagePrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFDocument * document; 
@property (nonatomic,readonly) CGPDFPageRef pageRef; 
@property (nonatomic,readonly) NSString * label; 
@property (assign,nonatomic) long long rotation; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (assign,nonatomic) BOOL displaysAnnotations; 
@property (nonatomic,readonly) unsigned long long numberOfCharacters; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)isNativeRotationDrawingEnabledForThisThread;
+(void)setNativeRotationDrawingEnabledForThisThread:(BOOL)arg1 ;
+(BOOL)shouldHideAnnotationsForThisThread;
+(void)setShouldHideAnnotationsForThisThread:(BOOL)arg1 ;
+(BOOL)isExcludingAKAnnotationRenderingForThisThread;
+(void)setExcludingAKAnnotationRenderingForThisThread:(BOOL)arg1 ;
+(BOOL)_getBooleanProperty:(id)arg1 forKey:(id)arg2 withDefault:(BOOL)arg3 ;
+(id)fontWithPDFFont:(CGPDFFontRef)arg1 size:(float)arg2 ;
-(void)setRotation:(long long)arg1 ;
-(NSString *)string;
-(NSData *)dataRepresentation;
-(NSAttributedString *)attributedString;
-(id)initWithImage:(id)arg1 ;
-(NSArray *)annotations;
-(id)debugQuickLookObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)rotation;
-(BOOL)columnAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)view;
-(void)purgeAll;
-(void)setView:(id)arg1 ;
-(id)init;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)_commonInit;
-(id)allAnnotations;
-(CGPDFPageRef)pageRef;
-(NSString *)label;
-(PDFDocument *)document;
-(void)addAnnotation:(id)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(id)description;
-(id)thumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 ;
-(CGRect)boundsForBox:(long long)arg1 ;
-(unsigned long long)numberOfCharacters;
-(CGDisplayListRef)displayList;
-(unsigned long long)_documentIndex;
-(CGPDFLayoutRef)pageLayout;
-(void)addAnnotation:(id)arg1 withUndo:(BOOL)arg2 ;
-(void)removeAnnotation:(id)arg1 withUndo:(BOOL)arg2 ;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 type:(int)arg3 ;
-(id)selectionForRange:(NSRange)arg1 ;
-(void)changedAnnotation:(id)arg1 ;
-(void)postAnnotationsChangedNotification;
-(id)akPageAdaptor;
-(BOOL)pathIntersectsWithRedactionPath:(CGPathRef)arg1 ;
-(BOOL)rectIntersectsWithRedactionPath:(CGRect)arg1 ;
-(CGAffineTransform)getDrawingTransformForBox:(long long)arg1 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(void)transformContext:(CGContextRef)arg1 forBox:(long long)arg2 ;
-(void)addAnnotationFormField:(id)arg1 ;
-(id)selectionForAll;
-(id)selectionForCharacterAtPoint:(CGPoint)arg1 ;
-(id)annotationAtPoint:(CGPoint)arg1 ;
-(id)selectionForLineAtPoint:(CGPoint)arg1 ;
-(id)annotationWithUUID:(id)arg1 ;
-(id)annotationsForFieldName:(id)arg1 ;
-(void)insertAnnotation:(id)arg1 atIndex:(long long)arg2 ;
-(void)drawWithBox:(long long)arg1 toContext:(CGContextRef)arg2 ;
-(CGAffineTransform)transformForBox:(long long)arg1 ;
-(CGColorRef)pageBackgroundColorHint;
-(BOOL)displaysAnnotations;
-(BOOL)isBookmarked;
-(void)fetchAnnotationsWithCompletion:(/*^block*/id)arg1 deliveredOnQueue:(id)arg2 ;
-(id)imageOfSize:(CGSize)arg1 forBox:(long long)arg2 withOptions:(id)arg3 ;
-(void)setDisplaysAnnotations:(BOOL)arg1 ;
-(id)scannedAnnotationAtPoint:(CGPoint)arg1 ;
-(void)setupAKPageAdaptorIfNecessary;
-(CFDictionaryRef)gcCreateBoxDictionary;
-(const CGPathRef)createRedactionPath;
-(void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(id)annotationChanges;
-(void)clearAnnotationChanges;
-(BOOL)setPageRef:(CGPDFPageRef)arg1 ;
-(void)createDisplayList;
-(id)initWithPageRef:(CGPDFPageRef)arg1 ;
-(id)initWithRect:(CGRect)arg1 andRotation:(long long)arg2 ;
-(void)setBookmarked:(BOOL)arg1 updateBookmarks:(BOOL)arg2 ;
-(BOOL)akDidSetupRealPageModelController;
-(void)setAKDidSetupRealPageModelController:(BOOL)arg1 ;
-(CGPDFPageRef)createPageRefFromImage;
-(id)changedAnnotations;
-(void)resetChangedAnnotations;
-(id)selectionFromPointToBottom:(CGPoint)arg1 type:(int)arg2 ;
-(id)selectionFromTopToPoint:(CGPoint)arg1 type:(int)arg2 ;
-(id)scannedAnnotations;
-(BOOL)colorWidgetBackgrounds;
-(BOOL)didChangeBounds;
-(void)setBounds:(CGRect)arg1 forBox:(long long)arg2 ;
-(void)postPageDidRotateNotification;
-(void)postPageDidChangeBoundsNotification;
-(void)lazilyLoadAnnotations;
-(void)getAnnotations;
-(void)_addWidgetAnnotationToLookupDictionary:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 atIndex:(long long)arg2 ;
-(void)_removeWidgetAnnotationFromLookupDictionary:(id)arg1 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 isThumbnail:(BOOL)arg3 ;
-(void)_drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withRotation:(BOOL)arg3 isThumbnail:(BOOL)arg4 withAnnotations:(BOOL)arg5 withBookmark:(BOOL)arg6 withDelegate:(id)arg7 ;
-(void)_ensureDisplayListIsCreated;
-(void)_drawPageImageInContext:(CGContextRef)arg1 withRotation:(BOOL)arg2 withDisplayBox:(long long)arg3 ;
-(void)_drawPageCGImageInContext:(CGContextRef)arg1 withDisplayBox:(long long)arg2 ;
-(void)_drawAnnotationsWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(void)_drawBookmarkInContext:(CGContextRef)arg1 ;
-(id)thumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 withBookmark:(BOOL)arg3 withAnnotations:(BOOL)arg4 ;
-(CGImageRef)_newCGImageWithBox:(long long)arg1 bitmapSize:(CGSize)arg2 scale:(double)arg3 offset:(CGPoint)arg4 backgroundColor:(id)arg5 withRotation:(BOOL)arg6 withAntialiasing:(BOOL)arg7 withAnnotations:(BOOL)arg8 withBookmark:(BOOL)arg9 withDelegate:(id)arg10 ;
-(id)selectionForRangeCommon:(NSRange)arg1 isCodeRange:(BOOL)arg2 ;
-(id)_createAttributedString;
-(id)rvItemAtPoint:(CGPoint)arg1 ;
-(BOOL)_writeToConsumer:(CGDataConsumerRef)arg1 ;
-(void)_addBox:(int)arg1 toDictionary:(CFDictionaryRef)arg2 offset:(CGPoint)arg3 ;
-(BOOL)hasCropBox;
-(BOOL)hasBleedBox;
-(BOOL)hasTrimBox;
-(BOOL)hasArtBox;
-(void)_scanData:(id)arg1 ;
-(void)_buildPageLayout;
-(void)fetchPageLayoutWithCompletion:(/*^block*/id)arg1 deliveredOnQueue:(id)arg2 ;
-(CGPDFLayoutRef)pageLayoutIfAvail;
-(BOOL)disableUndoManagerForAK;
-(void)enableUndoManagerForAK:(BOOL)arg1 ;
-(void)_postAnnotationsChangedNotificationCoalesced;
-(void)addScannedAnnotation:(id)arg1 ;
-(id)pdfScannerResultAtPoint:(CGPoint)arg1 onPageLayer:(id)arg2 ;
-(id)pdfScannerResultAtPoint:(CGPoint)arg1 ;
-(id)rvItemWithPDFScannerResult:(id)arg1 ;
-(id)_rvItemAtPoint:(CGPoint)arg1 ;
-(id)annotationsIfAvail;
-(id)annotationAtRect:(CGRect)arg1 ;
-(BOOL)hasPopups;
-(id)thumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 withBookmark:(BOOL)arg3 ;
-(id)selectionForCodeRange:(NSRange)arg1 ;
-(CGRect)columnFrameAtPoint:(CGPoint)arg1 ;
-(CGRect)characterBoundsAtIndex:(long long)arg1 ;
-(long long)characterIndexAtPoint:(CGPoint)arg1 ;
-(id)selectionForRect:(CGRect)arg1 ;
-(id)selectionForWordAtPoint:(CGPoint)arg1 ;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)setBookmarked:(BOOL)arg1 ;
-(void)setColorWidgetBackgrounds:(BOOL)arg1 ;
-(void)addRedactionFromRectangularSelectionWithRect:(CGRect)arg1 ;
-(BOOL)columnAtPointIfAvailable:(CGPoint)arg1 ;
-(void)setDisplaysMarkupAnnotations:(BOOL)arg1 ;
-(void)printActivePageAnnotations;
-(id)ddScannerResults;
-(id)rvItemAtPoint:(CGPoint)arg1 onPageLayer:(id)arg2 ;
@end
