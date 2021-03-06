/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _MSTTLReference : NSObject {

	id _value;
	double _ttl;
	NSDate* _lastSet;

}

@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double ttl;                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSDate * lastSet;              //@synthesize lastSet=_lastSet - In the implementation block
-(void)setTtl:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithTTL:(double)arg1 ;
-(NSDate *)lastSet;
-(double)ttl;
-(void)setLastSet:(NSDate *)arg1 ;
-(id)getValueWithGenerator:(/*^block*/id)arg1 ;
@end

