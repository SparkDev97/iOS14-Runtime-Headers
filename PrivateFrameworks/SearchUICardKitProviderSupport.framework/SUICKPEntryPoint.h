/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIdentifiedProviding.h>

@class SUICKPCardViewControllerProvider, NSString;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding> {

	SUICKPCardViewControllerProvider* _cardViewControllerProvider;

}

@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)providerIdentifier;
-(id)init;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
@end
