/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, FBAnalyticsTimeSpentDelegate;
@class NSObject;

@interface FBAnalyticsTimeSpent : NSObject {

	double _lastActive;
	double _startTime;
	int _tosArrayLengthInSeconds;
	int _sequenceID;
	int _tosCumulativeBitsSet;
	NSObject*<OS_dispatch_queue> _queue;
	double _unixTime;
	long _persistentUptime;
	int _tosArray[2];
	/*^block*/id _timingBlock;
	NSObject*<OS_dispatch_source> _timer;
	char _isActiveTimer;
	id<FBAnalyticsTimeSpentDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<FBAnalyticsTimeSpentDelegate> delegate; 
-(double)_currentSystemTime;
-(void)_shipItWithSystemTime:(double)arg1 ;
-(double)_currentUnixTime;
-(long)_currentPersistentUptime;
-(void)_doUpdate:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3 ;
-(void)_resetArray;
-(id)_packageData;
-(int)_calculateElapsedFromTime:(double)arg1 ;
-(char)_tosArrayEmpty;
-(void)_setArrayStartTime:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3 ;
-(void)save;
-(void)setDelegate:(id<FBAnalyticsTimeSpentDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAnalyticsTimeSpentDelegate>)delegate;
-(void)reset;
-(void)_startTimer:(int)arg1 ;
-(void)update:(double)arg1 ;
-(void)_stopTimer;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
@end

