/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropUser : TBaseStruct {

	NSNumber* __thrift_userId;
	NSNumber* __thrift_isPrivate;
	NSString* __thrift_type;

}
-(id)toDict;
-(id)initWithUserId:(id)arg1 isPrivate:(id)arg2 type:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

