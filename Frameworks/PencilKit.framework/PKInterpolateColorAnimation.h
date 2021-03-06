/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface PKInterpolateColorAnimation : NSObject {

	double _sourceRGBA[4];
	double _destRGBA[4];
	double _startTime;
	double _duration;
	UIColor* _endColorFallback;

}
-(id)colorAtTime:(double)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 startTime:(double)arg3 duration:(double)arg4 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
@end

