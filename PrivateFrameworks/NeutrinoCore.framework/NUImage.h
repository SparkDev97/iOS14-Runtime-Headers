/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;


@protocol NUImage <NSObject,NUImageCopying>
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
@required
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)format;
-(NUImageLayout *)layout;
-(SCD_Struct_NU7)size;
-(NURegion *)validRegion;

@end
