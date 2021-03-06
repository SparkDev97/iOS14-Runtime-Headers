/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SGContact, SGContactMatch, NSString;

@interface CNContactSuggestionMatch : NSObject {

	SGContact* _contact;
	SGContactMatch* _contactMatch;
	NSString* _mainStoreLinkedIdentifier;

}

@property (nonatomic,retain) SGContactMatch * contactMatch;                     //@synthesize contactMatch=_contactMatch - In the implementation block
@property (nonatomic,retain) SGContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * mainStoreLinkedIdentifier;              //@synthesize mainStoreLinkedIdentifier=_mainStoreLinkedIdentifier - In the implementation block
+(id)suggestionFromContactMatch:(id)arg1 ;
+(void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2 ;
-(SGContact *)contact;
-(void)setContactMatch:(SGContactMatch *)arg1 ;
-(void)setMainStoreLinkedIdentifier:(NSString *)arg1 ;
-(NSString *)mainStoreLinkedIdentifier;
-(SGContactMatch *)contactMatch;
-(void)setContact:(SGContact *)arg1 ;
@end

