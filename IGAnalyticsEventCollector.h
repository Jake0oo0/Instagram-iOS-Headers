/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:56 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IGAnalyticsEventCollector : NSObject {

	NSMutableArray* _events;

}

@property (nonatomic,readonly) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)sharedInstance;
-(void)clearCollectedEvents;
-(void)addAnalyticEvent:(id)arg1 ;
-(id)collectedEvents;
-(id)init;
-(NSMutableArray *)events;
@end

