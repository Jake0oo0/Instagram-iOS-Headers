
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedNetworkSourceViewController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGFeedItemAlbumCellDelegate.h>
#import <Instagram/IGFeedItemAlbumCell2Delegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGModernWebViewControllerDelegate.h>
#import <Instagram/IGFeedItemActionCellDelegate.h>
#import <Instagram/IGFeedItemAppHeaderDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGFeedItemPhotoCellDelegate.h>
#import <Instagram/IGFeedSectionVisibilityTrackerDelegate.h>
#import <Instagram/IGUnifiedWebViewControllerBrowsingLifeCycleDelegate.h>
#import <Instagram/IGFeedItemPivotGridCellDelegate.h>
#import <Instagram/IGFeedVideoCellInteractionDelegate.h>
#import <Instagram/IGFeedVideoCellAnalyticsDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGFeedCollectionViewLayoutDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>
#import <Instagram/IGCollectionViewControllerDataSource.h>

@class IGImagePreparer, NSMutableArray, IGFeedFocusCoordinator, NSIndexPath, IGFeedCollectionViewLayoutDataSource, NSArray, IGFullViewImpressionTracker, IGItemVisibilityTracker, IGFeedItem, IGStoreProductSessionManager, IGFeedItemViewingSessionManager, IGFeedUsertagManager, IGCollectionViewVisibility, IGFeedVideoCellManager, NSMutableDictionary, IGFeedHeartAnimator, IGFeedDataSource, IGFeedPreviewingHandler, IGComposedWebViewLogger, IGComposedWebViewSharingLogger, NSString;

@interface IGFeedViewController_DEPRECATED : IGFeedNetworkSourceViewController <IGActionSheetDelegate, IGFeedPromotionBannerDelegate, IGUserInTagDisplayDelegate, IGFeedItemAlbumCellDelegate, IGFeedItemAlbumCell2Delegate, IGFeedItemPageCellDelegate, IGItemVisibilityTrackerDelegate, IGFeedItemLoggingProviderDelegate, IGModernWebViewControllerDelegate, IGFeedItemActionCellDelegate, IGFeedItemAppHeaderDelegate, IGFeedItemHeaderDelegate, IGFeedItemTextCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedSectionVisibilityTrackerDelegate, IGUnifiedWebViewControllerBrowsingLifeCycleDelegate, IGFeedItemPivotGridCellDelegate, IGFeedVideoCellInteractionDelegate, IGFeedVideoCellAnalyticsDelegate, IGAnalyticsModule, IGFeedCollectionViewLayoutDelegate, IGRaindropAnalyticsDelegate, IGBugReportingProtocol, IGCollectionViewControllerDataSource> {

	IGImagePreparer* _imagePreparer;
	NSMutableArray* _addedBannerViews;
	char _visibilityTrackingDisabled;
	char _viewVisible;
	int _feedLayout;
	IGFeedFocusCoordinator* _focusCoordinator;
	NSIndexPath* _currentActionCellIndexPath;
	IGFeedCollectionViewLayoutDataSource* _layoutDataSource;
	NSArray* _visibilityTrackers;
	IGFullViewImpressionTracker* _fullViewImpressionTracker;
	IGItemVisibilityTracker* _collectionViewContentsVisibility;
	IGFeedItem* _feedItemForWebview;
	IGStoreProductSessionManager* _storeProductManager;
	IGFeedItemViewingSessionManager* _viewingSessionManager;
	IGFeedUsertagManager* _usertagManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedVideoCellManager* _videoCellManager;
	NSMutableDictionary* _pageCellStates;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedDataSource* _feedDataSource;
	IGFeedPreviewingHandler* _feedPreviewingDelegate;
	IGComposedWebViewLogger* _webViewLogger;
	IGComposedWebViewSharingLogger* _sharingLogger;
	IGFeedItem* _currentActionSheetFeedItem;
	double _webviewUsageStartTime;

}

