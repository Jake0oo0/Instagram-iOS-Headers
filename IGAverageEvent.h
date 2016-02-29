/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

