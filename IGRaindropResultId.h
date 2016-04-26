/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber, IGRaindropPlace;

@interface IGRaindropResultId : TBaseStruct {

	NSString* __thrift_hashtagId;
	NSNumber* __thrift_userId;
	IGRaindropPlace* __thrift_placeId_DEPRECATED;
	NSString* __thrift_placeId;

}
-(id)toDict;
-(id)initWithHashtagId:(id)arg1 ;
-(id)initWithUserId:(id)arg1 ;
-(id)initWithPlaceId_DEPRECATED:(id)arg1 ;
-(id)initWithPlaceId:(id)arg1 ;
-(id)placeId_DEPRECATED;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)userId;
-(id)placeId;
@end

