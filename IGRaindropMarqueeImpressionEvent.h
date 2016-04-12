/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:57 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropMarquee, NSNumber, IGRaindropPositionIn2D, NSString;

@interface IGRaindropMarqueeImpressionEvent : TBaseStruct {

	IGRaindropMarquee* __thrift_marquee;
	NSNumber* __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSNumber* __thrift_viewed;
	NSNumber* __thrift_subImpression;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithMarquee:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 viewed:(id)arg5 subImpression:(id)arg6 clusterKey:(id)arg7 sectionType:(int)arg8 targetId:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

