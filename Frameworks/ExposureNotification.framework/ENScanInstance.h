/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@interface ENScanInstance : NSObject <CUXPCCodable> {

	unsigned char _minimumAttenuation;
	unsigned char _typicalAttenuation;
	long long _secondsSinceLastScan;

}

@property (assign,nonatomic) unsigned char minimumAttenuation;              //@synthesize minimumAttenuation=_minimumAttenuation - In the implementation block
@property (assign,nonatomic) unsigned char typicalAttenuation;              //@synthesize typicalAttenuation=_typicalAttenuation - In the implementation block
@property (assign,nonatomic) long long secondsSinceLastScan;                //@synthesize secondsSinceLastScan=_secondsSinceLastScan - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(unsigned char)minimumAttenuation;
-(void)setMinimumAttenuation:(unsigned char)arg1 ;
-(unsigned char)typicalAttenuation;
-(void)setTypicalAttenuation:(unsigned char)arg1 ;
-(long long)secondsSinceLastScan;
-(void)setSecondsSinceLastScan:(long long)arg1 ;
@end
