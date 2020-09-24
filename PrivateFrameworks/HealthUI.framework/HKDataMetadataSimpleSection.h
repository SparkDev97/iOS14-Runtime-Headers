/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSection.h>
#import <libobjc.A.dylib/HKDataMetadataSectionDataReceiver.h>

@class NSString, NSMutableArray;

@interface HKDataMetadataSimpleSection : HKDataMetadataSection <HKDataMetadataSectionDataReceiver> {

	NSString* _title;
	NSMutableArray* _rows;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * rows;              //@synthesize rows=_rows - In the implementation block
-(NSMutableArray *)rows;
-(id)initWithTitle:(id)arg1 ;
-(id)sectionTitle;
-(void)setRows:(NSMutableArray *)arg1 ;
-(NSString *)title;
-(void)addText:(id)arg1 detail:(id)arg2 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(id)_rowTitles;
-(id)_valueForRowWithTitle:(id)arg1 ;
@end
