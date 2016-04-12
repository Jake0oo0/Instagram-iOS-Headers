/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUnifiedWebViewControllerSharingLogger.h>

@class IGFeedItem, IGSponsoredFeedItemTracker;

@interface IGUnifiedWebViewControllerStandardSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLogger> {

	IGFeedItem* _feedItem;
	IGSponsoredFeedItemTracker* _tracker;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                             //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGSponsoredFeedItemTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(IGSponsoredFeedItemTracker *)tracker;
-(void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2 ;
-(void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(char)arg4 returnedItems:(id)arg5 activityError:(id)arg6 ;
-(id)concatenatedURLsForItems:(id)arg1 ;
@end

