/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class NSString, INIntent, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {

	NSString* _demoBundleIdentifier;
	INIntent* _demoIntent;
	NSString* _demoAppName;
	UIImage* _demoAppIcon;

}
+(id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4 ;
-(id)bundleIdentifier;
-(id)appIcon;
-(id)intent;
-(id)appName;
@end

