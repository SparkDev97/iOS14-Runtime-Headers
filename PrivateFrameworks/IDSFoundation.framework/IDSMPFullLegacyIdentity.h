/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPFullIdentityRef fullIdentity; 
+(BOOL)supportsSecureCoding;
+(SecMPFullIdentityRef)_createFullIdentityWithError:(id*)arg1 ;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
+(id)identityWithDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
+(id)identityWithError:(id*)arg1 ;
+(SecMPPublicIdentityRef)_copyPublicIdentityFromFullIdentity:(SecMPFullIdentityRef)arg1 error:(id*)arg2 ;
-(BOOL)updateIdentityToDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithFullIdentity:(SecMPFullIdentityRef)arg1 ;
-(id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(unsigned)dataProtectionClassWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
-(id)publicIdentityWithError:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(SecMPFullIdentityRef)fullIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)protectedHashOfMessageData:(id)arg1 error:(id*)arg2 ;
@end
