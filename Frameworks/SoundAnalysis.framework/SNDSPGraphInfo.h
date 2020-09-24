/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo {

	NSString* _path;
	NSString* _text;
	NSArray* _includePaths;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * includePaths;                    //@synthesize includePaths=_includePaths - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;              //@synthesize substitutions=_substitutions - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSDictionary *)substitutions;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
-(NSArray *)includePaths;
-(void)setIncludePaths:(NSArray *)arg1 ;
@end
