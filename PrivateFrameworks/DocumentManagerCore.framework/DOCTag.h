/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerCore/DocumentManagerCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface DOCTag : NSObject <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	long long _labelIndex;
	long long _type;
	long long _itemCount;
	NSNumber* _sidebarVisible;
	NSNumber* _sidebarPinned;

}

@property (nonatomic,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long labelIndex;                   //@synthesize labelIndex=_labelIndex - In the implementation block
@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long itemCount;                    //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) NSNumber * sidebarVisible;              //@synthesize sidebarVisible=_sidebarVisible - In the implementation block
@property (nonatomic,readonly) NSNumber * sidebarPinned;               //@synthesize sidebarPinned=_sidebarPinned - In the implementation block
+(id)tagColorWithLabelIndex:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)displayColor;
-(BOOL)isEqualToTag:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)itemCount;
-(unsigned long long)hash;
-(id)description;
-(long long)labelIndex;
-(id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 ;
-(void)mergeWithTag:(id)arg1 options:(long long)arg2 ;
-(id)initWithICloudTagAttributes:(id)arg1 ;
-(id)iCloudTagAttributes;
-(id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 itemCount:(long long)arg4 sidebarVisible:(id)arg5 sidebarPinned:(id)arg6 ;
-(NSNumber *)sidebarVisible;
-(NSNumber *)sidebarPinned;
@end

