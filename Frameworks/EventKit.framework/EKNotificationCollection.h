/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (nonatomic,readonly) EKSource * source; 
@property (nonatomic,copy) NSSet * notifications; 
+(Class)frozenClass;
+(BOOL)isWeakRelationship;
+(id)knownRelationshipMultiValueKeys;
-(void)setNotifications:(NSSet *)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)_setNotificationsCollectionFlag;
-(BOOL)_hasNotificationsCollectionFlag;
-(void)addNotification:(id)arg1 ;
-(void)removeNotification:(id)arg1 ;
-(void)setSource:(EKSource *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(NSSet *)notifications;
-(void)setExternalID:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(EKSource *)source;
-(BOOL)commit:(id*)arg1 ;
-(void)setExternalIDTag:(id)arg1 ;
@end
