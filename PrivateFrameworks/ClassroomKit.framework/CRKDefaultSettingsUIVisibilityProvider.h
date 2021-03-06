/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKCourseEnrollmentControllerDelegate.h>
#import <libobjc.A.dylib/CRKSettingsUIVisibilityProvider.h>

@class CRKUserDefaultsObject, CRKCourseEnrollmentController, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider> {

	CRKUserDefaultsObject* mUIPreviouslyVisible;
	CRKCourseEnrollmentController* mEnrollmentController;
	BOOL _settingsUIVisible;

}

@property (assign) BOOL settingsUIVisible;                          //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)settingsUIVisible;
-(id)init;
-(void)connectToDaemon;
-(void)setSettingsUIVisible:(BOOL)arg1 ;
-(void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1 ;
-(void)migrateOldUserDefaultsValues;
-(void)updateVisibilityState;
-(void)updatePreviouslyVisibleDefaultWithValue:(BOOL)arg1 ;
@end

