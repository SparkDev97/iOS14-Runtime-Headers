/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, NSArray;

@interface SUBDocumentation : NSObject <NSSecureCoding> {

	NSURL* _documentationBundleURL;
	NSData* _releaseNotesSummary;
	NSData* _releaseNotes;
	NSData* _licenseAgreement;
	NSString* _humanReadableUpdateName;
	NSString* _phoneLanguage;

}

@property (nonatomic,retain) NSURL * documentationBundleURL;                          //@synthesize documentationBundleURL=_documentationBundleURL - In the implementation block
@property (nonatomic,retain) NSData * releaseNotesSummary;                            //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (nonatomic,retain) NSData * releaseNotes;                                   //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) NSData * licenseAgreement;                               //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                      //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain,readonly) NSString * currentPhoneLanguage; 
@property (nonatomic,retain) NSString * phoneLanguage;                                //@synthesize phoneLanguage=_phoneLanguage - In the implementation block
@property (nonatomic,retain,readonly) NSArray * preferredPhoneLanguages; 
+(BOOL)supportsSecureCoding;
-(NSData *)licenseAgreement;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)releaseNotes;
-(void)setReleaseNotes:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReleaseNotesSummary:(NSData *)arg1 ;
-(NSData *)releaseNotesSummary;
-(NSArray *)preferredPhoneLanguages;
-(void)_loadBundleResources;
-(NSString *)currentPhoneLanguage;
-(void)setPhoneLanguage:(NSString *)arg1 ;
-(NSURL *)documentationBundleURL;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(void)setLicenseAgreement:(NSData *)arg1 ;
-(id)_resourceFromBundle:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDocumentationBundleURL:(id)arg1 ;
-(NSString *)humanReadableUpdateName;
-(void)setDocumentationBundleURL:(NSURL *)arg1 ;
-(NSString *)phoneLanguage;
@end
