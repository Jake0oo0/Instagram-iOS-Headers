/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class IGRaindropDevice, IGRaindropActivitySession, IGRaindropNavState, IGRaindropEvent, NSString;

@interface IGRaindropLogEntry : TBaseStruct <TBase, NSCoding> {

	long long __thrift_clientUnixTimestampMillis;
	long long __thrift_fbId;
	long long __thrift_userId;
	IGRaindropDevice* __thrift_deviceInfo;
	IGRaindropActivitySession* __thrift_activitySession;
	IGRaindropNavState* __thrift_navState;
	IGRaindropEvent* __thrift_event;
	char __thrift_clientUnixTimestampMillis_set;
	char __thrift_fbId_set;
	char __thrift_userId_set;
	char __thrift_deviceInfo_set;
	char __thrift_activitySession_set;
	char __thrift_navState_set;
	char __thrift_event_set;

}

@property (assign,nonatomic) long long clientUnixTimestampMillis; 
@property (assign,nonatomic) long long fbId; 
@property (assign,nonatomic) long long userId; 
@property (nonatomic,retain) IGRaindropDevice * deviceInfo; 
@property (nonatomic,retain) IGRaindropActivitySession * activitySession; 
@property (nonatomic,retain) IGRaindropNavState * navState; 
@property (nonatomic,retain) IGRaindropEvent * event; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setNavState:(IGRaindropNavState *)arg1 ;
-(IGRaindropNavState *)navState;
-(void)setClientUnixTimestampMillis:(long long)arg1 ;
-(void)setActivitySession:(IGRaindropActivitySession *)arg1 ;
-(long long)clientUnixTimestampMillis;
-(void)read:(id)arg1 ;
-(char)userIdIsSet;
-(void)unsetUserId;
-(void)setFbId:(long long)arg1 ;
-(id)initWithClientUnixTimestampMillis:(long long)arg1 fbId:(long long)arg2 userId:(long long)arg3 deviceInfo:(id)arg4 activitySession:(id)arg5 navState:(id)arg6 event:(id)arg7 ;
-(char)clientUnixTimestampMillisIsSet;
-(void)unsetClientUnixTimestampMillis;
-(long long)fbId;
-(char)fbIdIsSet;
-(void)unsetFbId;
-(char)deviceInfoIsSet;
-(void)unsetDeviceInfo;
-(IGRaindropActivitySession *)activitySession;
-(char)activitySessionIsSet;
-(void)unsetActivitySession;
-(char)navStateIsSet;
-(void)unsetNavState;
-(char)eventIsSet;
-(void)unsetEvent;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setEvent:(IGRaindropEvent *)arg1 ;
-(IGRaindropEvent *)event;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
-(void)setDeviceInfo:(IGRaindropDevice *)arg1 ;
-(IGRaindropDevice *)deviceInfo;
@end

