/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {

	UsagePage_Usage_Pair _mappings[41];

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3 ;
-(long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2 ;
@end

