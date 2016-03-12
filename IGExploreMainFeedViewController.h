
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGExploreMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGExploreMainFeedLayoutDataSource.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class IGListCollectionView, IGListAdapter, IGExploreSearchViewController, IGExploreMainFeedNetworkSource, IGExploreMainFeedLayout, NSMutableArray, IGSpinnerModel, NSMutableDictionary, IGFeedVideoCellManager, IGPullToRefreshViewManager, NSString, IGExploreMainFeedPreviewingHandler, NSIndexPath, IGFeedFocusCoordinator, IGChannelFocusCoordinator, NSMutableSet, IGExploreMainFeedLogger, NSArray;

@interface IGExploreMainFeedViewController : IGViewController <IGExploreMainFeedNetworkSourceDelegate, IGFeedNetworkSourceDelegate, IGExploreMainFeedLayoutDataSource, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGExploreSearchControllerDelegate, IGPullToRefreshProtocol, IGSearchOriginControllerProtocol, IGEventViewerViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	char _showSearchOnAppear;
	char _showSearchOnViewDidAppear;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGExploreSearchViewController* _searchController;
	IGExploreMainFeedNetworkSource* _networkSource;
	IGExploreMainFeedLayout* _feedLayout;
	NSMutableArray* _items;
	IGSpinnerModel* _spinner;
	NSMutableDictionary* _cachedItemPositions;
	IGFeedVideoCellManager* _videoCellManager;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	NSString* _currentUserPK;
	IGExploreMainFeedPreviewingHandler* _previewDelegate;
	NSIndexPath* _currentActiveChannelIndexPath;
	IGFeedFocusCoordinator* _mediaFocusCoordinator;
	IGChannelFocusCoordinator* _channelFocusCoordinator;
	NSMutableSet* _loggedImpression;
	IGExploreMainFeedLogger* _logger;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                      //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) IGExploreSearchViewController * searchController;                 //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) char showSearchOnAppear;                                            //@synthesize showSearchOnAppear=_showSearchOnAppear - In the implementation block
@property (assign,nonatomic) char showSearchOnViewDidAppear;                                     //@synthesize showSearchOnViewDidAppear=_showSearchOnViewDidAppear - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedNetworkSource * networkSource;                   //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedLayout * feedLayout;                               //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGSpinnerModel * spinner;                                         //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedItemPositions;                          //@synthesize cachedItemPositions=_cachedItemPositions - In the implementation block
@property (nonatomic,retain) IGFeedVideoCellManager * videoCellManager;                          //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;                //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,readonly) NSString * currentUserPK;                                         //@synthesize currentUserPK=_currentUserPK - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedPreviewingHandler * previewDelegate;               //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentActiveChannelIndexPath;                        //@synthesize currentActiveChannelIndexPath=_currentActiveChannelIndexPath - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * mediaFocusCoordinator;                   //@synthesize mediaFocusCoordinator=_mediaFocusCoordinator - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * channelFocusCoordinator;              //@synthesize channelFocusCoordinator=_channelFocusCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpression;                                    //@synthesize loggedImpression=_loggedImpression - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedLogger * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(id)additionalParamsForFetchRequest;
-(void)setupCollectionViewAndAdapter;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(char)enableNavState;
-(IGExploreMainFeedNetworkSource *)networkSource;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(NSString *)currentUserPK;
-(void)didDismissEventViewerViewController:(id)arg1 ;
-(void)searchControllerSearchBarTapped:(id)arg1 ;
-(void)searchControllerCancelButtonTapped:(id)arg1 ;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2 ;
-(void)searchControllerPeopleIconTapped:(id)arg1 ;
-(void)navigationControllerWillShowSearch;
-(void)prepareForPopToRootTransition;
-(char)showSearchOnViewDidAppear;
-(void)setShowSearchOnViewDidAppear:(char)arg1 ;
-(char)showSearchOnAppear;
-(void)setShowSearchOnAppear:(char)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGChannelFocusCoordinator *)channelFocusCoordinator;
-(CGSize)collectionView:(id)arg1 exploreMainFeedLayout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadInitialExploreItems:(id)arg2 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadMoreExploreItems:(id)arg2 ;
-(void)setupLocationManager;
-(void)setupVideoCellManager;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)setupPreview;
-(void)syncWithContexualFeedAndImmersiveViewer;
-(void)onTabBarTapped:(id)arg1 ;
-(void)updateFeedWithItems:(id)arg1 ;
-(void)removeLastSpinner;
-(id)generateRankToken;
-(id)generateLocation;
-(IGFeedFocusCoordinator *)mediaFocusCoordinator;
-(void)setCurrentActiveChannelIndexPath:(NSIndexPath *)arg1 ;
-(NSMutableSet *)loggedImpression;
-(NSRange)positionForItemAtIndexPath:(id)arg1 ;
-(void)loadNextPage;
-(void)scrollViewDidEndScrolling;
-(NSIndexPath *)currentActiveChannelIndexPath;
-(void)setVideoCellManager:(IGFeedVideoCellManager *)arg1 ;
-(void)updateChannelFromImmersiveViewer;
-(id)targetMediaFromContexualFeedPost:(id)arg1 ;
-(void)playVideoForChannel:(id)arg1 startTime:(float)arg2 ;
-(NSMutableDictionary *)cachedItemPositions;
-(void)updateCacheWithPosition:(NSRange)arg1 atIndexPath:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)setCachedItemPositions:(NSMutableDictionary *)arg1 ;
-(void)setLoggedImpression:(NSMutableSet *)arg1 ;
-(IGExploreMainFeedLogger *)logger;
-(void)setLogger:(IGExploreMainFeedLogger *)arg1 ;
-(IGExploreMainFeedPreviewingHandler *)previewDelegate;
-(void)setPreviewDelegate:(IGExploreMainFeedPreviewingHandler *)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(int)viewType;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(IGExploreSearchViewController *)searchController;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(IGSpinnerModel *)spinner;
-(void)setFeedLayout:(IGExploreMainFeedLayout *)arg1 ;
-(IGExploreMainFeedLayout *)feedLayout;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(NSArray *)allItems;
@end

