/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject {

	NSData* _userImageData;

}

@property (nonatomic,copy) NSData * userImageData;              //@synthesize userImageData=_userImageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)userImageData;
-(void)setUserImageData:(NSData *)arg1 ;
@end
