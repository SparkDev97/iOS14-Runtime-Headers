/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IMMockItemInfo : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL outgoing;               //@synthesize outgoing=_outgoing - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultMockInfoArray;
+(id)encodedMockItemInfoArray:(id)arg1 ;
+(id)decodedMockItemInfoArray:(id)arg1 ;
-(BOOL)outgoing;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2 ;
@end

