/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFDigestOperation;
@class _SFECDHOperation, SFSymmetricEncryptionOperation;

@interface SFIESOperation_Ivars : NSObject {

	long long curve;
	_SFECDHOperation* diffieHellmanOperation;
	SFSymmetricEncryptionOperation* encryptionOperation;
	id<SFDigestOperation> digestOperation;

}
@end
