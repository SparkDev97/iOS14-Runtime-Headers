/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INListShortcutsIntentResponseExport.h>

@class NSArray, NSString;

@interface INListShortcutsIntentResponse : INIntentResponse <INListShortcutsIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * shortcuts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)code;
-(void)setShortcuts:(NSArray *)arg1 ;
-(id)init;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)_codeWithName:(id)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(void)setPropertiesByName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)shortcuts;
@end

