/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropTapLocationResultEvent : TBaseStruct {

	NSNumber* __thrift_selectedPosition;
	NSString* __thrift_placeId;
	NSMutableArray* __thrift_resultList;
	NSString* __thrift_searchSessionId;

}
-(id)toDict;
-(id)initWithSelectedPosition:(id)arg1 placeId:(id)arg2 resultList:(NSMutableArray*)arg3 searchSessionId:(id)arg4 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

