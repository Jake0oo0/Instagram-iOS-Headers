
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGRegistrationFlowViewControllerDelegate.h>
#import <Instagram/IGRegistrationFindUsersViewControllerDelegate.h>
#import <Instagram/IGClusterBrowsingV2ViewControllerDelegate.h>

@class IGPeopleFeedViewController, UIBarButtonItem, NSString;

@interface IGRegistrationFlowNavigationController : IGNavigationController <IGRegistrationFlowViewControllerDelegate, IGRegistrationFindUsersViewControllerDelegate, IGClusterBrowsingV2ViewControllerDelegate> {

	char _skipFindFriends;
	char _isClusterBrowsingSkipped;
	char _registerWithFBInfo;
	char _autoLoggedIn;
	char _isSwitchingUsers;
	int _currentStep;
	IGPeopleFeedViewController* _discoverMorePeopleVC;
	int _findFriendsViewMode;
	int _selectedFindFriendsViewModes;
	UIBarButtonItem* _doneButton;

}

@property (assign,nonatomic) int currentStep;                                                //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) IGPeopleFeedViewController * discoverMorePeopleVC;              //@synthesize discoverMorePeopleVC=_discoverMorePeopleVC - In the implementation block
@property (assign,nonatomic) int findFriendsViewMode;                                        //@synthesize findFriendsViewMode=_findFriendsViewMode - In the implementation block
@property (assign,nonatomic) int selectedFindFriendsViewModes;                               //@synthesize selectedFindFriendsViewModes=_selectedFindFriendsViewModes - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                   //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) char skipFindFriends;                                           //@synthesize skipFindFriends=_skipFindFriends - In the implementation block
@property (assign,nonatomic) char isClusterBrowsingSkipped;                                  //@synthesize isClusterBrowsingSkipped=_isClusterBrowsingSkipped - In the implementation block
@property (assign,nonatomic) char registerWithFBInfo;                                        //@synthesize registerWithFBInfo=_registerWithFBInfo - In the implementation block
@property (assign,nonatomic) char autoLoggedIn;                                              //@synthesize autoLoggedIn=_autoLoggedIn - In the implementation block
@property (assign,nonatomic) char isSwitchingUsers;                                          //@synthesize isSwitchingUsers=_isSwitchingUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clusterBrowsingV2ViewControllerDidSkip:(id)arg1 ;
-(void)clusterBrowsingV2ViewController:(id)arg1 willContinueToViewController:(id)arg2 ;
-(void)onDoneButtonTapped;
-(void)continueRegistration;
-(void)registrationFindUsersViewController:(id)arg1 didSelectSource:(int)arg2 ;
-(void)registrationFindUsersViewControllerDidSkip:(id)arg1 ;
-(void)registrationFindUsersViewControllerDidContinue:(id)arg1 ;
-(void)setSelectedFindFriendsViewModes:(int)arg1 ;
-(void)setFindFriendsViewMode:(int)arg1 ;
-(int)findFriendsViewMode;
-(int)selectedFindFriendsViewModes;
-(char)shouldShowClusterBrowsing;
-(id)newClusterBrowsingVC;
-(char)shouldShowFindMorePeople;
-(IGPeopleFeedViewController *)discoverMorePeopleVC;
-(char)isClusterBrowsingSkipped;
-(char)isSwitchingUsers;
-(void)setIsClusterBrowsingSkipped:(char)arg1 ;
-(void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2 ;
-(void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2 ;
-(char)registrationFlowControllerIsSwitchingUsers:(id)arg1 ;
-(void)showFindFriendsControllerWithHiddenBackButton:(char)arg1 autoload:(int)arg2 showProfilePicture:(char)arg3 ;
-(void)setDiscoverMorePeopleVC:(IGPeopleFeedViewController *)arg1 ;
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

