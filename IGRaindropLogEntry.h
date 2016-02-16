/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, IGRaindropDevice, IGRaindropActivitySession, IGRaindropNavState, IGRaindropEvent, NSString, NSData;

@interface IGRaindropLogEntry : TBaseStruct {

	NSNumber* __thrift_clientUnixTimestampMillis;
	NSNumber* __thrift_fbId;
	NSNumber* __thrift_userId;
	IGRaindropDevice* __thrift_deviceInfo;
	IGRaindropActivitySession* __thrift_activitySession;
	IGRaindropNavState* __thrift_navState;
	IGRaindropEvent* __thrift_event;
	NSString* __thrift_eventName;
	NSData* __thrift_eventData;
	NSString* __thrift_testSessionID;

}
-(id)toDict;
-(id)navState;
-(id)initWithClientUnixTimestampMillis:(id)arg1 fbId:(id)arg2 userId:(id)arg3 deviceInfo:(id)arg4 activitySession:(id)arg5 navState:(id)arg6 event:(id)arg7 eventName:(id)arg8 eventData:(id)arg9 testSessionID:(id)arg10 ;
-(id)clientUnixTimestampMillis;
-(id)init;
-(id)description;
-(id)event;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)userId;
@end

