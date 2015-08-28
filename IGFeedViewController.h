/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedNetworkSourceViewController.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGFeedItemVideoCellDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGModernWebViewControllerDelegate.h>
#import <Instagram/IGFeedItemActionCellDelegate.h>
#import <Instagram/IGFeedItemAppHeaderDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedCollectionViewLayoutDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class NSMutableSet, IGImagePreparer, NSMutableArray, IGItemVisibilityTracker, IGFeedItem, IGStoreProductSessionManager, UIImageView, NSMutableDictionary, IGFeedItemVideoCell, NSString;

@interface IGFeedViewController : IGFeedNetworkSourceViewController <IGFeedPhotoViewDelegate, IGFeedPromotionBannerDelegate, IGUserInTagDisplayDelegate, IGFeedItemVideoCellDelegate, IGFeedItemPageCellDelegate, IGItemVisibilityTrackerDelegate, IGFeedItemLoggingProviderDelegate, IGModernWebViewControllerDelegate, IGFeedItemActionCellDelegate, IGFeedItemAppHeaderDelegate, IGFeedItemHeaderDelegate, IGFeedCollectionViewLayoutDelegate, IGRaindropAnalyticsDelegate> {

	NSMutableSet* _feedItemsScheduledForTagRemoval;
	IGImagePreparer* _imagePreparer;
	NSMutableArray* _addedBannerViews;
	char _viewVisible;
	int _feedLayout;
	IGItemVisibilityTracker* _feedItemVisibility;
	IGFeedItem* _feedItemForWebview;
	IGStoreProductSessionManager* _storeProductManager;
	UIImageView* _heartImageView;
	IGFeedItem* _heartLikeFeedItem;
	NSMutableDictionary* _prebufferingURLs;
	IGFeedItemVideoCell* _videoCellWithPlayer;
	NSString* _lastPlayedPK;
	double _webviewUsageStartTime;

}

