/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {

	CFArrayRef _ctLines;
	NSMutableArray* _widths;
	CTFontRef _font;

}
+(id)textRunResponseWithFont:(CTFontRef)arg1 ;
+(id)textRunResponseByMergingResponses:(id)arg1 ;
-(void)dealloc;
-(id)widths;
-(CTFontRef)font;
-(CFArrayRef)ctLines;
@end

