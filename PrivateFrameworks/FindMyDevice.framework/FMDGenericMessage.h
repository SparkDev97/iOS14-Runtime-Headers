/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDGenericMessage : NSObject <NSSecureCoding> {

	BOOL _vibrate;
	int _soundDuration;
	NSString* _soundName;

}

@property (assign,nonatomic) BOOL vibrate;                      //@synthesize vibrate=_vibrate - In the implementation block
@property (nonatomic,retain) NSString * soundName;              //@synthesize soundName=_soundName - In the implementation block
@property (assign,nonatomic) int soundDuration;                 //@synthesize soundDuration=_soundDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)vibrate;
-(void)setSoundName:(NSString *)arg1 ;
-(void)setVibrate:(BOOL)arg1 ;
-(int)soundDuration;
-(void)setSoundDuration:(int)arg1 ;
-(NSString *)soundName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

