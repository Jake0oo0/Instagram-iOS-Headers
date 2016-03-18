
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGFeedStatusRestrictedViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGSwitchUsersControllerDelegate.h>
#import <Instagram/IGDirectedNUXViewDelegate.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@protocol IGMegaphonePresenterProtocol;
@class UIBarButtonItem, IGUser, IGUserDetailHeaderView, IGNuxTapOnCameraView, UIView, UILabel, NSDictionary, NSArray, IGSwitchUsersTitleButton, IGSwitchUsersController, IGFeedItemPreviewingHandler, IGDirectedNUXView, UITapGestureRecognizer, NSString;

@interface IGUserDetailViewController : IGFeedViewController_DEPRECATED <IGFeedStatusRestrictedViewDelegate, IGRaindropAnalyticsDelegate, IGSwitchUsersControllerDelegate, IGDirectedNUXViewDelegate, IGMegaphonePresenterDelegate, IGAnalyticsModule> {

	UIBarButtonItem* _configureBarButton;
	UIBarButtonItem* _insightsBarButton;
	char _enableAppColdStartLogging;
	char _needsFeedRefresh;
	char _hasLoggedAdditionalUserDataLoadOnce;
	char _displayingSwitchUsersTableView;
	IGUser* _user;
	IGUserDetailHeaderView* _headerView;
	IGNuxTapOnCameraView* _emptyFeedNUX;
	UIView* _blockedFooterView;
	UILabel* _emptyFeedLabel;
	NSDictionary* _userRestrictionData;
	UIView* _genericHeaderMegaphoneView;
	NSArray* _accessibleElements;
	UIView* _overlayViewForTabBar;
	UIView* _overlayForMainView;
	IGSwitchUsersTitleButton* _titleButton;
	IGSwitchUsersController* _switchUsersController;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	IGDirectedNUXView* _NUXView;
	UITapGestureRecognizer* _mainViewNUXDismissTapGuestureRecognizer;
	UITapGestureRecognizer* _titleViewNUXDismissTapGuestureRecognizer;
	id<IGMegaphonePresenterProtocol> _megaphonePresenter;
	UIBarButtonItem* _envSwitchButtonItem;

}

