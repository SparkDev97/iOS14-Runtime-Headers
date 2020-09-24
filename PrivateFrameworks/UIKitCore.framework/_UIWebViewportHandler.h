/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebViewportHandlerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIWebViewportHandler : NSObject {

	BOOL _initialConfigurationHasBeenSentToDelegate;
	UIWebViewportConfiguration _defaultConfiguration;
	UIWebViewportConfiguration _configuration;
	unsigned _webkitDefinedConfigurationFlags;
	CGSize _availableViewSize;
	CGSize _viewportArgumentsSize;
	BOOL _widthIsDeviceWidth;
	BOOL _heightIsDeviceHeight;
	BOOL _isInUpdateBlock;
	BOOL _classicViewportMode;
	id<_UIWebViewportHandlerDelegate> _delegate;
	CGRect _documentBounds;

}

@property (assign,nonatomic) id<_UIWebViewportHandlerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                              //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) CGSize availableViewSize;                                           //@synthesize availableViewSize=_availableViewSize - In the implementation block
@property (nonatomic,readonly) float initialScale; 
@property (nonatomic,readonly) float minimumScale; 
@property (nonatomic,readonly) float maximumScale; 
@property (nonatomic,readonly) BOOL allowsUserScaling; 
@property (nonatomic,readonly) unsigned webkitDefinedConfigurationFlags;                           //@synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags - In the implementation block
@property (getter=isClassicViewportMode,nonatomic,readonly) BOOL classicViewportMode;              //@synthesize classicViewportMode=_classicViewportMode - In the implementation block
@property (nonatomic,readonly) BOOL avoidsUnsafeArea; 
@property (nonatomic,readonly) UIWebViewportConfiguration rawViewConfiguration; 
-(void)applyWebKitViewportArgumentsSize:(CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 viewportFit:(id)arg7 ;
-(void)update:(/*^block*/id)arg1 ;
-(float)maximumScale;
-(float)initialScale;
-(BOOL)allowsUserScaling;
-(double)integralScaleForScale:(double)arg1 keepingPointFixed:(CGPoint*)arg2 ;
-(BOOL)shouldIgnoreScalingConstraints;
-(BOOL)shouldIgnoreVerticalScalingConstraints;
-(void)_resolveViewSizeRelativeLengths;
-(BOOL)shouldIgnoreHorizontalScalingConstraints;
-(BOOL)avoidsUnsafeArea;
-(float)minimumScale;
-(void)setDelegate:(id<_UIWebViewportHandlerDelegate>)arg1 ;
-(BOOL)isClassicViewportMode;
-(float)viewportWidth;
-(float)viewportHeight;
-(float)minimumScaleForViewSize:(CGSize)arg1 ;
-(CGSize)availableViewSize;
-(void)resetViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(void)clearWebKitViewportConfigurationFlags;
-(UIWebViewportConfiguration)rawViewConfiguration;
-(unsigned)webkitDefinedConfigurationFlags;
-(void)overrideViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(void)setAvailableViewSize:(CGSize)arg1 updateConfigurationSize:(BOOL)arg2 ;
-(double)integralInitialScale;
-(id<_UIWebViewportHandlerDelegate>)delegate;
-(void)setDocumentBounds:(CGRect)arg1 ;
-(CGRect)documentBounds;
@end
