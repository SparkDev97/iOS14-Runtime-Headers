/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor {

	Class _codableClass;
	id<FCContentContext> _contentContext;
	FCFetchedValueManager* _resourceConfigurationManager;

}

@property (nonatomic,readonly) Class codableClass;                                                //@synthesize codableClass=_codableClass - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                               //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * resourceConfigurationManager;              //@synthesize resourceConfigurationManager=_resourceConfigurationManager - In the implementation block
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<FCContentContext>)contentContext;
-(Class)codableClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_processFetchOperationResult:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fastCachedValue;
-(id)init;
-(id)inputManagers;
-(id)initWithCodableClass:(Class)arg1 contentContext:(id)arg2 resourceConfigurationManager:(id)arg3 ;
-(FCFetchedValueManager *)resourceConfigurationManager;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
@end

