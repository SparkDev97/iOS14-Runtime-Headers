/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconListModelObserver <NSObject>
@optional
-(void)iconListIconStateDidDirty:(id)arg1;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
-(void)iconList:(id)arg1 willAddIcon:(id)arg2;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
-(void)iconListHiddenDidChange:(id)arg1;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2;

@end

