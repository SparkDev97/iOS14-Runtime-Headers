/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID {

	unsigned long long _ino;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)rawID;
-(id)asString;
-(id)initWithFileID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFolderOrAliasID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)folderID;
-(id)description;
@end

