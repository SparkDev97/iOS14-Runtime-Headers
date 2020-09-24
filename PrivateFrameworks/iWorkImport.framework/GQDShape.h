/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDPath, GQDWPLayoutFrame, NSString;

@interface GQDShape : GQDGraphic <GQDNameMappable> {

	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3 ;
-(void)dealloc;
-(id)layoutFrame;
-(BOOL)isBlank;
-(BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1 ;
-(id)path;
-(CGPathRef)createBezierPath;
@end
