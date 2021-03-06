/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalTools/MetalTools-Structs.h>
@class NSString;

@interface MTLDebugBufferMarker : NSObject {

	NSString* _label;
	NSRange _range;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) NSRange range;               //@synthesize range=_range - In the implementation block
-(NSRange)range;
-(void)dealloc;
-(void)setRange:(NSRange)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

