/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

