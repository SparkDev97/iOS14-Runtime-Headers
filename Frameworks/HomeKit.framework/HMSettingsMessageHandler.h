/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _HMContext;

@interface HMSettingsMessageHandler : NSObject {

	_HMContext* _context;

}

@property (retain) _HMContext * context;              //@synthesize context=_context - In the implementation block
-(void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
@end
