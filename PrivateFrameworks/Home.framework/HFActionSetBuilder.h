/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAbstractBaseActionSetBuilder.h>

@protocol HFIconDescriptor;
@class NSString;

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder {

	BOOL _isFavorite;
	NSString* _name;
	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                  //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)_performValidation;
-(BOOL)isFavorite;
-(id)commitItem;
-(id)initWithHome:(id)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_lazilyUpdateFavorite;
-(id)deleteActionSet;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(NSString *)name;
-(id)_deleteActionSet:(id)arg1 fromHome:(id)arg2 ;
-(id)_lazilyUpdateIcon;
@end
