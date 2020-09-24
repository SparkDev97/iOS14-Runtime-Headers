/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTimeProvider.h>

@protocol CNTimeProvider <NSObject>
@property (readonly) double timestamp; 
@required
-(double)timestamp;

@end


@class NSString;

@interface CNTimeProvider : NSObject <CNTimeProvider>

@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
-(double)timestamp;
@end
