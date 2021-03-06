/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/CATTransportDelegate.h>

@class CATTransport, NSString;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate> {

	CATTransport* _transport;

}

@property (nonatomic,readonly) CATTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CATTransport *)transport;
-(id)initWithTransport:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)main;
@end

