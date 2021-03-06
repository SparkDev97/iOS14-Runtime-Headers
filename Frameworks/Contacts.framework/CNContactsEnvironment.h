/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CNSchedulerProvider, SGSuggestionsServiceContactsProtocol, CNSiriIntelligenceSettingsProtocol, CNContactsLoggerProvider;
@class CNiOSAddressBook, NSURL, NSArray, CNiOSABPredicateRunner;

@interface CNContactsEnvironment : NSObject <NSCopying> {

	CNiOSAddressBook* _addressBook;
	id<CNSchedulerProvider> _schedulerProvider;
	NSURL* _baseURL;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	id<CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
	NSArray* _delegateInfos;
	CNiOSABPredicateRunner* _abPredicateRunner;
	id<CNContactsLoggerProvider> _loggerProvider;

}

@property (nonatomic,retain) NSArray * delegateInfos;                                                      //@synthesize delegateInfos=_delegateInfos - In the implementation block
@property (nonatomic,retain) CNiOSABPredicateRunner * abPredicateRunner;                                   //@synthesize abPredicateRunner=_abPredicateRunner - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNContactsLoggerProvider> loggerProvider;                                //@synthesize loggerProvider=_loggerProvider - In the implementation block
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,copy) NSURL * baseURL;                                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;                  //@synthesize suggestionsService=_suggestionsService - In the implementation block
@property (nonatomic,retain) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;              //@synthesize siriIntelligenceSettings=_siriIntelligenceSettings - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryStores; 
+(BOOL)supportsSecureCoding;
+(id)inMemoryURL;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(id)currentEnvironment;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)unitTestingEnvironment;
+(id)baseURLWithDataLocationName:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(CNiOSABPredicateRunner *)abPredicateRunner;
-(void)setDelegateInfos:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)makeCurrentEnvironment;
-(void)setAddressBook:(CNiOSAddressBook *)arg1 ;
-(id<CNSiriIntelligenceSettingsProtocol>)siriIntelligenceSettings;
-(void)setAbPredicateRunner:(CNiOSABPredicateRunner *)arg1 ;
-(NSArray *)delegateInfos;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(id<CNContactsLoggerProvider>)loggerProvider;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionsService;
-(BOOL)useInMemoryStores;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSiriIntelligenceSettings:(id<CNSiriIntelligenceSettingsProtocol>)arg1 ;
-(CNiOSAddressBook *)addressBook;
-(id)copyWithDelegateInfos:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
-(void)setSuggestionsService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
@end

