/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKAppPrototypeIdentifier, NSDictionary;

@interface IKAppDataItem : NSObject <NSCopying> {

	NSString* _type;
	NSString* _identifier;
	IKAppPrototypeIdentifier* _prototypeIdentifier;
	NSDictionary* _dataDictionary;

}

@property (nonatomic,readonly) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKAppPrototypeIdentifier * prototypeIdentifier;              //@synthesize prototypeIdentifier=_prototypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dataDictionary;                          //@synthesize dataDictionary=_dataDictionary - In the implementation block
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)dataDictionary;
-(IKAppPrototypeIdentifier *)prototypeIdentifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4 ;
-(id)valueForPropertyPath:(id)arg1 ;
@end

