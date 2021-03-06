/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoBecameActive : PBCodable <NSCopying> {

	BOOL _wantsConfirmation;

}

@property (assign,nonatomic) BOOL wantsConfirmation;              //@synthesize wantsConfirmation=_wantsConfirmation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setWantsConfirmation:(BOOL)arg1 ;
-(BOOL)wantsConfirmation;
@end

