/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {

	VSRecognitionAction* _confirmedAction;
	VSRecognitionAction* _deniedAction;
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	}  _confirmFlags;

}
-(void)dealloc;
-(id)initWithModelIdentifier:(id)arg1 ;
-(int)completionType;
-(id)init;
-(void)_setConfirmed:(BOOL)arg1 ;
-(void)setConfirmedAction:(id)arg1 ;
-(id)confirmedAction;
-(void)setDeniedAction:(id)arg1 ;
-(id)deniedAction;
@end

