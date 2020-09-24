/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {

	NSString* _domain;
	SSKeyValueStore* _keyValueStore;

}
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)_checkOutStoreWithDomain:(id)arg1 ;
+(void)_popStoreWithDomain:(id)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllValues;
-(id)initWithDomain:(id)arg1 ;
-(id)_className;
-(void)getValueForKey:(id)arg1 usingFunction:(id)arg2 ;
-(void)setValueForKey:(id)arg1 value:(id)arg2 ;
@end
