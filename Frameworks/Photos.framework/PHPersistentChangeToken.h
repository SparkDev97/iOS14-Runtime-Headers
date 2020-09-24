/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSPersistentHistoryToken* _persistentHistoryToken;
	int _version;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * persistentHistoryToken;              //@synthesize persistentHistoryToken=_persistentHistoryToken - In the implementation block
@property (nonatomic,readonly) int version;                                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)currentVersion;
+(id)tokenWithPersistentHistoryToken:(id)arg1 ;
+(id)currentTokenForContext:(id)arg1 ;
-(id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToPersistentChangeToken:(id)arg1 ;
-(NSPersistentHistoryToken *)persistentHistoryToken;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
