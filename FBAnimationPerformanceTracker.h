/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimationPerformanceTrackerDelegate;
#import <Instagram/Instagram-Structs.h>
@class CADisplayLink, NSRunLoop;

@interface FBAnimationPerformanceTracker : NSObject {

	FBAnimationPerformanceTrackerConfig _config;
	char _tracking;
	char _firstUpdate;
	double _previousFrameTimestamp;
	CADisplayLink* _displayLink;
	char _prepared;
	NSRunLoop* _runLoop;
	double _durationTotal;
	double _smallDrops;
	double _largeDrops;
	id<FBAnimationPerformanceTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAnimationPerformanceTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_trackerLoop;
+(FBAnimationPerformanceTrackerConfig)standardConfig;
-(void)_setupSignal;
-(void)_tearDownCADisplayLink;
-(void)_setUpCADisplayLink;
-(void)_reportStackTrace:(id)arg1 frameTime:(int)arg2 ;
-(void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2 ;
-(char)prepare;
-(void)setDelegate:(id<FBAnimationPerformanceTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAnimationPerformanceTrackerDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)_update;
-(void)_reset;
-(id)initWithConfig:(FBAnimationPerformanceTrackerConfig)arg1 ;
@end

