/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic,copy) NSString * uncensoredName; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) NSString * biography; 
@property (assign,getter=isPrivate,nonatomic) BOOL privatePerson; 
@property (assign,getter=isVerified,nonatomic) BOOL verified; 
@property (assign,nonatomic) long long pendingRequestsCount; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__biography_KEY;
+(id)__verified_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)kind;
+(id)__handle_KEY;
+(id)__privatePerson_KEY;
+(id)__pendingRequestsCount_KEY;
+(id)__uncensoredName_KEY;
-(id)artworkCatalog;
@end
