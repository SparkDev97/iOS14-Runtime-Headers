/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding> {

	unsigned long long _outgoingRecipientCount;
	unsigned long long _incomingSenderCount;
	unsigned long long _incomingRecipientCount;
	NSDate* _lastOutgoingRecipientDate;
	NSDate* _lastIncomingSenderDate;
	NSDate* _lastIncomingRecipientDate;
	NSDate* _firstOutgoingRecipientDate;
	NSDate* _firstIncomingSenderDate;
	NSDate* _firstIncomingRecipientDate;

}

@property (assign) unsigned long long outgoingRecipientCount;              //@synthesize outgoingRecipientCount=_outgoingRecipientCount - In the implementation block
@property (assign) unsigned long long incomingSenderCount;                 //@synthesize incomingSenderCount=_incomingSenderCount - In the implementation block
@property (assign) unsigned long long incomingRecipientCount;              //@synthesize incomingRecipientCount=_incomingRecipientCount - In the implementation block
@property (retain) NSDate * lastOutgoingRecipientDate;                     //@synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * lastIncomingSenderDate;                        //@synthesize lastIncomingSenderDate=_lastIncomingSenderDate - In the implementation block
@property (retain) NSDate * lastIncomingRecipientDate;                     //@synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate - In the implementation block
@property (retain) NSDate * firstOutgoingRecipientDate;                    //@synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * firstIncomingSenderDate;                       //@synthesize firstIncomingSenderDate=_firstIncomingSenderDate - In the implementation block
@property (retain) NSDate * firstIncomingRecipientDate;                    //@synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)interactionTimeInterval;
-(unsigned long long)incomingSenderCount;
-(void)setIncomingRecipientCount:(unsigned long long)arg1 ;
-(void)setLastIncomingRecipientDate:(NSDate *)arg1 ;
-(NSDate *)firstIncomingSenderDate;
-(NSDate *)lastOutgoingRecipientDate;
-(NSDate *)firstIncomingRecipientDate;
-(void)setLastOutgoingRecipientDate:(NSDate *)arg1 ;
-(NSDate *)lastIncomingRecipientDate;
-(NSDate *)firstOutgoingRecipientDate;
-(void)setFirstOutgoingRecipientDate:(NSDate *)arg1 ;
-(unsigned long long)incomingRecipientCount;
-(unsigned long long)outgoingRecipientCount;
-(id)lastDate:(id)arg1 updatedWith:(id)arg2 ;
-(unsigned long long)interactionCount;
-(void)setIncomingSenderCount:(unsigned long long)arg1 ;
-(double)incomingRecipientTimeInterval;
-(void)updateWithStatistics:(id)arg1 ;
-(NSDate *)lastIncomingSenderDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setOutgoingRecipientCount:(unsigned long long)arg1 ;
-(id)firstInteractionDate;
-(id)firstDate:(id)arg1 updatedWith:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)outgoingRecipientTimeInterval;
-(void)setFirstIncomingRecipientDate:(NSDate *)arg1 ;
-(void)setFirstIncomingSenderDate:(NSDate *)arg1 ;
-(id)lastInteractionDate;
-(id)description;
-(void)setLastIncomingSenderDate:(NSDate *)arg1 ;
-(double)incomingSenderTimeInterval;
@end

