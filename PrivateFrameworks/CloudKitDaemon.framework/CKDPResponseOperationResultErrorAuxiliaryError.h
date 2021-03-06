/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _userInfos;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;              //@synthesize userInfos=_userInfos - In the implementation block
+(Class)userInfoType;
-(int)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)userInfos;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)domain;
-(void)addUserInfo:(id)arg1 ;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasDomain;
-(void)setCode:(int)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

