/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOStructuredAddress, NSData, NSMutableArray, GEOLatLng, GEOPDMapsIdentifier, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStructuredAddress* _addressHint;
	NSData* _addressObjectHint;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	NSString* _placeNameHint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressGeocodeAccuracyHint;
	int _placeTypeHint;
	int _resultProviderId;
	BOOL _supportCoordinatesOnlyRefinement;
	struct {
		unsigned has_muid : 1;
		unsigned has_addressGeocodeAccuracyHint : 1;
		unsigned has_placeTypeHint : 1;
		unsigned has_resultProviderId : 1;
		unsigned has_supportCoordinatesOnlyRefinement : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressHint : 1;
		unsigned read_addressObjectHint : 1;
		unsigned read_formattedAddressLineHints : 1;
		unsigned read_locationHint : 1;
		unsigned read_mapsId : 1;
		unsigned read_placeNameHint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint; 
@property (nonatomic,readonly) BOOL hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint; 
@property (nonatomic,readonly) BOOL hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints; 
@property (assign,nonatomic) BOOL hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint; 
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint; 
@property (nonatomic,readonly) BOOL hasAddressObjectHint; 
@property (nonatomic,retain) NSData * addressObjectHint; 
@property (assign,nonatomic) BOOL hasSupportCoordinatesOnlyRefinement; 
@property (assign,nonatomic) BOOL supportCoordinatesOnlyRefinement; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)formattedAddressLineHintType;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)hasPlaceNameHint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)supportCoordinatesOnlyRefinement;
-(GEOPDMapsIdentifier *)mapsId;
-(int)resultProviderId;
-(BOOL)hasAddressObjectHint;
-(void)setHasSupportCoordinatesOnlyRefinement:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMapsId;
-(GEOStructuredAddress *)addressHint;
-(void)setSupportCoordinatesOnlyRefinement:(BOOL)arg1 ;
-(void)setAddressObjectHint:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 placeNameHint:(id)arg2 locationHint:(GEOCoarseLocationLatLng)arg3 ;
-(void)setResultProviderId:(int)arg1 ;
-(BOOL)hasResultProviderId;
-(NSMutableArray *)formattedAddressLineHints;
-(int)placeTypeHint;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(void)clearFormattedAddressLineHints;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(BOOL)_hasRequiredFields;
-(int)StringAsPlaceTypeHint:(id)arg1 ;
-(NSData *)addressObjectHint;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)placeNameHint;
-(BOOL)hasSupportCoordinatesOnlyRefinement;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
-(GEOLatLng *)locationHint;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(int)addressGeocodeAccuracyHint;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)placeTypeHintAsString:(int)arg1 ;
-(BOOL)hasLocationHint;
-(void)setPlaceTypeHint:(int)arg1 ;
-(BOOL)hasAddressHint;
-(id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasPlaceTypeHint;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg1 ;
-(BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1 ;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
@end
