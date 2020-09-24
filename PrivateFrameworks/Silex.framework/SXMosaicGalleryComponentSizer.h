/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>
#import <libobjc.A.dylib/SXMosaicGalleryLayouterDataSource.h>

@class SXMosaicGalleryLayouter, NSString;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource> {

	SXMosaicGalleryLayouter* _layouter;

}

@property (nonatomic,retain) SXMosaicGalleryLayouter * layouter;              //@synthesize layouter=_layouter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXMosaicGalleryLayouter *)layouter;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(void)setLayouter:(SXMosaicGalleryLayouter *)arg1 ;
-(unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1 ;
-(CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2 ;
-(id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg1 ;
@end
