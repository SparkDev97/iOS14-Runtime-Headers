/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTFunCamAvatarPickerStyle : NSObject {

	double _interitemSpacing;
	CGSize _cellSize;
	CGSize _engagedCellSize;
	UIEdgeInsets _gridEdgeInsets;

}

@property (assign,nonatomic) CGSize cellSize;                          //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize engagedCellSize;                   //@synthesize engagedCellSize=_engagedCellSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                  //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gridEdgeInsets;              //@synthesize gridEdgeInsets=_gridEdgeInsets - In the implementation block
+(/*^block*/id)insetProviderForConstant:(double)arg1 ;
+(id)defaultLayoutStyle;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2 ;
-(CGSize)engagedCellSize;
-(CGSize)cellSize;
-(/*^block*/id)imageItemInsetsForGrid;
-(/*^block*/id)imageItemInsetsForList;
-(UIEdgeInsets)gridEdgeInsets;
-(void)setCellSize:(CGSize)arg1 ;
-(id)initWithCellSize:(CGSize)arg1 engagedCellSize:(CGSize)arg2 interitemSpacing:(double)arg3 gridEdgeInsets:(UIEdgeInsets)arg4 ;
-(void)setEngagedCellSize:(CGSize)arg1 ;
-(void)setGridEdgeInsets:(UIEdgeInsets)arg1 ;
@end
