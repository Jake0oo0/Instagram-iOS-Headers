/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGImpressionTracker.h>

@class NSString;

@interface IGFeedItemTracker : IGImpressionTracker {

	char _trackWithNoLatency;
	/*^block*/id _trackingTokenBlock;
	NSString* _eventPrefix;

}

@property (nonatomic,copy) id trackingTokenBlock;                  //@synthesize trackingTokenBlock=_trackingTokenBlock - In the implementation block
@property (assign,nonatomic) char trackWithNoLatency;              //@synthesize trackWithNoLatency=_trackWithNoLatency - In the implementation block
@property (nonatomic,copy) NSString * eventPrefix;                 //@synthesize eventPrefix=_eventPrefix - In the implementation block
-(void)setTrackWithNoLatency:(char)arg1 ;
-(void)setEventPrefix:(NSString *)arg1 ;
-(id)trackEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 ;
-(id)eventWithSuffix:(id)arg1 ;
-(char)trackWithNoLatency;
-(id)trackingTokenBlock;
-(NSString *)eventPrefix;
-(id)trackEvent:(id)arg1 forFeedItem:(id)arg2 ;
-(id)trackTimespentForFeedItem:(id)arg1 withTimespent:(double)arg2 ;
-(void)setTrackingTokenBlock:(id)arg1 ;
@end

