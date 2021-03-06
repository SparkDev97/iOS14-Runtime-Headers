/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITreeDataSourceSnapshotter, NSOrderedSet;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {

	_UITreeDataSourceSnapshotter* _snapshotter;
	NSOrderedSet* _identifiers;

}

@property (nonatomic,readonly) _UITreeDataSourceSnapshotter * snapshotter;              //@synthesize snapshotter=_snapshotter - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * identifiers;                              //@synthesize identifiers=_identifiers - In the implementation block
-(NSOrderedSet *)identifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(_UITreeDataSourceSnapshotter *)snapshotter;
-(id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2 ;
-(id)description;
@end

