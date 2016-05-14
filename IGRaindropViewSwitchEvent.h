/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropNavState, NSString;

@interface IGRaindropViewSwitchEvent : TBaseStruct {

	int __thrift_fromViewType;
	int __thrift_toViewType;
	IGRaindropNavState* __thrift_fromNavState;
	NSString* __thrift_clickPoint;
	int __thrift_fromViewSubType;
	int __thrift_toViewSubType;
	NSString* __thrift_toEntityId;

}
-(id)toDict;
-(id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4 fromViewSubType:(int)arg5 toViewSubType:(int)arg6 toEntityId:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

