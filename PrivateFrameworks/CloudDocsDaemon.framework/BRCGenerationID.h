/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned _generationID;
	NSData* _signature;

}

@property (nonatomic,readonly) NSNumber * fsGenerationID; 
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * generationIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
+(id)newFromSqliteStatement:(sqlite3_stmtRef)arg1 atIndex:(int)arg2 ;
-(const char*)UTF8String;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)signature;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)fsGenerationID;
-(id)initWithRelativePath:(id)arg1 ;
-(id)initWithFSGenerationID:(unsigned)arg1 ;
-(BOOL)isEqualToFSGenerationID:(unsigned)arg1 ;
-(BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2 ;
-(NSString *)generationIDString;
-(id)initWithSignature:(const void*)arg1 length:(unsigned long long)arg2 ;
@end
