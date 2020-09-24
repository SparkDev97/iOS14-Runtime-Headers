/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {

	NSDictionary* _rects;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize calculatedContentSize;              //@synthesize contentSize=_contentSize - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGSize)calculatedContentSize;
-(void)_calculateSizes;
@end
