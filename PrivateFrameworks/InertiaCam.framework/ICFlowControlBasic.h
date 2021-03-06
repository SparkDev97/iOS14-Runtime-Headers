/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICFlowControl.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl> {

	/*^block*/id shouldBeCanceled;
	/*^block*/id reportProgress;

}

@property (nonatomic,copy) id shouldBeCanceled; 
@property (nonatomic,copy) id reportProgress; 
-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg1 ;
-(void)setShouldBeCanceled:(id)arg1 ;
-(void)setReportProgress:(id)arg1 ;
-(id)reportProgress;
-(id)shouldBeCanceled;
-(id)initWithCancel:(/*^block*/id)arg1 ;
-(id)initWithProgress:(/*^block*/id)arg1 ;
@end

