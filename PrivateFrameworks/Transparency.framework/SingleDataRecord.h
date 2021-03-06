/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface SingleDataRecord : GPBMessage

@property (assign,nonatomic) unsigned long long appVersion; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long markedForDeletionMs; 
@property (assign,nonatomic) unsigned long long deletionEscrowExpiryMs; 
@property (assign,nonatomic) unsigned long long addedMs; 
+(id)descriptor;
@end

