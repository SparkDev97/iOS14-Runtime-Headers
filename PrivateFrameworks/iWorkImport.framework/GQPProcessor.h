/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class SFUZipArchive, SFUCryptoKey, SFUZipInflateInputStream, GQSDocument;

@interface GQPProcessor : NSObject {

	xmlTextReaderRef mReader;
	xmlParserInputBuffer* mParserInputBuffer;
	SFUZipArchive* mArchive;
	SFUCryptoKey* mCryptoKey;
	unsigned long long mTotalBytesToConsume;
	SFUZipInflateInputStream* mInputStream;
	stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > >* mStateStack;
	stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > >* mActionStack;
	GQSDocument* mDocumentState;
	QLPreviewRequestRef mOutputPreviewRequest;
	CFBundleRef mBundle;
	CGSize mThumbnailSize;
	BOOL mWrongFormat;
	unsigned char mIsProgressive;

}
+(void)initialize;
+(xmlTextReaderRef)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id*)arg4 zipInputStream:(id*)arg5 ;
+(xmlTextReaderRef)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 ;
-(id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(QLPreviewRequestRef)arg3 cryptoKey:(id)arg4 ;
-(id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(QLPreviewRequestRef)arg3 ;
-(id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(QLPreviewRequestRef)arg3 cryptoKey:(id)arg4 ;
-(void)dealloc;
-(void)pushInitialState;
-(id)archive;
-(CFBundleRef)bundle;
-(void)setBundle:(CFBundleRef)arg1 ;
-(BOOL)go;
-(stack<std::__1::shared_ptr<StateSpec>, std::__1::deque<std::__1::shared_ptr<StateSpec>, std::__1::allocator<std::__1::shared_ptr<StateSpec> > > >*)stateStack;
-(stack<std::__1::pair<const Action *, int>, std::__1::deque<std::__1::pair<const Action *, int>, std::__1::allocator<std::__1::pair<const Action *, int> > > >*)actionStack;
-(id)documentState;
-(id)cryptoKey;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setProgressiveMode:(unsigned char)arg1 ;
-(BOOL)isWrongFormat;
-(void)setWrongFormat:(BOOL)arg1 ;
@end
