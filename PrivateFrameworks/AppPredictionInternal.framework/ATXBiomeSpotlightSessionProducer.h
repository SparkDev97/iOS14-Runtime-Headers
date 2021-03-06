/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXBiomeSessionProducerProtocol.h>

@class ATXPartialIntentFeedbackManager, ATXFeedbackSession, ATXSpotlightSessionMetadata;

@interface ATXBiomeSpotlightSessionProducer : NSObject <ATXBiomeSessionProducerProtocol> {

	ATXPartialIntentFeedbackManager* _partialIntentFeedbackManager;
	ATXFeedbackSession* _appSession;
	ATXFeedbackSession* _actionSession;
	ATXSpotlightSessionMetadata* _sessionMetadata;

}

@property (nonatomic,retain) ATXPartialIntentFeedbackManager * partialIntentFeedbackManager;              //@synthesize partialIntentFeedbackManager=_partialIntentFeedbackManager - In the implementation block
@property (nonatomic,retain) ATXFeedbackSession * appSession;                                             //@synthesize appSession=_appSession - In the implementation block
@property (nonatomic,retain) ATXFeedbackSession * actionSession;                                          //@synthesize actionSession=_actionSession - In the implementation block
@property (nonatomic,retain) ATXSpotlightSessionMetadata * sessionMetadata;                               //@synthesize sessionMetadata=_sessionMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(ATXSpotlightSessionMetadata *)sessionMetadata;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSessionMetadata:(ATXSpotlightSessionMetadata *)arg1 ;
-(void)processInteractionContextEvent:(id)arg1 withFeedbackRouter:(id)arg2 ;
-(id)initWithAppSession:(id)arg1 actionSession:(id)arg2 sessionMetadata:(id)arg3 partialIntentFeedbackManager:(id)arg4 ;
-(id)_stringArrayToUUIDArray:(id)arg1 ;
-(id)_proactiveSuggestionWithUUID:(id)arg1 blendingCacheUUID:(id)arg2 context:(id)arg3 ;
-(BOOL)isEqualToATXBiomeSpotlightSessionProducer:(id)arg1 ;
-(ATXPartialIntentFeedbackManager *)partialIntentFeedbackManager;
-(void)setPartialIntentFeedbackManager:(ATXPartialIntentFeedbackManager *)arg1 ;
-(ATXFeedbackSession *)appSession;
-(void)setAppSession:(ATXFeedbackSession *)arg1 ;
-(ATXFeedbackSession *)actionSession;
-(void)setActionSession:(ATXFeedbackSession *)arg1 ;
@end

