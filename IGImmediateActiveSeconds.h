/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGAnalyticsImmediateActiveSecondsDelegate;
@class NSString;

@interface IGImmediateActiveSeconds : NSObject {

	unsigned _bucketForReportingActiveSeconds;
	unsigned _immediateActiveSecondsSamplingRate;
	double _lastActiveTimeSecond;
	double _lastForegroundTime;
	char _shouldComputeBucketForReportingActiveSeconds;
	NSString* _userID;
	id<IGAnalyticsImmediateActiveSecondsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsImmediateActiveSecondsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)shouldReportCurrentActiveSecond:(double)arg1 ;
-(void)maybeReportActiveSecond:(double)arg1 forModule:(id)arg2 ;
-(void)setLastForegroundTime:(double)arg1 ;
-(void)setDelegate:(id<IGAnalyticsImmediateActiveSecondsDelegate>)arg1 ;
-(id<IGAnalyticsImmediateActiveSecondsDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setUserID:(id)arg1 ;
@end

