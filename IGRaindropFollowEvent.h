/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropFollowEvent : TBaseStruct {

	NSNumber* __thrift_isFollow;
	NSNumber* __thrift_targetUserId;
	NSNumber* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clickPoint;
	NSString* __thrift_errorMessage;
	NSNumber* __thrift_sectionNumber;
	NSString* __thrift_clusterKey;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithIsFollow:(id)arg1 targetUserId:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(id)arg7 clusterKey:(id)arg8 targetId:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

