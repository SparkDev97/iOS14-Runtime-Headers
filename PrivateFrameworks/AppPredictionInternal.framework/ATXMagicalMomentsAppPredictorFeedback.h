/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXFeedbackSessionListenerDelegateProtocol.h>

@protocol ATXPETEventTracker2Protocol;
@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXFeedbackSessionListenerDelegateProtocol> {

	id<ATXPETEventTracker2Protocol> _tracker;

}
-(void)receiveClientModelResult:(id)arg1 ;
-(id)clientModelIds;
-(id)init;
-(id)initWithTracker:(id)arg1 ;
-(void)_handleShownProactiveSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIdToAnchorType:(id)arg3 ;
-(void)_handleEngagedProactiveSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIdToAnchorType:(id)arg3 ;
-(long long)_anchorTypeFromBundleIdToAnchorTypeMap:(id)arg1 bundleId:(id)arg2 ;
-(id)getCurrentABGroup;
-(void)logShownMMMetricsEntryForBundle:(id)arg1 consumerSubType:(unsigned char)arg2 anchorType:(long long)arg3 abGroup:(id)arg4 score:(double)arg5 ;
-(void)logEngagedMMMetricsEntryForBundle:(id)arg1 consumerSubType:(unsigned char)arg2 anchorType:(long long)arg3 abGroup:(id)arg4 score:(double)arg5 ;
@end
