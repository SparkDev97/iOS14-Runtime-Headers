/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@class NSString, HFRoomBuilder, HFNamingComponents, HMAccessory, NSArray;

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;
	HFNamingComponents* _namingComponent;

}

@property (nonatomic,retain) HFNamingComponents * namingComponent;              //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
+(Class)homeKitRepresentationClass;
-(id)_performValidation;
-(BOOL)isFavorite;
-(HFRoomBuilder *)room;
-(id)commitItem;
-(NSString *)originalName;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(void)setIsFavorite:(BOOL)arg1 ;
-(HMAccessory *)accessory;
-(id)accessories;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(NSString *)name;
@end

