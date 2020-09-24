/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHDView3D : NSObject {

	int mRotationX;
	int mRotationY;
	int mDepthPercent;
	int mGapDepthPercent;
	int mHeightPercent;
	int mPerspective;
	BOOL mRightAngleAxes;
	BOOL mCluster;
	BOOL mAutoscale;

}
-(BOOL)isCluster;
-(id)init;
-(id)description;
-(int)rotationX;
-(void)setRotationX:(int)arg1 ;
-(int)rotationY;
-(void)setRotationY:(int)arg1 ;
-(void)setPerspective:(int)arg1 ;
-(void)setRightAngleAxes:(BOOL)arg1 ;
-(void)setDepthPercent:(int)arg1 ;
-(void)setGapDepthPercent:(int)arg1 ;
-(void)setHeightPercent:(int)arg1 ;
-(void)setAutoscale:(BOOL)arg1 ;
-(void)setCluster:(BOOL)arg1 ;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)perspective;
-(int)heightPercent;
-(BOOL)isAutoscale;
-(BOOL)isRightAngleAxes;
@end
