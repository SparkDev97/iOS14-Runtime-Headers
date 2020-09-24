/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UICollectionLayoutVisualTreeNode, NSArray;

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject {

	_UICollectionLayoutVisualTreeNode* _root;
	NSArray* _visualFormats;

}

@property (nonatomic,copy) NSArray * visualFormats;                                 //@synthesize visualFormats=_visualFormats - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutVisualTreeNode * root;              //@synthesize root=_root - In the implementation block
+(id)treeParserWithVisualFormats:(id)arg1 ;
-(_UICollectionLayoutVisualTreeNode *)root;
-(id)_parse;
-(void)setRoot:(_UICollectionLayoutVisualTreeNode *)arg1 ;
-(NSArray *)visualFormats;
-(id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1 ;
-(void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithVisualFormats:(id)arg1 ;
-(id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3 ;
-(void)enumerateTreeNodesDepthFirstUsingBlock:(/*^block*/id)arg1 ;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(id)description;
@end
