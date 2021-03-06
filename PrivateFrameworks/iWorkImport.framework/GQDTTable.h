/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDTTableModel, GQDSStyle, NSString;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {

	GQDTTableModel* mModel;
	GQDSStyle* mStyle;
	BOOL mIsStreamed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(id)model;
-(void)setModel:(id)arg1 ;
-(id)tableStyle;
-(void)setTableStyle:(id)arg1 ;
-(BOOL)isStreamed;
-(id)defaultVectorStyleForVectorType:(int)arg1 ;
-(int)walkTableWithGenerator:(Class)arg1 state:(id)arg2 ;
@end

