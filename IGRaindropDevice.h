/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropDevice : TBaseStruct {

	NSString* __thrift_appVersion;
	int __thrift_platformType;
	NSString* __thrift_platformSoftwareVersion;
	NSString* __thrift_platformHardwareVersion;
	NSString* __thrift_deviceUUID;
	NSString* __thrift_deviceName;

}
-(id)initWithAppVersion:(id)arg1 platformType:(int)arg2 platformSoftwareVersion:(id)arg3 platformHardwareVersion:(id)arg4 deviceUUID:(id)arg5 deviceName:(id)arg6 ;
-(id)toDict;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

