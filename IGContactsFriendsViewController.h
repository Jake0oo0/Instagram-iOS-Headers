/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGContactsFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGContactsFriendsViewControllerDelegate;
@class IGContactsFriendsHelper, UIBarButtonItem, NSString;

@interface IGContactsFriendsViewController : IGFindUsersViewController <IGActionSheetDelegate, IGContactsFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	id<IGContactsFriendsViewControllerDelegate> _delegate;
	IGContactsFriendsHelper* _helper;
	UIBarButtonItem* _configureButton;

}

@property (assign,nonatomic,__weak) id<IGContactsFriendsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGContactsFriendsHelper * helper;                                         //@synthesize helper=_helper - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * configureButton;                                        //@synthesize configureButton=_configureButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)authorizeAndFetchUsers;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(void)contactsFriendsHelperDidTapLearnMore:(id)arg1 ;
-(UIBarButtonItem *)configureButton;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)onConfigureButtonTapped:(id)arg1 ;
-(void)disconnectContacts;
-(void)setConfigureButton:(UIBarButtonItem *)arg1 ;
-(IGContactsFriendsHelper *)helper;
-(void)setHelper:(IGContactsFriendsHelper *)arg1 ;
-(void)setDelegate:(id<IGContactsFriendsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGContactsFriendsViewControllerDelegate>)delegate;
@end

