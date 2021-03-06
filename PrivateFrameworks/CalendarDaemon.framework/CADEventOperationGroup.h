/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADEventInterface.h>

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(void)monitorLocationAuthorizationStatusChanges:(unsigned long long)arg1 ;
-(void)CADDatabaseGetCountOfNotifiableEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(/*^block*/id)arg1 ;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)arg1 withReply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetDefaultLocalCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetOrCreateBirthdayCalendar:(/*^block*/id)arg1 ;
-(void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
-(void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void*)_chooseRealSubscribedCalendarStoreFromStoresAndDeleteTheOtherOnes:(CFArrayRef)arg1 withDatabase:(CalDatabase*)arg2 ;
-(void)CADDatabaseGetAllEventsWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)arg1 ;
-(void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 validator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 ;
-(void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetTTLLocationAuthorizationStatus:(/*^block*/id)arg1 ;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1 delegateSource:(id)arg2 ;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(/*^block*/id)arg1 ;
-(void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(/*^block*/id)arg1 ;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 prefersForwardSearch:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1 ;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
@end

