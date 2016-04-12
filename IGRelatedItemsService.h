/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGService;

@interface IGRelatedItemsService : NSObject {

	IGService* _service;

}

@property (nonatomic,retain) IGService * service;              //@synthesize service=_service - In the implementation block
-(void)requestRelatedItemsForItem:(id)arg1 visitedItems:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)requestParametersWithVisitedItems:(id)arg1 relatedTypes:(id)arg2 ;
-(id)JSONFromVisitedItems:(id)arg1 ;
-(id)JSONStringFromObject:(id)arg1 ;
-(id)init;
-(IGService *)service;
-(id)initWithService:(id)arg1 ;
-(void)setService:(IGService *)arg1 ;
@end

