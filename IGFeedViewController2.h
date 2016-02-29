/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>

@protocol IGFeedConfigurationType, IGFeedMegaphoneProvider;
@class IGListAdapter, IGListCollectionView, IGFeedNetworkSource, IGUser, IGFeedVideoCellManager, IGCollectionViewVisibility, IGFeedHeartAnimator, IGFeedStatusView, IGPullToRefreshViewManager, IGFeedFocusCoordinator, IGFeedViewControllerTracker, IGFollowAccountListModel, NSString, IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo;

@interface IGFeedViewController2 : IGViewController <UICollectionViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedNetworkSourceDelegate, IGFeedItemLoggingProviderDelegate, IGAnalyticsRaindropProtocol, IGPullToRefreshProtocol, IGMegaphoneItemControllerDelegate> {

	char _hasScrolledToFocusedItem;
	IGListAdapter* _listAdapter;
	IGListCollectionView* _collectionView;
	IGFeedNetworkSource* _feedNetworkSource;
	id<IGFeedConfigurationType> _configuration;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedStatusView* _feedStatusView;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	id<IGFeedMegaphoneProvider> _megaphoneProvider;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGFeedViewControllerTracker* _impressionTracker;
	IGFollowAccountListModel* _followAccountListModel;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                            //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                               //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                          //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;              //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                  //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;                  //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,readonly) id<IGFeedMegaphoneProvider> megaphoneProvider;                      //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                          //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char hasScrolledToFocusedItem;                                        //@synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerTracker * impressionTracker;                    //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (nonatomic,retain) IGFollowAccountListModel * followAccountListModel;                    //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(void)setupCollectionViewAndAdapter;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)scrollViewDidEndScrolling;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(IGFeedStatusView *)feedStatusView;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(IGFollowAccountListModel *)followAccountListModel;
-(IGFeedHeartAnimator *)heartAnimator;
-(void)onRefreshButton:(id)arg1 ;
-(void)refreshDataIfNotFullyLoaded;
-(void)layoutCollectionView;
-(void)scrollToFocusedItem;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)updateFullViewImpressionTracker;
-(void)updateImpressionTrackers;
-(IGFeedViewControllerTracker *)impressionTracker;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(char)hasScrolledToFocusedItem;
-(void)setHasScrolledToFocusedItem:(char)arg1 ;
-(void)fetchNextPage;
-(id<IGFeedMegaphoneProvider>)megaphoneProvider;
-(void)updateFeedState;
-(void)setFollowAccountListModel:(IGFollowAccountListModel *)arg1 ;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 configuration:(id)arg2 currentUser:(id)arg3 focusCoordinator:(id)arg4 megaphoneProvider:(id)arg5 ;
-(void)updateRefreshButton;
-(void)updateTitle;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id<IGFeedConfigurationType>)configuration;
-(id)refreshButton;
-(IGUser *)currentUser;
-(void)refresh;
@end

