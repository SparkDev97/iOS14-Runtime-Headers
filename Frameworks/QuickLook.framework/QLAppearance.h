/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLAppearance : NSObject <NSSecureCoding> {

	double _topInset;
	double _bottomInset;
	unsigned long long _presentationMode;
	UIEdgeInsets _peripheryInsets;

}

@property (readonly) double topInset;                                  //@synthesize topInset=_topInset - In the implementation block
@property (readonly) double bottomInset;                               //@synthesize bottomInset=_bottomInset - In the implementation block
@property (readonly) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (readonly) UIEdgeInsets peripheryInsets;                     //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)topInset;
-(unsigned long long)presentationMode;
-(id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 presentationMode:(unsigned long long)arg3 peripheryInsets:(UIEdgeInsets)arg4 ;
-(double)bottomInset;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(id)description;
@end
