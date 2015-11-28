
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

