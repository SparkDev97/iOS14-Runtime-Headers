/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)containerWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(NSString *)identifier;
-(id)containerURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_containerURLWithError:(id*)arg1 ;
-(id)sanitizedIdentifier;
-(id)_appBundleContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_groupContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appDataContainerDirectoryAsSystemWithError:(id*)arg1 ;
-(id)_appBundleContainerDirectoryAsOwner;
-(id)_containerError:(unsigned long long)arg1 withFormat:(id)arg2 ;
-(id)_groupContainerDirectoryAsOwner;
-(id)_appDataContainerDirectoryAsOwner;
-(id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)containerURLAsOwner;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(long long)type;
-(long long)fetchStatus;
-(id)copyWithReplacementType:(long long)arg1 ;
-(id)copyWithReplacementIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)description;
@end
