/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@protocol CUIKCommitDelegate, CUIKDecisionDelegate;
@class NSError;

@interface CUIKUndoManager : NSUndoManager {

	id<CUIKCommitDelegate> _commitDelegate;
	id<CUIKDecisionDelegate> _decisionDelegate;
	/*^block*/id _editingManagerProvider;
	NSError* _lastError;

}

@property (retain) id<CUIKCommitDelegate> commitDelegate;                  //@synthesize commitDelegate=_commitDelegate - In the implementation block
@property (retain) id<CUIKDecisionDelegate> decisionDelegate;              //@synthesize decisionDelegate=_decisionDelegate - In the implementation block
@property (nonatomic,copy) id editingManagerProvider;                      //@synthesize editingManagerProvider=_editingManagerProvider - In the implementation block
@property (retain) NSError * lastError;                                    //@synthesize lastError=_lastError - In the implementation block
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
-(id)editingManagerProvider;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(void)setEditingManagerProvider:(id)arg1 ;
-(id<CUIKDecisionDelegate>)decisionDelegate;
@end
