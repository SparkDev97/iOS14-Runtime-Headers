/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, MNNavigationClientProxy, MNDirectionsRequestDetails, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData;

@interface MNNavigationServiceDirectionsRequestTicket : NSObject {

	NSUUID* _requestIdentifier;
	MNNavigationClientProxy* _proxy;
	MNDirectionsRequestDetails* _request;
	GEODirectionsRequest* _directionsRequest;
	GEODirectionsResponse* _directionsResponse;
	MNTraceRecordingData* _traceRecordingData;

}

@property (nonatomic,readonly) GEODirectionsRequest * directionsRequest;                //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) MNTraceRecordingData * traceRecordingData;               //@synthesize traceRecordingData=_traceRecordingData - In the implementation block
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(GEODirectionsRequest *)directionsRequest;
-(GEODirectionsResponse *)directionsResponse;
-(MNTraceRecordingData *)traceRecordingData;
-(id)initWithProxy:(id)arg1 request:(id)arg2 ;
@end
