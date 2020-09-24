/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUserAlias, NSString, CKDPIdentifier, CKDPProtectionInfo;

@interface CKDPUser : PBCodable <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _firstName;
	CKDPIdentifier* _identifier;
	NSString* _lastName;
	CKDPProtectionInfo* _protectionInfo;
	BOOL _isInNetwork;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                            //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                              //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsInNetwork; 
@property (assign,nonatomic) BOOL isInNetwork;                                 //@synthesize isInNetwork=_isInNetwork - In the implementation block
-(CKDPIdentifier *)identifier;
-(void)setFirstName:(NSString *)arg1 ;
-(CKDPUserAlias *)alias;
-(NSString *)lastName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLastName;
-(BOOL)hasIdentifier;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFirstName;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasProtectionInfo;
-(BOOL)hasAlias;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
@end
