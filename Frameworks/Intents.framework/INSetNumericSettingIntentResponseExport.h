/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INNumericSettingValue, NSString;


@protocol INSetNumericSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNumericSettingValue * oldValue; 
@property (nonatomic,copy) INNumericSettingValue * updatedValue; 
@property (nonatomic,copy) INNumericSettingValue * minValue; 
@property (nonatomic,copy) INNumericSettingValue * maxValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(void)setMaxValue:(id)arg1;
-(long long)code;
-(INNumericSettingValue *)updatedValue;
-(NSString *)errorDetail;
-(void)setUpdatedValue:(id)arg1;
-(void)setErrorDetail:(id)arg1;
-(INNumericSettingValue *)maxValue;
-(INNumericSettingValue *)minValue;
-(INNumericSettingValue *)oldValue;
-(void)setMinValue:(id)arg1;
-(void)setOldValue:(id)arg1;

@end
