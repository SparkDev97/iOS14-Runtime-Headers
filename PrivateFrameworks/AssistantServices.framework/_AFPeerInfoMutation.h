/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFPeerInfoMutating.h>

@class AFPeerInfo, NSString;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {

	AFPeerInfo* _baseModel;
	BOOL _isDeviceOwnedByCurrentUser;
	NSString* _idsIdentifier;
	NSString* _idsDeviceUniqueIdentifier;
	NSString* _rapportEffectiveIdentifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	BOOL _isCommunalDevice;
	NSString* _roomName;
	NSString* _name;
	NSString* _productType;
	NSString* _buildVersion;
	NSString* _userInterfaceIdiom;
	NSString* _aceVersion;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsDeviceOwnedByCurrentUser : 1;
		unsigned hasIdsIdentifier : 1;
		unsigned hasIdsDeviceUniqueIdentifier : 1;
		unsigned hasRapportEffectiveIdentifier : 1;
		unsigned hasMediaSystemIdentifier : 1;
		unsigned hasMediaRouteIdentifier : 1;
		unsigned hasIsCommunalDevice : 1;
		unsigned hasRoomName : 1;
		unsigned hasName : 1;
		unsigned hasProductType : 1;
		unsigned hasBuildVersion : 1;
		unsigned hasUserInterfaceIdiom : 1;
		unsigned hasAceVersion : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInterfaceIdiom:(id)arg1 ;
-(void)setMediaSystemIdentifier:(id)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsDeviceOwnedByCurrentUser:(BOOL)arg1 ;
-(void)setAceVersion:(id)arg1 ;
-(void)setMediaRouteIdentifier:(id)arg1 ;
-(void)setIdsDeviceUniqueIdentifier:(id)arg1 ;
-(void)setRapportEffectiveIdentifier:(id)arg1 ;
-(void)setIsCommunalDevice:(BOOL)arg1 ;
-(id)init;
-(void)setIdsIdentifier:(id)arg1 ;
-(void)setProductType:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setRoomName:(id)arg1 ;
-(id)generate;
@end

