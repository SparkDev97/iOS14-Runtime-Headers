/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding> {

	double _favoritedBoost;
	double _globalWeight;
	double _userBaseline;
	double _preBaselineCurvature;
	double _postBaselineCurvature;
	double _dilutionFactor;
	double _paddingFactor;

}

@property (assign,nonatomic) double favoritedBoost;                     //@synthesize favoritedBoost=_favoritedBoost - In the implementation block
@property (assign,nonatomic) double globalWeight;                       //@synthesize globalWeight=_globalWeight - In the implementation block
@property (assign,nonatomic) double userBaseline;                       //@synthesize userBaseline=_userBaseline - In the implementation block
@property (assign,nonatomic) double preBaselineCurvature;               //@synthesize preBaselineCurvature=_preBaselineCurvature - In the implementation block
@property (assign,nonatomic) double postBaselineCurvature;              //@synthesize postBaselineCurvature=_postBaselineCurvature - In the implementation block
@property (assign,nonatomic) double dilutionFactor;                     //@synthesize dilutionFactor=_dilutionFactor - In the implementation block
@property (assign,nonatomic) double paddingFactor;                      //@synthesize paddingFactor=_paddingFactor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFavoritedBoost:(double)arg1 globalWeight:(double)arg2 userBaseline:(double)arg3 preBaselineCurvature:(double)arg4 postBaselineCurvature:(double)arg5 dilutionFactor:(double)arg6 paddingFactor:(double)arg7 ;
-(void)setFavoritedBoost:(double)arg1 ;
-(void)setGlobalWeight:(double)arg1 ;
-(void)setUserBaseline:(double)arg1 ;
-(void)setPreBaselineCurvature:(double)arg1 ;
-(void)setPostBaselineCurvature:(double)arg1 ;
-(void)setDilutionFactor:(double)arg1 ;
-(void)setPaddingFactor:(double)arg1 ;
-(double)preBaselineCurvature;
-(double)postBaselineCurvature;
-(double)userBaseline;
-(double)favoritedBoost;
-(double)dilutionFactor;
-(double)paddingFactor;
-(double)globalWeight;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
