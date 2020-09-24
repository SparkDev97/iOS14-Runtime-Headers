/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, NSNumber, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,copy) NSNumber * perceivableStartTimeInSeconds; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)_af_mediaItemWithMRContentItemRef:(void*)arg1 ;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)mediaItem;
-(NSString *)artist;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)sortArtist;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSString *)genre;
-(SAMPReleaseInfo *)releaseInfo;
-(NSString *)sortAlbum;
-(NSNumber *)perceivableStartTimeInSeconds;
-(void)setPerceivableStartTimeInSeconds:(NSNumber *)arg1 ;
-(void)setSortAlbum:(NSString *)arg1 ;
-(SACalendar *)datePurchased;
-(NSString *)album;
@end
