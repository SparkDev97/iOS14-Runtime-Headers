/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKUpNextItemCollection;

@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation {

	WLKUpNextItemCollection* _itemCollection;

}

@property (nonatomic,readonly) WLKUpNextItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
-(WLKUpNextItemCollection *)itemCollection;
-(id)init;
-(id)initWithQueryParameters:(id)arg1 options:(long long)arg2 ;
-(void)processResponse;
@end

