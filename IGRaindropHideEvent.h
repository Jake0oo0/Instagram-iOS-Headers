/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

