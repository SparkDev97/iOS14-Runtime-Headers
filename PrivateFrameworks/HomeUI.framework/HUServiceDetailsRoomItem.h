/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUServiceDetailsAbstractItem.h>

@protocol HFServiceLikeBuilder;
@class HFItemBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem {

	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;

}

@property (nonatomic,readonly) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;              //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3 ;
@end
