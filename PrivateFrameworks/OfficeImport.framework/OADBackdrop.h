/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {

	OADPoint3D* mAnchor;
	OADVector3D* mNormal;
	OADVector3D* mUp;

}
-(id)anchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)normal;
-(void)setUp:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)up;
-(unsigned long long)hash;
-(id)description;
-(void)setAnchor:(id)arg1 ;
-(void)setNormal:(id)arg1 ;
@end
