/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIColor, NSString;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) long long actionDelayInSeconds; 
@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * countdownTextColor; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countdownTimerItem;
+(id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(id)groupIdentifier;
-(id<SASTTemplateAction>)action;
-(SAUIColor *)headerBackgroundColor;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(long long)actionDelayInSeconds;
-(void)setActionDelayInSeconds:(long long)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)countdownTextColor;
-(void)setCountdownTextColor:(SAUIColor *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
@end

