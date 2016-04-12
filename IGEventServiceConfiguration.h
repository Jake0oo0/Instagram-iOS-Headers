/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IGEventServiceConfiguration : NSObject {

	NSString* _eventId;
	unsigned _eventType;
	NSString* _fetchPath;
	NSDictionary* _params;

}

@property (nonatomic,readonly) NSString * eventId;                 //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSString * fetchPath;               //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,readonly) NSDictionary * params;              //@synthesize params=_params - In the implementation block
+(id)fetchPathFromEventType:(unsigned)arg1 eventId:(id)arg2 ;
-(NSString *)fetchPath;
-(id)initWithEventId:(id)arg1 eventType:(unsigned)arg2 params:(id)arg3 ;
-(NSDictionary *)params;
-(NSString *)eventId;
-(unsigned)eventType;
@end

