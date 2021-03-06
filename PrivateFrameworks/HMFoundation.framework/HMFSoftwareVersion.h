/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion {

	NSString* _buildVersion;

}

@property (nonatomic,readonly) BOOL hf_softwareUpdateWouldSupportHomePodPairing; 
@property (copy,readonly) NSString * buildVersion;                                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * shortVersionString; 
+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(SCD_Struct_HM6)arg1 ;
-(BOOL)hf_softwareUpdateWouldSupportHomePodPairing;
-(id)localizedDescription;
-(id)versionString;
-(id)initWithVersionString:(id)arg1 ;
-(SCD_Struct_HM6)operatingSystemVersion;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4 ;
-(long long)compare:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(NSString *)shortVersionString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buildVersion;
@end

