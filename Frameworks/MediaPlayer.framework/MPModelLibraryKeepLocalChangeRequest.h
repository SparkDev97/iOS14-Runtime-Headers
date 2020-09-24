/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	long long _enableState;

}

@property (nonatomic,retain) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (assign,nonatomic) long long enableState;                    //@synthesize enableState=_enableState - In the implementation block
-(MPModelObject *)modelObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
@end
