/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCCaptionsToken : NSObject {

	NSString* _text;
	double _confidence;
	BOOL _hasSpaceAfter;

}

@property (nonatomic,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasSpaceAfter;              //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
-(BOOL)hasSpaceAfter;
-(double)confidence;
-(NSString *)text;
-(void)dealloc;
-(id)description;
-(id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
@end
