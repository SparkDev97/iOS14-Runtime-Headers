/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMSavedSearchScope;

@interface EDAMSavedSearch : FATObject {

	NSString* _guid;
	NSString* _name;
	NSString* _query;
	NSNumber* _format;
	NSNumber* _updateSequenceNum;
	EDAMSavedSearchScope* _scope;

}

@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSNumber * format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) EDAMSavedSearchScope * scope;              //@synthesize scope=_scope - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(void)setScope:(EDAMSavedSearchScope *)arg1 ;
-(void)setFormat:(NSNumber *)arg1 ;
-(NSNumber *)format;
-(EDAMSavedSearchScope *)scope;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end
