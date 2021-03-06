/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLBuild : PBCodable <NSCopying> {

	unsigned long long _identifier;
	unsigned _dataFormatVersion;
	unsigned _dataOutputVersion;
	unsigned _routingKey;
	struct {
		unsigned has_identifier : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_dataOutputVersion : 1;
		unsigned has_routingKey : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (assign,nonatomic) BOOL hasDataOutputVersion; 
@property (assign,nonatomic) unsigned dataOutputVersion; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
@property (assign,nonatomic) BOOL hasRoutingKey; 
@property (assign,nonatomic) unsigned routingKey; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setDataFormatVersion:(unsigned)arg1 ;
-(unsigned)routingKey;
-(void)setRoutingKey:(unsigned)arg1 ;
-(void)setHasRoutingKey:(BOOL)arg1 ;
-(BOOL)hasRoutingKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasDataOutputVersion:(BOOL)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)dataFormatVersion;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)dataOutputVersion;
-(BOOL)hasDataOutputVersion;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasDataFormatVersion;
-(void)setDataOutputVersion:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

