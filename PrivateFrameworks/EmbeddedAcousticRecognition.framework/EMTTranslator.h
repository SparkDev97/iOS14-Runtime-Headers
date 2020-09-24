/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface EMTTranslator : NSObject {

	shared_ptr<quasar::TranslatorFactory>* _translatorFactory;
	SystemConfig* _config;
	NSObject*<OS_dispatch_queue> _translationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 task:(id)arg2 ;
-(void)loadTranslatorFrom:(id)arg1 to:(id)arg2 ;
-(void)translateTokens:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateSpeech:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateString:(id)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)_tokenizeString:(id)arg1 ;
-(void)_translate:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)translateSpeech:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateString:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
