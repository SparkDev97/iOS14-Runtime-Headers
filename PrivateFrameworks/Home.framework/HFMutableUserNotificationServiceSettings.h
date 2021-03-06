/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFUserNotificationServiceSettings.h>

@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled; 
@property (assign,getter=areMotionNotificationsEnabled,nonatomic) BOOL motionNotificationsEnabled; 
@property (assign,getter=areDoorbellNotificationsEnabled,nonatomic) BOOL doorbellNotificationsEnabled; 
@property (assign,getter=areSmartDetectionNotificationsEnabled,nonatomic) BOOL smartDetectionNotificationsEnabled; 
@property (nonatomic,retain) NSPredicate * notificationCondition; 
@property (nonatomic,retain) NSPredicate * smartCameraNotificationCondition; 
@end

