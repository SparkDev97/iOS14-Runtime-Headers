/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _actionIndex;
	NSString* _key;
	NSString* _shortcutIdentifier;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutIdentifier; 
@property (nonatomic,retain) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIndex; 
@property (nonatomic,retain) NSString * actionIndex;                     //@synthesize actionIndex=_actionIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(void)setActionIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)shortcutIdentifier;
-(NSString *)actionIdentifier;
-(NSString *)actionIndex;
-(void)setActionIndex:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasActionIdentifier;
-(BOOL)hasShortcutIdentifier;
-(BOOL)hasActionIndex;
@end

