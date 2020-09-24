/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFAdjustableLabelDelegate.h>

@protocol WFNumericPageControlDelegate;
@class UIColor, UIPageControl, UILabel, NSString;

@interface WFNumericPageControl : UIView <WFAdjustableLabelDelegate> {

	BOOL _usesBoldText;
	long long _currentPage;
	long long _numberOfPages;
	id<WFNumericPageControlDelegate> _delegate;
	UIColor* _selectedPageTintColor;
	UIColor* _deselectedPageTintColor;
	UIPageControl* _pageControl;
	UILabel* _pageLabel;

}

@property (assign,nonatomic,__weak) UIPageControl * pageControl;                            //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) UILabel * pageLabel;                                    //@synthesize pageLabel=_pageLabel - In the implementation block
@property (assign,nonatomic) long long currentPage;                                         //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) long long numberOfPages;                                       //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic,__weak) id<WFNumericPageControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedPageTintColor;                               //@synthesize selectedPageTintColor=_selectedPageTintColor - In the implementation block
@property (nonatomic,retain) UIColor * deselectedPageTintColor;                             //@synthesize deselectedPageTintColor=_deselectedPageTintColor - In the implementation block
@property (assign,nonatomic) BOOL usesBoldText;                                             //@synthesize usesBoldText=_usesBoldText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfPages;
-(CGSize)intrinsicContentSize;
-(UIPageControl *)pageControl;
-(void)updateControls;
-(void)layoutSubviews;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(void)setDelegate:(id<WFNumericPageControlDelegate>)arg1 ;
-(long long)currentPage;
-(void)setNumberOfPages:(long long)arg1 ;
-(id<WFNumericPageControlDelegate>)delegate;
-(UILabel *)pageLabel;
-(void)setPageLabel:(UILabel *)arg1 ;
-(void)adjustableLabelRequestedDecrement:(id)arg1 ;
-(void)adjustableLabelRequestedIncrement:(id)arg1 ;
-(void)pageControlValueChanged:(id)arg1 ;
-(UIColor *)selectedPageTintColor;
-(void)setSelectedPageTintColor:(UIColor *)arg1 ;
-(UIColor *)deselectedPageTintColor;
-(void)setDeselectedPageTintColor:(UIColor *)arg1 ;
-(BOOL)usesBoldText;
-(void)setUsesBoldText:(BOOL)arg1 ;
@end
