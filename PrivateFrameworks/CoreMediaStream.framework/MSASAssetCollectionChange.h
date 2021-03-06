/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(void)setWasDeleted:(BOOL)arg1 ;
-(NSString *)ctag;
-(BOOL)wasDeleted;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setCtag:(NSString *)arg1 ;
-(id)description;
@end

