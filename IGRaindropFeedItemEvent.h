/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropFeedItemEvent : TBaseStruct {

	int __thrift_feedItemEventType;
	NSString* __thrift_followStatus;
	NSString* __thrift_mediaId;
	NSString* __thrift_trackToken;
	NSNumber* __thrift_timeSpent;

}
-(id)toDict;
-(id)initWithFeedItemEventType:(int)arg1 followStatus:(id)arg2 mediaId:(id)arg3 trackToken:(id)arg4 timeSpent:(id)arg5 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

