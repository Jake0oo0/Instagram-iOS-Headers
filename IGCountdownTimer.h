/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGCountdownTimerDelegate;
@class NSTimer;

@interface IGCountdownTimer : NSObject {

	id<IGCountdownTimerDelegate> _delegate;
	int _duration;
	NSTimer* _countdownTimer;
	int _secondsLeft;

}

@property (assign,nonatomic,__weak) id<IGCountdownTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSTimer * countdownTimer;                                  //@synthesize countdownTimer=_countdownTimer - In the implementation block
@property (assign,nonatomic) int secondsLeft;                                           //@synthesize secondsLeft=_secondsLeft - In the implementation block
-(void)invalidateTimer;
-(void)continueTimer;
-(void)setSecondsLeft:(int)arg1 ;
-(void)setCountdownTimer:(NSTimer *)arg1 ;
-(void)timerFired;
-(NSTimer *)countdownTimer;
-(int)secondsLeft;
-(id)newTimer;
-(id)initWithDuration:(int)arg1 ;
-(void)setDelegate:(id<IGCountdownTimerDelegate>)arg1 ;
-(id<IGCountdownTimerDelegate>)delegate;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(void)resetTimer;
@end

