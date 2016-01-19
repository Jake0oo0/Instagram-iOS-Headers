/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class IGVKFriendsHelper, NSString;

@interface IGVKFriendsViewController : IGFindUsersViewController <IGFindFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	IGVKFriendsHelper* _helper;

}

@property (nonatomic,retain) IGVKFriendsHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)authorizeAndFetchUsers;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(id)newFindUsersView;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(IGVKFriendsHelper *)helper;
-(void)setHelper:(IGVKFriendsHelper *)arg1 ;
-(void)dealloc;
-(id)init;
@end

