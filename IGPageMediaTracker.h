/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:23 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGPageMediaTracker : NSObject
+(id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
+(void)mediaDidAppearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidDisappearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidStartViewingForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(id)eventWithSuffix:(id)arg1 ;
+(id)tracker;
+(id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
@end

