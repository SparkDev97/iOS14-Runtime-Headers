/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolder.h>

@class SBHLibraryCategoryIdentifier;

@interface SBHLibraryCategoryFolder : SBFolder {

	SBHLibraryCategoryIdentifier* _libraryCategoryIdentifier;

}

@property (nonatomic,readonly) SBHLibraryCategoryIdentifier * libraryCategoryIdentifier;              //@synthesize libraryCategoryIdentifier=_libraryCategoryIdentifier - In the implementation block
-(id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 listGridSize:(SBHIconGridSize)arg3 libraryCategoryIdentifier:(id)arg4 ;
-(SBHLibraryCategoryIdentifier *)libraryCategoryIdentifier;
-(id)_indexPathToRevealForJiggleMode;
-(BOOL)isLibraryCategoryFolder;
@end

