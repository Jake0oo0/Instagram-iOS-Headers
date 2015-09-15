/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class IGFacebookFriendsHelper, NSString;

@interface IGFacebookFriendsViewController : IGFindUsersViewController <IGFindFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	IGFacebookFriendsHelper* _helper;

}

@property (nonatomic,retain) IGFacebookFriendsHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(id)newFindUsersView;
-(void)authorizeAndFetchUsers;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(IGFacebookFriendsHelper *)helper;
-(void)setHelper:(IGFacebookFriendsHelper *)arg1 ;
-(void)dealloc;
-(id)init;
@end

