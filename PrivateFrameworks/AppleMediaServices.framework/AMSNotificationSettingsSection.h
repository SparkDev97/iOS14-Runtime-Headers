/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface AMSNotificationSettingsSection : NSObject {

	NSString* _footer;
	NSString* _identifier;
	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
-(NSArray *)items;
-(NSString *)identifier;
-(NSString *)footer;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 footer:(id)arg2 items:(id)arg3 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
@end
