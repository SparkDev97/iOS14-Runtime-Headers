/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PIReframeSubject : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	long long _identifier;
	double _confidence;
	long long _source;
	long long _edgeBleed;
	CGRect _bounds;
	CGRect _expandedBounds;

}

@property (nonatomic,readonly) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) CGRect bounds;                       //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGRect expandedBounds;               //@synthesize expandedBounds=_expandedBounds - In the implementation block
@property (assign,nonatomic) long long edgeBleed;                 //@synthesize edgeBleed=_edgeBleed - In the implementation block
@property (nonatomic,readonly) BOOL isHuman; 
@property (nonatomic,readonly) BOOL isAnimal; 
+(BOOL)supportsSecureCoding;
-(long long)identifier;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)confidence;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)source;
-(BOOL)isHuman;
-(id)description;
-(id)initWithType:(long long)arg1 source:(long long)arg2 identifier:(long long)arg3 confidence:(double)arg4 ;
-(BOOL)isAnimal;
-(CGRect)expandedBounds;
-(void)setExpandedBounds:(CGRect)arg1 ;
-(long long)edgeBleed;
-(void)setEdgeBleed:(long long)arg1 ;
@end
