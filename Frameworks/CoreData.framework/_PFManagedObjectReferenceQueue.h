/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	os_unfair_lock_s _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(BOOL)_tryRetain;
-(oneway void)release;
-(void)dealloc;
-(void)finalize;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(id)retain;
@end
