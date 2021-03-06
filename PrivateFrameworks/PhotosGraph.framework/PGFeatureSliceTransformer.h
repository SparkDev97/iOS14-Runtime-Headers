/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGFeatureTransformer.h>

@class NSString;

@interface PGFeatureSliceTransformer : NSObject <PGFeatureTransformer> {

	long long _fromIndex;
	long long _toIndex;

}

@property (nonatomic,readonly) long long fromIndex;                 //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,readonly) long long toIndex;                   //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(long long)toIndex;
-(long long)fromIndex;
-(id)init;
-(id)floatVectorWithFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
@end

