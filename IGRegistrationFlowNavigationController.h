/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:45 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGNavigationController.h>
#import <Instagram/IGRegistrationFlowViewControllerDelegate.h>
#import <Instagram/IGRegistrationFindUsersViewControllerDelegate.h>

@class IGExplorePeopleViewController, UIBarButtonItem, NSString;

@interface IGRegistrationFlowNavigationController : IGNavigationController <IGRegistrationFlowViewControllerDelegate, IGRegistrationFindUsersViewControllerDelegate> {

	char _skipFindFriends;
	char _registerWithFBInfo;
	char _autoLoggedIn;
	char _isSwitchingUsers;
	int _currentStep;
	IGExplorePeopleViewController* _discoverMorePeopleVC;
	int _findFriendsViewMode;
	int _selectedFindFriendsViewModes;
	UIBarButtonItem* _doneButton;

}

@property (assign,nonatomic) int currentStep;                                                   //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) IGExplorePeopleViewController * discoverMorePeopleVC;              //@synthesize discoverMorePeopleVC=_discoverMorePeopleVC - In the implementation block
@property (assign,nonatomic) int findFriendsViewMode;                                           //@synthesize findFriendsViewMode=_findFriendsViewMode - In the implementation block
@property (assign,nonatomic) int selectedFindFriendsViewModes;                                  //@synthesize selectedFindFriendsViewModes=_selectedFindFriendsViewModes - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) char skipFindFriends;                                              //@synthesize skipFindFriends=_skipFindFriends - In the implementation block
@property (assign,nonatomic) char registerWithFBInfo;                                           //@synthesize registerWithFBInfo=_registerWithFBInfo - In the implementation block
@property (assign,nonatomic) char autoLoggedIn;                                                 //@synthesize autoLoggedIn=_autoLoggedIn - In the implementation block
@property (assign,nonatomic) char isSwitchingUsers;                                             //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onDoneButtonTapped;
-(void)continueRegistration;
-(void)registrationFindUsersViewController:(id)arg1 didSelectSource:(int)arg2 ;
-(void)registrationFindUsersViewControllerDidSkip:(id)arg1 ;
-(void)registrationFindUsersViewControllerDidContinue:(id)arg1 ;
-(void)setSelectedFindFriendsViewModes:(int)arg1 ;
-(void)setFindFriendsViewMode:(int)arg1 ;
-(int)findFriendsViewMode;
-(int)selectedFindFriendsViewModes;
-(void)showFindFriendsControllerWithHiddenBackButton:(char)arg1 autoload:(int)arg2 showProfilePicture:(char)arg3 ;
-(char)shouldShowClusterBrowsing;
-(id)newClusterBrowsingVC;
-(char)shouldShowFindMorePeople;
-(IGExplorePeopleViewController *)discoverMorePeopleVC;
-(char)isSwitchingUsers;
-(void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2 ;
-(char)registrationFlowControllerIsSwitchingUsers:(id)arg1 ;
-(void)setDiscoverMorePeopleVC:(IGExplorePeopleViewController *)arg1 ;
-(void)setIsSwitchingUsers:(char)arg1 ;
-(void)setCurrentStep:(int)arg1 ;
-(char)registerWithFBInfo;
-(char)autoLoggedIn;
-(void)setRegisterWithFBInfo:(char)arg1 ;
-(void)setAutoLoggedIn:(char)arg1 ;
-(void)setSkipFindFriends:(char)arg1 ;
-(id)initWithPhoneRegistration:(char)arg1 isSwitchingUsers:(char)arg2 ;
-(char)skipFindFriends;
-(void)viewDidLoad;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(int)currentStep;
@end

