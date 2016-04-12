/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGFeedViewControllerFactory : NSObject
+(id)singleFeedViewControllerWithNetworkSource:(id)arg1 ;
+(id)contextualFeedViewControllerWithNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showPullToRefresh:(char)arg5 focusCoordinator:(id)arg6 showExploreContext:(char)arg7 mode:(int)arg8 entryPoint:(int)arg9 ;
+(char)useNewContextualFeed;
+(void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(id)mainFeedViewController;
+(id)albumFeedViewControllerWithUser:(id)arg1 ;
@end

