/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, IGRaindropPositionIn2D;

@interface IGRaindropExploreImpressionEvent : TBaseStruct {

	NSString* __thrift_id;
	NSString* __thrift_type;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_impressionToken;
	NSString* __thrift_endpointType;

}
-(id)toDict;
-(id)initWithId:(id)arg1 type:(id)arg2 position:(id)arg3 algorithm:(id)arg4 impressionToken:(id)arg5 endpointType:(id)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

