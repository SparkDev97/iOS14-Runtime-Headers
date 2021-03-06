/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSHistoryVisitIdentifier, NSString;

@interface WBSHistoryServicePendingVisit : NSObject {

	BOOL _wasHTTPNonGet;
	BOOL _loadSuccessful;
	WBSHistoryVisitIdentifier* _visitIdentifier;
	unsigned long long _operation;
	WBSHistoryVisitIdentifier* _sourceVisitIdentifier;
	NSString* _title;
	long long _origin;
	unsigned long long _attributes;

}

@property (nonatomic,readonly) WBSHistoryVisitIdentifier * visitIdentifier;                  //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) WBSHistoryVisitIdentifier * sourceVisitIdentifier;              //@synthesize sourceVisitIdentifier=_sourceVisitIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL wasHTTPNonGet;                                             //@synthesize wasHTTPNonGet=_wasHTTPNonGet - In the implementation block
@property (assign,nonatomic) BOOL loadSuccessful;                                            //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,nonatomic) long long origin;                                               //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,readonly) double visitTime; 
@property (nonatomic,readonly) unsigned long long score; 
-(void)setOrigin:(long long)arg1 ;
-(NSString *)urlString;
-(void)setOperation:(unsigned long long)arg1 ;
-(unsigned long long)attributes;
-(unsigned long long)score;
-(BOOL)wasHTTPNonGet;
-(NSString *)title;
-(unsigned long long)operation;
-(id)initWithWithVisitIdentifier:(id)arg1 ;
-(WBSHistoryVisitIdentifier *)sourceVisitIdentifier;
-(void)setSourceVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(void)setWasHTTPNonGet:(BOOL)arg1 ;
-(long long)origin;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(WBSHistoryVisitIdentifier *)visitIdentifier;
-(BOOL)loadSuccessful;
-(void)setAttributes:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)visitTime;
@end

