/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFWorkflowReferencing.h>

@class WFWorkflow, NSArray, NSString;

@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing> {

	NSArray* _possibleStates;
	WFWorkflow* _workflow;

}

@property (assign,nonatomic,__weak) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflow *)workflow;
-(id)possibleStates;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)workflowForState:(id)arg1 ;
@end

