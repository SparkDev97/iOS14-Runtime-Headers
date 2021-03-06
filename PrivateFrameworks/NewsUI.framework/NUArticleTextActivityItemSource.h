/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource {

	NSString* _itemTitle;

}

@property (nonatomic,readonly) NSString * itemTitle;              //@synthesize itemTitle=_itemTitle - In the implementation block
-(id)initWithHeadline:(id)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)itemTitle;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
@end

