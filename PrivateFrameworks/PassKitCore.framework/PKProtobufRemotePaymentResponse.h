/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKProtobufPayment, NSString;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying> {

	PKProtobufPayment* _payment;
	NSString* _remotePaymentRequestIdentifier;

}

@property (nonatomic,readonly) BOOL hasPayment; 
@property (nonatomic,retain) PKProtobufPayment * payment;                            //@synthesize payment=_payment - In the implementation block
@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
-(PKProtobufPayment *)payment;
-(void)setPayment:(PKProtobufPayment *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPayment;
-(id)description;
-(id)dictionaryRepresentation;
@end
