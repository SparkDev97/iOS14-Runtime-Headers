/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCTypeInput : MCKeyboardInput {

	NSString* _characters;
	NSArray* _nearbyKeys;

}

@property (nonatomic,copy,readonly) NSString * characters;              //@synthesize characters=_characters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nearbyKeys;               //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characters;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2 ;
-(NSArray *)nearbyKeys;
@end

