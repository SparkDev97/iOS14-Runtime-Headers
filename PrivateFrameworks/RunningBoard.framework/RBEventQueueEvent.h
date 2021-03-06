/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RBEventQueueEvent : NSObject {

	id _context;
	double _eventTime;
	/*^block*/id _action;

}

@property (nonatomic,retain) id context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double eventTime;              //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) id action;                       //@synthesize action=_action - In the implementation block
-(double)eventTime;
-(void)setEventTime:(double)arg1 ;
-(id)action;
-(void)setContext:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)context;
-(id)description;
@end

