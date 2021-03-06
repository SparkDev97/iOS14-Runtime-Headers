/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCCEncryptor : NSObject {

	NSString* mOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 filename:(id*)arg2 ;
-(NSString *)outputFilename;
-(void)dealloc;
-(BOOL)encrypt;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(BOOL)encryptIntoOutputFile;
@end