@property (assign,nonatomic) int feedLayout;                                                  //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * feedItemVisibility;                    //@synthesize feedItemVisibility=_feedItemVisibility - In the implementation block
@property (assign,nonatomic) double webviewUsageStartTime;                                    //@synthesize webviewUsageStartTime=_webviewUsageStartTime - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItemForWebview;                                 //@synthesize feedItemForWebview=_feedItemForWebview - In the implementation block
@property (nonatomic,retain) IGStoreProductSessionManager * storeProductManager;              //@synthesize storeProductManager=_storeProductManager - In the implementation block
@property (nonatomic,retain) UIImageView * heartImageView;                                    //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) IGFeedItem * heartLikeFeedItem;                                  //@synthesize heartLikeFeedItem=_heartLikeFeedItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * prebufferingURLs;                          //@synthesize prebufferingURLs=_prebufferingURLs - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) char viewVisible;                           //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoCell * videoCellWithPlayer;                       //@synthesize videoCellWithPlayer=_videoCellWithPlayer - In the implementation block
@property (nonatomic,copy) NSString * lastPlayedPK;                                           //@synthesize lastPlayedPK=_lastPlayedPK - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)enableNavState;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 feedLayout:(int)arg2 showsPullToRefresh:(char)arg3 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)scrollToFeedItemWithPK:(id)arg1 animated:(char)arg2 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(void)feedItemAppHeaderDidTapCustomizableButton:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(int)feedItemActionCellPosition:(id)arg1 ;
-(id)feedItemActionCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)feedItemPageCell:(id)arg1 wantsOpenURL:(id)arg2 modal:(char)arg3 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCellWillDisplayActionView:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemVideoCellDidLoadImage:(id)arg1 ;
-(void)feedItemVideoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoCellDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoCell:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoCellDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoCellPosition:(id)arg1 ;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(float)percentVisibleForCell:(id)arg1 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(id)currentReloadContext;
-(void)handleDidEndScrolling;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewController:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(void)collectionViewController:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(CGSize)imageSizeToLoadForGrid;
-(CGSize)imageSizeToLoadForTimeline;
-(void)mediaDeleted:(id)arg1 ;
-(char)isDeviceSupportAlwaysAutoPlay;
-(id)videoCellForAutoPlay;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(void)beginFeedItemVisibilityTracking;
-(IGFeedItemVideoCell *)videoCellWithPlayer;
-(void)stopVideoForCell:(id)arg1 ;
-(void)endFeedItemVisibilityTracking;
-(void)setHeartLikeFeedItem:(IGFeedItem *)arg1 ;
-(UIImageView *)heartImageView;
-(IGFeedItem *)heartLikeFeedItem;
-(char)shouldHideFeedItem:(id)arg1 ;
-(id)promotionBannerForConfiguration:(id)arg1 ;
-(void)layoutBanners;
-(void)updateFeedItemVisibility;
-(id)visibleCellsOfClass:(Class)arg1 ;
-(void)showNUXIfNeededForPageCell:(id)arg1 ;
-(NSString *)lastPlayedPK;
-(void)updateHeartImageViewLocation;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)isPagingEnabledForFeedItem:(id)arg1 ;
-(id)attributesForFeedItem:(id)arg1 fromContext:(id)arg2 ;
-(int)numberOfFeedCellsBeforeComments;
-(float)commentHorizontalPadding;
-(char)allowDirectResponseIndicatorForFeedItem:(id)arg1 ;
-(void)showDirectResponseIndicatorInCell:(id)arg1 withFeedItem:(id)arg2 ;
-(void)updateButtonForFeedItemActionCell:(id)arg1 postItem:(id)arg2 ;
-(int)imageOptionToLoadForGrid;
-(void)handleDidSelectFeedItemFromGrid:(id)arg1 ;
-(void)startVideoForCellMovingOnScreen;
-(void)stopVideoForCellMovingOffScreen;
-(void)showUsertagsIndication:(char)arg1 inCell:(id)arg2 ;
-(void)scheduleCellForUsertagRemoval:(id)arg1 ;
-(void)prebufferVideoForPost:(id)arg1 ;
-(void)cancelPrebufferVideoForPost:(id)arg1 ;
-(id)calculateLayoutAttributesForFeedItems:(id)arg1 ;
-(float)itemBottomPadding;
-(float)textBottomPadding;
-(int)feedItemCellTypeForIndexPath:(id)arg1 withObjects:(id)arg2 context:(id)arg3 ;
-(CGSize)textCellSizeWithAttributes:(id)arg1 feedItem:(id)arg2 indexPath:(id)arg3 viewWidth:(float)arg4 isXLLayout:(char)arg5 ;
-(void)decodeAdjacentGridImagesForIndexPath:(id)arg1 ;
-(id)gridCellForIndexPath:(id)arg1 ;
-(id)emptyCellForIndexPath:(id)arg1 ;
-(id)pageCellForIndexPath:(id)arg1 ;
-(void)decodeAdjacentImageForIndexPath:(id)arg1 ;
-(id)photoCellForIndexPath:(id)arg1 ;
-(id)videoCellForIndexPath:(id)arg1 ;
-(id)textCellForIndexPath:(id)arg1 ;
-(id)actionCellForIndexPath:(id)arg1 ;
-(id)feedItemAppHeaderForFeedItem:(id)arg1 indexPath:(id)arg2 ;
-(id)feedItemHeaderForFeedItem:(id)arg1 indexPath:(id)arg2 ;
-(char)allowDirectResponseForFeedItem:(id)arg1 ;
-(void)hideUsertagsForFeedItem:(id)arg1 ;
-(IGItemVisibilityTracker *)feedItemVisibility;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(char)allowSponsoredAppForFeedItem:(id)arg1 ;
-(IGStoreProductSessionManager *)storeProductManager;
-(void)openStoreProductInfoForFeedItem:(id)arg1 context:(id)arg2 ;
-(void)openWebViewForURL:(id)arg1 feedItemContext:(id)arg2 ;
-(void)setWebviewUsageStartTime:(double)arg1 ;
-(void)setFeedItemForWebview:(IGFeedItem *)arg1 ;
-(id)arrayOfCellsWithClass:(Class)arg1 inSection:(int)arg2 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 context:(id)arg2 ;
-(void)animateHeartLikeForItem:(id)arg1 ;
-(double)webviewUsageStartTime;
-(IGFeedItem *)feedItemForWebview;
-(void)startVideoForCell:(id)arg1 ;
-(void)setVideoCellWithPlayer:(IGFeedItemVideoCell *)arg1 ;
-(void)setLastPlayedPK:(NSString *)arg1 ;
-(id)prebufferedVideoURLForPost:(id)arg1 ;
-(void)prebufferVideoForURL:(id)arg1 ;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(void)webViewDidEndBrowsing:(id)arg1 ;
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3 ;
-(void)cancelUsertagRemovalForFeedItem:(id)arg1 ;
-(void)setFeedItemVisibility:(IGItemVisibilityTracker *)arg1 ;
-(void)setStoreProductManager:(IGStoreProductSessionManager *)arg1 ;
-(void)setHeartImageView:(UIImageView *)arg1 ;
-(NSMutableDictionary *)prebufferingURLs;
-(void)setPrebufferingURLs:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(CGRect)visibleContentRect;
-(int)viewType;
-(void)setFeedLayout:(int)arg1 ;
-(int)feedLayout;
-(void)setViewVisible:(char)arg1 ;
-(char)isViewVisible;
@end

