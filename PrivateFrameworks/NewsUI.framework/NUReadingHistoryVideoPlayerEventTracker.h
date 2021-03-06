/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol NUVideoReadingHistory;
@class NSString;

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {

	id<NUVideoReadingHistory> _readingHistory;

}

@property (nonatomic,readonly) id<NUVideoReadingHistory> readingHistory;              //@synthesize readingHistory=_readingHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NUVideoReadingHistory>)readingHistory;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(id)initWithReadingHistory:(id)arg1 ;
@end