@property (nonatomic,retain) IGUser * user;                                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char enableAppColdStartLogging;                                                 //@synthesize enableAppColdStartLogging=_enableAppColdStartLogging - In the implementation block
@property (nonatomic,retain) IGUserDetailHeaderView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView * emptyFeedNUX;                                            //@synthesize emptyFeedNUX=_emptyFeedNUX - In the implementation block
@property (assign,nonatomic) char needsFeedRefresh;                                                          //@synthesize needsFeedRefresh=_needsFeedRefresh - In the implementation block
@property (nonatomic,retain) UIView * blockedFooterView;                                                     //@synthesize blockedFooterView=_blockedFooterView - In the implementation block
@property (nonatomic,retain) UILabel * emptyFeedLabel;                                                       //@synthesize emptyFeedLabel=_emptyFeedLabel - In the implementation block
@property (assign,nonatomic) char hasLoggedAdditionalUserDataLoadOnce;                                       //@synthesize hasLoggedAdditionalUserDataLoadOnce=_hasLoggedAdditionalUserDataLoadOnce - In the implementation block
@property (nonatomic,retain) NSDictionary * userRestrictionData;                                             //@synthesize userRestrictionData=_userRestrictionData - In the implementation block
@property (nonatomic,retain) UIView * genericHeaderMegaphoneView;                                            //@synthesize genericHeaderMegaphoneView=_genericHeaderMegaphoneView - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                                   //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (nonatomic,retain) UIView * overlayViewForTabBar;                                                  //@synthesize overlayViewForTabBar=_overlayViewForTabBar - In the implementation block
@property (nonatomic,retain) UIView * overlayForMainView;                                                    //@synthesize overlayForMainView=_overlayForMainView - In the implementation block
@property (nonatomic,retain) IGSwitchUsersTitleButton * titleButton;                                         //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) IGSwitchUsersController * switchUsersController;                                //@synthesize switchUsersController=_switchUsersController - In the implementation block
@property (assign,nonatomic) char displayingSwitchUsersTableView;                                            //@synthesize displayingSwitchUsersTableView=_displayingSwitchUsersTableView - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * NUXView;                                                    //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * mainViewNUXDismissTapGuestureRecognizer;               //@synthesize mainViewNUXDismissTapGuestureRecognizer=_mainViewNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * titleViewNUXDismissTapGuestureRecognizer;              //@synthesize titleViewNUXDismissTapGuestureRecognizer=_titleViewNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,retain) id<IGMegaphonePresenterProtocol> megaphonePresenter;                            //@synthesize megaphonePresenter=_megaphonePresenter - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * envSwitchButtonItem;                                          //@synthesize envSwitchButtonItem=_envSwitchButtonItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)onFriendStatusReceived:(id)arg1 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(IGDirectedNUXView *)NUXView;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(char)enableNavState;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(NSArray *)accessibleElements;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(void)updateScrollFromContextualFeed;
-(void)handleLoadedContentDidChange;
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2 ;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1 ;
-(void)feedStatusViewMarkedUnderageWithResponse:(id)arg1 ;
-(void)feedStatusViewMarkedOverage;
-(void)setMegaphonePresenter:(id<IGMegaphonePresenterProtocol>)arg1 ;
-(id<IGMegaphonePresenterProtocol>)megaphonePresenter;
-(void)animateSwitchUsersTableView;
-(void)setEnableAppColdStartLogging:(char)arg1 ;
-(IGSwitchUsersController *)switchUsersController;
-(void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1 ;
-(void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2 ;
-(void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 ;
-(void)setSwitchUsersController:(IGSwitchUsersController *)arg1 ;
-(void)directedNUXViewDidTap:(id)arg1 ;
-(void)overlayViewTapped:(id)arg1 ;
-(UIView *)overlayForMainView;
-(UIView *)overlayViewForTabBar;
-(void)showPostNotificationsNUX;
-(void)seeAllButtonTappedWithView:(id)arg1 ;
-(void)hideToolTip;
-(void)configureUserDetailFooterView;
-(char)needsFeedRefresh;
-(void)setNeedsFeedRefresh:(char)arg1 ;
-(char)isShowingCurrentUser;
-(void)showPrereleaseIcon;
-(void)updateTitleButtonSize;
-(void)showAccountSwitchingNUX;
-(void)presentOrTearDownCameraNUX;
-(char)displayingSwitchUsersTableView;
-(char)shouldShowCameraNux;
-(IGNuxTapOnCameraView *)emptyFeedNUX;
-(void)setUserRestrictionData:(NSDictionary *)arg1 ;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 ;
-(NSDictionary *)userRestrictionData;
-(UIView *)blockedFooterView;
-(void)setBlockedFooterView:(UIView *)arg1 ;
-(UIView *)genericHeaderMegaphoneView;
-(void)setGenericHeaderMegaphoneView:(UIView *)arg1 ;
-(char)enableAppColdStartLogging;
-(char)hasLoggedAdditionalUserDataLoadOnce;
-(void)setHasLoggedAdditionalUserDataLoadOnce:(char)arg1 ;
-(void)updateNetworkSource;
-(void)onUserInfoReceived:(id)arg1 ;
-(void)updateFeedRestrictionData:(id)arg1 ;
-(void)fetchAdditionalUserData;
-(char)shouldShowFriendStatus;
-(void)checkFriendshipStatus;
-(void)presentFriendshipActionSheet;
-(void)onFriendStatusFailed:(id)arg1 ;
-(void)updateConfigureButtonsForCurrentUser;
-(void)onNeedsFullReload;
-(void)dismissNUX:(id)arg1 ;
-(void)pushAccountSettings;
-(id)insightsBarButton;
-(void)setSwitchUsersTitleView;
-(void)switchUsersControllerResetTableView:(id)arg1 ;
-(void)dismissNUXAnimated:(char)arg1 ;
-(/*^block*/id)friendshipActionSheetCallback;
-(void)pushInsights;
-(void)setEmptyFeedNUX:(IGNuxTapOnCameraView *)arg1 ;
-(void)setDisplayingSwitchUsersTableView:(char)arg1 ;
-(void)showPostNotificationsNUXInner;
-(void)showAccountSwitchingNUXInner;
-(UITapGestureRecognizer *)titleViewNUXDismissTapGuestureRecognizer;
-(UITapGestureRecognizer *)mainViewNUXDismissTapGuestureRecognizer;
-(void)togglePrerelease:(id)arg1 ;
-(UILabel *)emptyFeedLabel;
-(void)setEmptyFeedLabel:(UILabel *)arg1 ;
-(void)setOverlayViewForTabBar:(UIView *)arg1 ;
-(void)setOverlayForMainView:(UIView *)arg1 ;
-(void)setMainViewNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTitleViewNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIBarButtonItem *)envSwitchButtonItem;
-(void)setEnvSwitchButtonItem:(UIBarButtonItem *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)setTitleButton:(IGSwitchUsersTitleButton *)arg1 ;
-(IGSwitchUsersTitleButton *)titleButton;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(IGUserDetailHeaderView *)headerView;
-(void)setHeaderView:(IGUserDetailHeaderView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

