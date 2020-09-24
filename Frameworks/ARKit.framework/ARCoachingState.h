/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARCoachingOverlayView;

@interface ARCoachingState : NSObject {

	ARCoachingOverlayView* _view;

}

@property (assign,nonatomic,__weak) ARCoachingOverlayView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) long long requirements; 
@property (nonatomic,readonly) BOOL isViewActiveForState; 
-(void)exit;
-(long long)requirements;
-(ARCoachingOverlayView *)view;
-(void)enter;
-(void)setView:(ARCoachingOverlayView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(BOOL)isViewActiveForState;
-(id)doAction:(long long)arg1 ;
@end
