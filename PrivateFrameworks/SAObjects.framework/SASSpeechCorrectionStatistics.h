/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long alternativeSelectCount; 
@property (assign,nonatomic) long long characterChangeCount; 
@property (nonatomic,copy) NSString * correctionSource; 
@property (nonatomic,copy) NSString * correctionText; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechCorrectionStatistics;
+(id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1 ;
-(BOOL)siriCore_supportedByLocalSession;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(long long)alternativeSelectCount;
-(void)setAlternativeSelectCount:(long long)arg1 ;
-(long long)characterChangeCount;
-(void)setCharacterChangeCount:(long long)arg1 ;
-(NSString *)correctionSource;
-(void)setCorrectionSource:(NSString *)arg1 ;
-(NSString *)correctionText;
-(void)setCorrectionText:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
@end
