/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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

