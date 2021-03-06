/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CNUICoreApplicationAuthorizationItem : NSObject <NSCopying, NSSecureCoding> {

	NSData* _icon;
	NSString* _name;
	NSString* _bundleIdentifier;
	long long _deviceType;
	long long _authorization;
	CNUICoreApplicationAuthorizationItem* _snapshot;

}

@property (nonatomic,readonly) CNUICoreApplicationAuthorizationItem * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,readonly) NSData * icon;                                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long deviceType;                                         //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) long long authorization;                                        //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
-(void)setAuthorization:(long long)arg1 ;
-(long long)authorization;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceType;
-(NSString *)bundleIdentifier;
-(NSData *)icon;
-(CNUICoreApplicationAuthorizationItem *)snapshot;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasChanges;
-(NSString *)name;
-(id)description;
-(id)itemBySettingIcon:(id)arg1 ;
-(id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5 ;
-(id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5 shouldTakeSnapshot:(BOOL)arg6 ;
@end

