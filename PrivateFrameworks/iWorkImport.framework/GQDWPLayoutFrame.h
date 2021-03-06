/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle, GQDWPLayoutStorage;

@interface GQDWPLayoutFrame : NSObject {

	char* mStyleRef;
	GQDSStyle* mStyle;
	GQDWPLayoutStorage* mStorage;
	unsigned mTextScale;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)resolveStyleRef;
-(void)dealloc;
-(id)layoutStyle;
-(id)storage;
-(unsigned)textScale;
-(BOOL)isBlank;
@end

