/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider;
@class CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger;

@interface CNReputationStore : NSObject {

	CNReputationCoreRecentsAdapter* _coreRecentsAdapter;
	CNReputationContactsAdapter* _contactsAdapter;
	CNReputationLogger* _logger;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNReputationCoreRecentsAdapter * coreRecentsAdapter;              //@synthesize coreRecentsAdapter=_coreRecentsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationContactsAdapter * contactsAdapter;                    //@synthesize contactsAdapter=_contactsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                        //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
-(CNReputationLogger *)logger;
-(id)makeFutureForHandle:(id)arg1 ;
-(id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4 ;
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
@end
