/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBChainableModifierEventResponse.h>

@class NSString;

@interface SBChainableModifierTitledEventResponse : SBChainableModifierEventResponse {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)responseWithTitle:(id)arg1 ;
-(NSString *)title;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
