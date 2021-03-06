/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {

	unsigned long long _unreadCount;
	long long _lastFailedMessageDate;
	BOOL _showingFailure;
	BOOL _isUnexpectedlyLogOut;
	BOOL _addedObserverForUnexpectedlyLoggedOut;
	UNUserNotificationCenter* _notificationCenter;
	UNUserNotificationCenter* _notificationCenterCatalyst;
	IMDefaults* _sharedDefaultsInstance;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;                      //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * notificationCenterCatalyst;              //@synthesize notificationCenterCatalyst=_notificationCenterCatalyst - In the implementation block
@property (nonatomic,retain) IMDefaults * sharedDefaultsInstance;                                //@synthesize sharedDefaultsInstance=_sharedDefaultsInstance - In the implementation block
+(id)sharedInstance;
+(BOOL)_isUsableSendingForAccount:(id)arg1 ;
+(BOOL)_isUserIntentNotLoggedOut;
+(BOOL)_iMessageEnabled;
+(BOOL)_iMessageFailedAccountIsIrreparable;
+(BOOL)_isTryingToLogin;
+(id)_accountsArrayForServiceIMessage;
-(UNUserNotificationCenter *)notificationCenter;
-(UNUserNotificationCenter *)notificationCenterCatalyst;
-(void)_cacheFailureDate:(long long)arg1 ;
-(void)_postBadgeNumber:(id)arg1 ;
-(void)_handleUnexpectedLogout;
-(void)_updateBadge;
-(void)_clearFailureBadge;
-(void)dealloc;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(BOOL)_isUnexpectedlyLoggedOut;
-(BOOL)_isUnexpectedlyLogOutValue;
-(id)init;
-(void)setNotificationCenterCatalyst:(UNUserNotificationCenter *)arg1 ;
-(void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(void)_saveFailureDate:(long long)arg1 ;
-(IMDefaults *)sharedDefaultsInstance;
-(void)_postBadgeString:(id)arg1 ;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
-(void)_compareLastFailureDateAndUpdateBadge:(long long)arg1 ;
-(BOOL)isInAppleStoreDemoMode;
-(BOOL)_shouldShowFailureString;
-(long long)_savedFailureDate;
-(void)_checkIfUnexpectedlyLoggedOut;
-(void)_stopSuppressingSound;
-(id)initWithMessageStore:(id)arg1 ;
@end

