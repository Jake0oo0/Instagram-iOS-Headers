/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:34 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGAverageEvent : IGEventAggregator {

	NSMutableDictionary* _pendingAverages;

}

@property (nonatomic,retain) NSMutableDictionary * pendingAverages;              //@synthesize pendingAverages=_pendingAverages - In the implementation block
-(void)recordAverage:(id)arg1 value:(double)arg2 ;
-(NSMutableDictionary *)pendingAverages;
-(id)createCounterForAverage:(id)arg1 withFirstValue:(double)arg2 ;
-(void)setPendingAverages:(NSMutableDictionary *)arg1 ;
-(void)save;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
@end

