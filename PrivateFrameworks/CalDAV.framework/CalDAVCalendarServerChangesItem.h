/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {

	NSMutableSet* _changedProperties;

}

@property (nonatomic,retain) NSMutableSet * changedProperties;              //@synthesize changedProperties=_changedProperties - In the implementation block
-(NSMutableSet *)changedProperties;
-(void)addChangedProperty:(id)arg1 ;
-(id)init;
-(void)setChangedProperties:(NSMutableSet *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

