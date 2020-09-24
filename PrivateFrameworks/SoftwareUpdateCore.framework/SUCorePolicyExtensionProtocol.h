/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUCorePolicyExtensionProtocol <NSSecureCoding>
@optional
-(void)extendMSUApplyOptions:(id)arg1;

@required
-(id)copyWithZone:(NSZone*)arg1;
-(id)summary;
-(id)extensionName;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
-(void)extendDocumentationMAAssetQuery:(id)arg1;
-(id)filterSoftwareUpdateAssetArray:(id)arg1;
-(id)filterDocumentationAssetArray:(id)arg1;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1;

@end
