/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGPageMediaTracker : NSObject
+(id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
+(void)mediaDidAppearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidDisappearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidStartViewingForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(id)tracker;
+(id)eventWithSuffix:(id)arg1 ;
+(id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
@end

