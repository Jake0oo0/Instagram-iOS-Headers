
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGFindUsersViewDataSourceDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGFindFriendsHelperProtocol;
@class NSString, IGListCollectionView, IGListAdapter, IGFindUsersViewDataSource, IGPullToRefreshViewManager, IGFeedStatusView, IGFollowAllHeaderItem, NSArray;

@interface IGFindUsersViewController2 : IGViewController <IGFindFriendsHelperDelegate, IGFindUsersViewDataSourceDelegate, IGPullToRefreshProtocol, IGListAdapterDataSource, IGListAdapterDelegate, IGRaindropAnalyticsDelegate, UICollectionViewDelegate> {

	char _loading;
	NSString* _analyticsModule;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGFindUsersViewDataSource* _dataSource;
	id<IGFindFriendsHelperProtocol> _helper;
	unsigned _maxThumbnails;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGFeedStatusView* _emptyStateView;
	IGFollowAllHeaderItem* _followAllHeaderItem;
	NSArray* _userList;
	int _lastThumbnailFetchOffset;

}

@property (nonatomic,copy) NSString * analyticsModule;                                           //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id<IGFindFriendsHelperProtocol> helper;                             //@synthesize helper=_helper - In the implementation block
@property (assign,nonatomic) unsigned maxThumbnails;                                             //@synthesize maxThumbnails=_maxThumbnails - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                      //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * emptyStateView;                                  //@synthesize emptyStateView=_emptyStateView - In the implementation block
@property (nonatomic,retain) IGFollowAllHeaderItem * followAllHeaderItem;                        //@synthesize followAllHeaderItem=_followAllHeaderItem - In the implementation block
@property (nonatomic,copy) NSArray * userList;                                                   //@synthesize userList=_userList - In the implementation block
@property (assign,nonatomic) int lastThumbnailFetchOffset;                                       //@synthesize lastThumbnailFetchOffset=_lastThumbnailFetchOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(unsigned)maxThumbnails;
-(void)setMaxThumbnails:(unsigned)arg1 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 helper:(id)arg2 maxThumbnails:(unsigned)arg3 ;
-(void)handleEmptyStateViewTap;
-(void)setEmptyStateView:(IGFeedStatusView *)arg1 ;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)authorizeAndFetchUsers;
-(IGFeedStatusView *)emptyStateView;
-(int)lastThumbnailFetchOffset;
-(void)fetchThumbnailURLsIfNeeded;
-(void)fetchFollowStatusForUsers:(id)arg1 ;
-(void)setUserList:(NSArray *)arg1 ;
-(void)setFollowAllHeaderItem:(IGFollowAllHeaderItem *)arg1 ;
-(NSArray *)userList;
-(IGFollowAllHeaderItem *)followAllHeaderItem;
-(char)hasViewPermissionForUser:(id)arg1 ;
-(char)shouldFetchThumbnailURLsForUserInfo:(id)arg1 ;
-(void)setLastThumbnailFetchOffset:(int)arg1 ;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(id<IGFindFriendsHelperProtocol>)helper;
-(void)setHelper:(id<IGFindFriendsHelperProtocol>)arg1 ;
-(void)setDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGFindUsersViewDataSource *)dataSource;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setLoading:(char)arg1 ;
-(void)finishLoading;
@end

