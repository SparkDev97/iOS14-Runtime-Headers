/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIAttributedStringView.h>

@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {

	SKUIAttributedStringView* _delegateView;

}

@property (nonatomic,readonly) SKUIAttributedStringView * delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
-(void)setLayout:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(double)firstBaselineOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBadgePlacement:(long long)arg1 ;
-(void)layoutSubviews;
-(id)layout;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(id)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIAttributedStringView *)delegateView;
-(BOOL)textColorFollowsTintColor;
-(double)baselineOffset;
-(long long)badgePlacement;
-(void)setStringTreatment:(long long)arg1 ;
-(void)setTreatmentColor:(id)arg1 ;
-(void)setRequiredBadges:(id)arg1 ;
-(void)viewWasRecycled;
-(BOOL)usesTallCharacterSet;
-(void)setFirstLineTopInset:(long long)arg1 ;
-(id)requiredBadges;
-(long long)stringTreatment;
-(id)treatmentColor;
-(long long)firstLineTopInset;
@end

