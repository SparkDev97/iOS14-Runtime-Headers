/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDepthStencilStateSPI <MTLDepthStencilState>
@property (readonly) BOOL readsDepth; 
@property (readonly) BOOL writesDepth; 
@property (readonly) BOOL readsStencil; 
@property (readonly) BOOL writesStencil; 
@required
-(BOOL)writesStencil;
-(BOOL)writesDepth;
-(BOOL)readsDepth;
-(BOOL)readsStencil;

@end

