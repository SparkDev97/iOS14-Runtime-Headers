/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/MSVSQLExecutable.h>

@class NSString;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {

	sqlite3Ref _databaseHandle;
	NSString* _databasePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)transactionWithName:(id)arg1 ;
-(id)executeSQL:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)statementWithString:(id)arg1 error:(id*)arg2 ;
-(id)resultsForStatement:(id)arg1 ;
-(id)initWithMemory;
-(NSString *)description;
@end

