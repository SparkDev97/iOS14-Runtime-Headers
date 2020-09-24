/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem {

	NSAttributedString* _transcriptButtonText;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                          //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * internalPhishingWarning; 
-(Class)cellClass;
-(BOOL)hasMultipleMessages;
-(NSAttributedString *)internalPhishingWarning;
-(id)transcriptTextForSpam:(BOOL)arg1 ;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)showReportSMSSpam;
-(BOOL)isGroupChat;
@end
