/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection {

	unsigned long long mNextContentFormatId;

}
-(unsigned long long)addObject:(id)arg1 ;
-(id)init;
-(void)setupDefaults;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2 ;
-(BOOL)isOverwritingKeyOK;
@end
