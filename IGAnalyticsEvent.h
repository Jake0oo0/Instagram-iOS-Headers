/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface IGAnalyticsEvent : NSObject {

	NSString* _module;
	NSMutableDictionary* _extra;
	double _time;
	int _channel;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(void)incrementCounter:(id)arg1 byAmount:(int)arg2 ;
+(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
+(void)startTimer:(id)arg1 uuid:(id)arg2 ;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 noLatency:(char)arg3 ;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 noLatency:(char)arg3 navState:(id)arg4 ;
+(id)scheduleEvent:(id)arg1 ;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 ;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 navState:(id)arg3 ;
+(void)incrementCounter:(id)arg1 ;
+(void)startTimer:(id)arg1 ;
+(void)recordEvent:(id)arg1 forTimer:(id)arg2 ;
+(void)recordAverage:(id)arg1 value:(double)arg2 ;
-(id)initWithName:(id)arg1 module:(id)arg2 channel:(int)arg3 navState:(id)arg4 ;
-(void)setValue:(id)arg1 forExtraKey:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)log;
@end

