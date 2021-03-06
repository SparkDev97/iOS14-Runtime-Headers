/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <NSCopying> {

	FCCKPDate* _creation;
	FCCKPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) FCCKPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) FCCKPDate * modification;              //@synthesize modification=_modification - In the implementation block
-(void)setCreation:(FCCKPDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCreation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)setModification:(FCCKPDate *)arg1 ;
-(FCCKPDate *)modification;
-(FCCKPDate *)creation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasModification;
-(id)description;
-(id)dictionaryRepresentation;
@end

