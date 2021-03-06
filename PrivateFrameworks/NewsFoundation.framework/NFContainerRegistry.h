/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFContainerRegistry.h>

@protocol NFContainerRegistry <NSObject>
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer; 
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer; 
@property (nonatomic,readonly) id swiftContainer; 
@property (nonatomic,readonly) id bridgedContainer; 
@property (nonatomic,readonly) id<NFCallbackRegistration> callback; 
@required
-(id)bridgedContainer;
-(id<NFRegistrationContainer>)publicContainer;
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id)swiftContainer;

@end


@protocol NFRegistrationContainer, NFCallbackRegistration;
@class NSString;

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {

	id<NFRegistrationContainer> _publicContainer;
	id<NFRegistrationContainer> _privateContainer;
	id _bridgedContainer;
	id _swiftContainer;
	id<NFCallbackRegistration> _callback;

}

@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,readonly) id swiftContainer;                                         //@synthesize swiftContainer=_swiftContainer - In the implementation block
@property (nonatomic,readonly) id bridgedContainer;                                       //@synthesize bridgedContainer=_bridgedContainer - In the implementation block
@property (nonatomic,readonly) id<NFCallbackRegistration> callback;                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bridgedContainer;
-(id<NFRegistrationContainer>)publicContainer;
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id)swiftContainer;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4 ;
@end

