/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:50 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSString, FBSession;

@interface FBViewImpressionTracker : NSObject {

	NSHashTable* _trackedImpressions;
	NSString* _eventName;
	FBSession* _session;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) FBSession * session;                      //@synthesize session=_session - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(void)logImpressionWithView:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(id)initWithEventName:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)dealloc;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
-(NSString *)eventName;
@end

