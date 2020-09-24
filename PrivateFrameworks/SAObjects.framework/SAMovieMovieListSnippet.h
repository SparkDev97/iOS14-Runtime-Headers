/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAMovieMovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movies; 
@property (assign,nonatomic) BOOL shouldShowRottenTomatoesRating; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)movies;
-(id)groupIdentifier;
-(BOOL)shouldShowRottenTomatoesRating;
-(void)setShouldShowRottenTomatoesRating:(BOOL)arg1 ;
-(void)setMovies:(NSArray *)arg1 ;
@end
