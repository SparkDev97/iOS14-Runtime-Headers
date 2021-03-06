/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSData;

@interface PKDiff : NSObject <NSSecureCoding> {

	NSMutableArray* _hunks;
	NSString* _passUniqueID;
	NSData* _passManifestHash;

}

@property (nonatomic,copy) NSString * passUniqueID;                //@synthesize passUniqueID=_passUniqueID - In the implementation block
@property (nonatomic,copy) NSData * passManifestHash;              //@synthesize passManifestHash=_passManifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)anyKey;
-(NSString *)passUniqueID;
-(BOOL)getHunkForKey:(id)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 ;
-(void)removeHunkForKey:(id)arg1 ;
-(void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(void)enumerateHunks:(/*^block*/id)arg1 ;
-(unsigned long long)_hunkIndexForKey:(id)arg1 ;
-(BOOL)isEqualToDiff:(id)arg1 ;
-(void)key:(id*)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 forHunkAtIndex:(long long)arg5 ;
-(void)addHunksFromDiff:(id)arg1 ;
-(void)setPassUniqueID:(NSString *)arg1 ;
-(NSData *)passManifestHash;
-(void)setPassManifestHash:(NSData *)arg1 ;
-(id)init;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)hunkCount;
-(unsigned long long)hash;
-(id)description;
@end

