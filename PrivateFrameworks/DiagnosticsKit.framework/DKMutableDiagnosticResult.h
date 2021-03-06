/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <DiagnosticsKit/DKDiagnosticResult.h>

@class NSNumber, NSDictionary, NSArray;

@interface DKMutableDiagnosticResult : DKDiagnosticResult {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;

}

@property (nonatomic,retain) NSNumber * statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * files;                    //@synthesize files=_files - In the implementation block
-(NSNumber *)statusCode;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)files;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setFiles:(NSArray *)arg1 ;
@end

