/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropUser, NSNumber, NSString;

@interface IGRaindropHideEvent : TBaseStruct {

	IGRaindropUser* __thrift_targetUser;
	NSNumber* __thrift_sectionNumber;
	NSNumber* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterkey;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithTargetUser:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clusterkey:(id)arg5 targetId:(id)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

