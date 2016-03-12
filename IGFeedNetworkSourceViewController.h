
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>
#import <Instagram/IGCollectionViewControllerDelegate.h>

@protocol IGFeedConfigurationType;
@class NSMapTable, IGFeedNetworkSource, IGFeedStatusView, UIBarButtonItem, NSArray, NSString;

@interface IGFeedNetworkSourceViewController : IGCollectionViewController <IGFeedNetworkSourceDelegate, IGFeedStatusViewDynamicHeightProtocol, IGCollectionViewControllerDelegate> {

	NSMapTable* _headerViewsToRank;
	NSMapTable* _footerViewsToRank;
	char _showRefreshButton;
	char _allowEmptyStateAndEmptyFeedLoadingIndicator;
	char _shouldAnnounceFeedRefreshEvents;
	id<IGFeedConfigurationType> _feedConfiguration;
	IGFeedNetworkSource* _feedSource;
	unsigned _videoSizeToPrefetch;
	IGFeedStatusView* _feedStatusView;
	UIBarButtonItem* _refreshButton;
	int _imageURLOptionToPrefetch;
	CGSize _imageSizeToPrefetch;

}

@property (nonatomic,retain) id<IGFeedConfigurationType> feedConfiguration;                 //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                              //@synthesize feedSource=_feedSource - In the implementation block
@property (assign,nonatomic) char showRefreshButton;                                        //@synthesize showRefreshButton=_showRefreshButton - In the implementation block
@property (nonatomic,readonly) NSArray * promotionBannerConfigurations; 
@property (assign,nonatomic) char allowEmptyStateAndEmptyFeedLoadingIndicator;              //@synthesize allowEmptyStateAndEmptyFeedLoadingIndicator=_allowEmptyStateAndEmptyFeedLoadingIndicator - In the implementation block
@property (assign,nonatomic) CGSize imageSizeToPrefetch;                                    //@synthesize imageSizeToPrefetch=_imageSizeToPrefetch - In the implementation block
@property (assign,nonatomic) unsigned videoSizeToPrefetch;                                  //@synthesize videoSizeToPrefetch=_videoSizeToPrefetch - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                             //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                               //@synthesize refreshButton=_refreshButton - In the implementation block
@property (assign,nonatomic) int imageURLOptionToPrefetch;                                  //@synthesize imageURLOptionToPrefetch=_imageURLOptionToPrefetch - In the implementation block
@property (assign,nonatomic) char shouldAnnounceFeedRefreshEvents;                          //@synthesize shouldAnnounceFeedRefreshEvents=_shouldAnnounceFeedRefreshEvents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)rankToken;
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)setFeedConfiguration:(id<IGFeedConfigurationType>)arg1 ;
-(void)removeHeaderView:(id)arg1 animated:(char)arg2 ;
-(void)addHeaderView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(void)layoutHeaderViews;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)showErrorLoadMessageIfPossible;
-(void)onTabBarTapped:(id)arg1 ;
-(void)addFooterView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)restrictedView;
-(char)isTopOnly;
-(void)onRestrictedLearnMoreTapped:(id)arg1 ;
-(void)setRestrictedView:(id)arg1 ;
-(void)removeFooterView:(id)arg1 animated:(char)arg2 ;
-(void)updateRestrictedViewWithName:(id)arg1 ;
-(char)showRefreshButton;
-(NSArray *)promotionBannerConfigurations;
-(void)setShowRefreshButton:(char)arg1 ;
-(void)onNetworkTransferRateChanged:(id)arg1 ;
-(id<IGFeedConfigurationType>)feedConfiguration;
-(CGSize)imageSizeToPrefetch;
-(int)imageURLOptionToPrefetch;
-(unsigned)videoSizeToPrefetch;
-(void)updateFeedAfterReloadingforFetchAction:(int)arg1 ;
-(char)shouldAnnounceFeedRefreshEvents;
-(void)setShouldAnnounceFeedRefreshEvents:(char)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(void)didTakeRefreshAction;
-(void)onRefreshTapped:(id)arg1 ;
-(void)layoutFooterViews;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1 ;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3 ;
-(id)initWithFeedNetworkSource:(id)arg1 layout:(id)arg2 showsPullToRefresh:(char)arg3 ;
-(void)collectionViewControllerDidScrollToEndOfContent:(id)arg1 ;
-(void)performMediaPrefetchWithProfiles:(char)arg1 ;
-(void)setAllowEmptyStateAndEmptyFeedLoadingIndicator:(char)arg1 ;
-(void)setImageSizeToPrefetch:(CGSize)arg1 ;
-(void)setVideoSizeToPrefetch:(unsigned)arg1 ;
-(void)setImageURLOptionToPrefetch:(int)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)accessibilityScroll:(int)arg1 ;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
@end

