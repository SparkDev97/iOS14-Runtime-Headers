/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXIssueCoverViewProvider.h>

@protocol SXIssueCoverViewProvider <NSObject>
@required
-(id)viewForIssueCover:(id)arg1;
-(id)viewForIssueCover:(id)arg1;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;

@end


@protocol SXIssueCoverLayoutAttributesFactory;
@class NSString;

@interface SXIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider> {

	id<SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;              //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLayoutAttributesFactory:(id)arg1 ;
-(id<SXIssueCoverLayoutAttributesFactory>)layoutOptionsFactory;
-(id)viewForIssueCover:(id)arg1 ;
-(void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3 ;
@end
