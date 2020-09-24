/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler;
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CNCache : NSObject {

	NSArray* _boundingStrategies;
	id<CNScheduler> _resourceScheduler;
	NSMutableDictionary* _storage;
	NSMutableArray* _didEvictHandlers;
	NSArray* _evictedKeysAndValues;

}

@property (nonatomic,copy,readonly) NSArray * boundingStrategies;              //@synthesize boundingStrategies=_boundingStrategies - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceScheduler;              //@synthesize resourceScheduler=_resourceScheduler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didEvictHandlers;              //@synthesize didEvictHandlers=_didEvictHandlers - In the implementation block
@property (nonatomic,copy) NSArray * evictedKeysAndValues;                     //@synthesize evictedKeysAndValues=_evictedKeysAndValues - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allObjects; 
+(id)cache;
+(id)boundingStrategyWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3 ;
+(id)boundingStrategyWithCapacity:(unsigned long long)arg1 ;
+(id)atomicCacheScheduler;
+(id)boundingStrategyWithTTL:(double)arg1 ;
+(id)nonatomicCacheScheduler;
+(id)atomicCache;
-(NSMutableArray *)didEvictHandlers;
-(NSArray *)allObjects;
-(NSMutableDictionary *)storage;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(void)addDidEvictHandler:(/*^block*/id)arg1 ;
-(void)resourceLock_evictObjectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setEvictedKeysAndValues:(NSArray *)arg1 ;
-(id)initWithResourceScheduler:(id)arg1 ;
-(id)objectForKey:(id)arg1 onCacheMiss:(/*^block*/id)arg2 ;
-(id)init;
-(void)resourceLock_validateKey:(id)arg1 ;
-(NSArray *)boundingStrategies;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSArray *)allKeys;
-(void)resourceLock_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(void)resourceLock_evictObjectsForKeys:(id)arg1 ;
-(void)resourceLock_validateAllKeys;
-(void)resourceLock_willAccessKey:(id)arg1 ;
-(NSArray *)evictedKeysAndValues;
-(id)objectForKey:(id)arg1 ;
-(void)callDidEvictHandlersIfNecessary;
-(id<CNScheduler>)resourceScheduler;
-(id)description;
-(void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2 ;
@end
