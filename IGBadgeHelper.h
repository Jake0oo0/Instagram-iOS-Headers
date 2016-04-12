/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	NSMutableArray* _updatedBadgeNames;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 shouldHoldUpdates:(char)arg4 ;
-(void)performBadgeUpdates;
-(int)totalBadgeCount;
-(void)fetchBadgesInfoWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(id)init;
@end

