/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSUUID, NSString, NSArray, NSData, NSDate;

@interface ATXClientModelCacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {

	double _absoluteCacheCreationDate;
	NSUUID* _uuid;
	NSString* _clientModelId;
	NSArray* _suggestions;
	NSData* _feedbackMetadata;

}

@property (nonatomic,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * clientModelId;                //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSData * feedbackMetadata;                 //@synthesize feedbackMetadata=_feedbackMetadata - In the implementation block
@property (nonatomic,readonly) NSDate * cacheCreationDate; 
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(id)serialize;
-(id)json;
-(unsigned)dataVersion;
-(NSArray *)suggestions;
-(NSString *)clientModelId;
-(id)encodeAsProto;
-(id)jsonRawData;
-(NSData *)feedbackMetadata;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 ;
-(void)setFeedbackMetadata:(NSData *)arg1 ;
-(NSDate *)cacheCreationDate;
-(id)initWithClientModelId:(id)arg1 suggestions:(id)arg2 feedbackMetadata:(id)arg3 uuid:(id)arg4 cacheCreationDate:(id)arg5 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(BOOL)isEqualToATXClientModelCacheUpdate:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_clientModelFromClientModelId:(id)arg1 suggestions:(id)arg2 ;
@end