@property (assign,nonatomic) int feedLayout;                                                                   //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) IGFeedFocusCoordinator * focusCoordinator;                                        //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentActionCellIndexPath;                                         //@synthesize currentActionCellIndexPath=_currentActionCellIndexPath - In the implementation block
@property (nonatomic,readonly) IGFeedCollectionViewLayoutDataSource * layoutDataSource;                        //@synthesize layoutDataSource=_layoutDataSource - In the implementation block
@property (assign,getter=isVisibilityTrackingDisabled,nonatomic) char visibilityTrackingDisabled;              //@synthesize visibilityTrackingDisabled=_visibilityTrackingDisabled - In the implementation block
@property (nonatomic,readonly) NSArray * visibilityTrackers;                                                   //@synthesize visibilityTrackers=_visibilityTrackers - In the implementation block
@property (nonatomic,retain) IGFullViewImpressionTracker * fullViewImpressionTracker;                          //@synthesize fullViewImpressionTracker=_fullViewImpressionTracker - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * collectionViewContentsVisibility;                       //@synthesize collectionViewContentsVisibility=_collectionViewContentsVisibility - In the implementation block
@property (assign,nonatomic) double webviewUsageStartTime;                                                     //@synthesize webviewUsageStartTime=_webviewUsageStartTime - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItemForWebview;                                                  //@synthesize feedItemForWebview=_feedItemForWebview - In the implementation block
@property (nonatomic,retain) IGStoreProductSessionManager * storeProductManager;                               //@synthesize storeProductManager=_storeProductManager - In the implementation block
@property (nonatomic,retain) IGFeedItemViewingSessionManager * viewingSessionManager;                          //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,retain) IGFeedUsertagManager * usertagManager;                                            //@synthesize usertagManager=_usertagManager - In the implementation block
@property (nonatomic,retain) IGCollectionViewVisibility * collectionViewVisibility;                            //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,retain) IGFeedVideoCellManager * videoCellManager;                                        //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pageCellStates;                                             //@synthesize pageCellStates=_pageCellStates - In the implementation block
@property (nonatomic,retain) IGFeedHeartAnimator * heartAnimator;                                              //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedDataSource * feedDataSource;                                              //@synthesize feedDataSource=_feedDataSource - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) char viewVisible;                                            //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) IGFeedPreviewingHandler * feedPreviewingDelegate;                                 //@synthesize feedPreviewingDelegate=_feedPreviewingDelegate - In the implementation block
@property (nonatomic,retain) IGComposedWebViewLogger * webViewLogger;                                          //@synthesize webViewLogger=_webViewLogger - In the implementation block
@property (nonatomic,retain) IGComposedWebViewSharingLogger * sharingLogger;                                   //@synthesize sharingLogger=_sharingLogger - In the implementation block
@property (nonatomic,retain) IGFeedItem * currentActionSheetFeedItem;                                          //@synthesize currentActionSheetFeedItem=_currentActionSheetFeedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(char)enableNavState;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(void)setFocusCoordinator:(IGFeedFocusCoordinator *)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 feedLayout:(int)arg2 showsPullToRefresh:(char)arg3 ;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 entryPoint:(int)arg5 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)scrollToFeedItem:(id)arg1 animated:(char)arg2 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(unsigned)contextualFeedInfiniteScrollCap;
-(void)setVideoCellManager:(IGFeedVideoCellManager *)arg1 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(void)feedItemAppHeaderDidTapCustomizableButton:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnChevronButton:(id)arg1 ;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3 ;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)updateItemVisibilityTrackers;
-(IGFeedHeartAnimator *)heartAnimator;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1 ;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemAlbumCellDidDoubleTap:(id)arg1 ;
-(void)feedItemAlbumCell:(id)arg1 didChangeToPage:(int)arg2 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(void)feedItemAlbumCell2DidDoubleTap:(id)arg1 ;
-(void)feedItemAlbumCell2:(id)arg1 didChangeCellHeight:(float)arg2 ;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1 ;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPivotGridCellDidTapSeeMore:(id)arg1 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2 ;
-(id)feedVideoCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedVideoCellPosition:(id)arg1 ;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemPageCell:(id)arg1 wantsOpenURL:(id)arg2 modal:(char)arg3 ;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(IGFullViewImpressionTracker *)fullViewImpressionTracker;
-(void)collectionViewController:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewController:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(void)openWebViewForURL:(id)arg1 feedItemContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)isNekoStyleDirectResponseInfo:(id)arg1 ;
-(char)isOriginalStyleDirectResponseInfo:(id)arg1 ;
-(void)setWebViewLogger:(IGComposedWebViewLogger *)arg1 ;
-(IGComposedWebViewLogger *)webViewLogger;
-(void)setSharingLogger:(IGComposedWebViewSharingLogger *)arg1 ;
-(IGComposedWebViewSharingLogger *)sharingLogger;
-(void)setWebviewUsageStartTime:(double)arg1 ;
-(double)webviewUsageStartTime;
-(void)webViewControllerDidBeginBrowsing:(id)arg1 ;
-(void)webViewControllerDidEndBrowsing:(id)arg1 ;
-(id)currentReloadContext;
-(void)handleDidEndScrolling;
-(void)didTakeRefreshAction;
-(void)tracker:(id)arg1 feedSectionDidAppear:(id)arg2 ;
-(void)tracker:(id)arg1 feedSectionDidDisappear:(id)arg2 ;
-(id)currentScrollPosition;
-(CGPoint)contentOffsetForScrollPosition:(id)arg1 ;
-(void)performWhilePreservingPosition:(/*^block*/id)arg1 ;
-(CGSize)imageSizeToLoadForGrid;
-(CGSize)imageSizeToLoadForTimeline;
-(/*^block*/id)screenshotLogBlock;
-(void)logFeedItem:(id)arg1 coverage:(id)arg2 forEvent:(id)arg3 ;
-(void)configureCollectionViewDataSource:(id)arg1 ;
-(void)setFeedPreviewingDelegate:(IGFeedPreviewingHandler *)arg1 ;
-(IGFeedPreviewingHandler *)feedPreviewingDelegate;
-(void)updateCollectionViewHelpers;
-(void)beginCollectionViewContentsVisibilityTracking;
-(void)beginFeedItemVisibilityTracking;
-(void)endFeedItemVisibilityTracking;
-(void)endCollectionViewContentsVisibilityTracking;
-(void)registerClasses;
-(IGFeedDataSource *)feedDataSource;
-(IGFeedCollectionViewLayoutDataSource *)layoutDataSource;
-(void)setUsertagManager:(IGFeedUsertagManager *)arg1 ;
-(void)setHeartAnimator:(IGFeedHeartAnimator *)arg1 ;
-(void)setCollectionViewVisibility:(IGCollectionViewVisibility *)arg1 ;
-(id)promotionBannerForConfiguration:(id)arg1 ;
-(void)layoutBanners;
-(void)showNUXIfNeededForPageCell:(id)arg1 ;
-(void)handleDidSelectFeedItemFromGrid:(id)arg1 ;
-(IGFeedUsertagManager *)usertagManager;
-(NSMutableDictionary *)pageCellStates;
-(void)decodeAdjacentImageForIndexPath:(id)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(char)arg3 forceAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 ;
-(id)currentLoadingObjects;
-(id)currentLoadingContext;
-(IGItemVisibilityTracker *)collectionViewContentsVisibility;
-(void)setVisibilityTrackingDisabled:(char)arg1 ;
-(void)notifyVisibilityTrackersWithVisibleContentRect:(CGRect)arg1 ;
-(char)isVisibilityTrackingDisabled;
-(NSArray *)visibilityTrackers;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(IGStoreProductSessionManager *)storeProductManager;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)extraDictionaryForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 ;
-(void)useNekoDirectResponseForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)useOriginalStyleDirectResponseForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(char)isMobileAppInstallEngagementFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 ;
-(void)useStoreSessionForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)useActionURLHandlerForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFeedItemForWebview:(IGFeedItem *)arg1 ;
-(id)arrayOfCellsWithClass:(Class)arg1 inSection:(int)arg2 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleHeaderCustomizableButtonTappedForFeedItem:(id)arg1 ;
-(void)setCurrentActionSheetFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)currentActionSheetFeedItem;
-(void)tapOnTriggerForDropdownListForFeedItem:(id)arg1 ;
-(void)setCurrentActionCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentActionCellIndexPath;
-(void)performLikeForItemAtIndexPath:(id)arg1 ;
-(IGFeedItem *)feedItemForWebview;
-(void)webViewDidEndBrowsing:(id)arg1 ;
-(id)bugReportDescription;
-(CGPoint)offsetForFeedItemAtIndex:(int)arg1 ;
-(void)showPostsFeedForItemAtIndexPath:(id)arg1 ;
-(id)postsFeedViewControllerForRankedIndex:(int)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 entryPoint:(int)arg5 ;
-(void)setFullViewImpressionTracker:(IGFullViewImpressionTracker *)arg1 ;
-(void)setCollectionViewContentsVisibility:(IGItemVisibilityTracker *)arg1 ;
-(void)setStoreProductManager:(IGStoreProductSessionManager *)arg1 ;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(void)setViewingSessionManager:(IGFeedItemViewingSessionManager *)arg1 ;
-(void)setPageCellStates:(NSMutableDictionary *)arg1 ;
-(id)objects;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)context;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(CGRect)visibleContentRect;
-(void)setCollectionViewLayout:(id)arg1 ;
-(void)setFeedLayout:(int)arg1 ;
-(int)feedLayout;
-(void)setViewVisible:(char)arg1 ;
-(char)isViewVisible;
@end
