/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEORPPlaceRequestResponse;

@interface GEORPSearchFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _autocompleteSuggestionLists;
	GEORPPlaceRequestResponse* _requestContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_autocompleteSuggestionLists : 1;
		unsigned read_requestContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * autocompleteSuggestionLists; 
@property (nonatomic,readonly) BOOL hasRequestContext; 
@property (nonatomic,retain) GEORPPlaceRequestResponse * requestContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)autocompleteSuggestionListType;
+(BOOL)isValid:(id)arg1 ;
-(GEORPPlaceRequestResponse *)requestContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(void)setRequestContext:(GEORPPlaceRequestResponse *)arg1 ;
-(void)addAutocompleteSuggestionList:(id)arg1 ;
-(unsigned long long)autocompleteSuggestionListsCount;
-(void)clearAutocompleteSuggestionLists;
-(BOOL)hasRequestContext;
-(id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)autocompleteSuggestionLists;
-(void)setAutocompleteSuggestionLists:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

