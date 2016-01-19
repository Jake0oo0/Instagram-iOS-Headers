/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString, NSUUID, IGSequence;

@interface IGRealtimePatchEvent : NSObject {

	NSArray* _operations;
	NSString* _topic;
	NSUUID* _uuid;
	IGSequence* _sequence;

}

@property (nonatomic,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) IGSequence * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(IGSequence *)sequence;
-(id)initWithDictionary:(id)arg1 ;
-(NSUUID *)uuid;
-(NSArray *)operations;
-(NSString *)topic;
@end

