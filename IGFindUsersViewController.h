
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>
#import <Instagram/IGFindUsersViewDelegate.h>

@class IGFindUsersView, UIBarButtonItem, IGFindUsersViewDataSource, IGFeedStatusView, IGPullToRefreshViewManager, NSString;

@interface IGFindUsersViewController : IGViewController <IGPullToRefreshProtocol, IGFeedStatusViewDynamicHeightProtocol, IGFindUsersViewDelegate> {

	char _loading;
	IGFindUsersView* _usersView;
	UIBarButtonItem* _refreshButton;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	IGFeedStatusView* _feedStatusView;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;

}

@property (nonatomic,retain) IGFindUsersView * usersView;                                        //@synthesize usersView=_usersView - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                      //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                    //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;                //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                  //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsExtras;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(void)authorizeAndFetchUsers;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)didAuthorizeWithDataRequest:(id)arg1 ;
-(void)didFailToAuthorizeWithReason:(id)arg1 ;
-(id)newFindUsersView;
-(void)updateNavigationRightBarButtonItem;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(id)newFindUsersViewDataSource;
-(IGFindUsersView *)usersView;
-(void)findUsersView:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)findUsersView:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndDragging:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndScrolling:(id)arg2 ;
-(void)findUsersView:(id)arg1 didTapOnItemWithMediaID:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)fetchUsers;
-(void)showErrorLoadMessageIfPossible:(id)arg1 ;
-(void)onCloseTapped:(id)arg1 ;
-(void)setUsersView:(IGFindUsersView *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
-(void)setLoading:(char)arg1 ;
@end

