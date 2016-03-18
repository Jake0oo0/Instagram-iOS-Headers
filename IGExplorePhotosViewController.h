
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/FBAnimationPerformanceTrackerDelegate.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>

@class IGSearchViewController, NSMutableSet, IGExploreJumbotronView, IGExploreCarouselsView, IGExploreSectionTextHeader, IGExploreTTILogger, NSDate, NSArray, NSString, IGFeedItemPreviewingHandler, FBAnimationPerformanceTracker, IGExplorePhotosNetworkSource;

@interface IGExplorePhotosViewController : IGFeedViewController_DEPRECATED <IGAnalyticsModule, IGExploreSearchControllerDelegate, FBAnimationPerformanceTrackerDelegate, IGSearchOriginControllerProtocol> {

	char _showSearchOnViewDidAppear;
	char _wasFreshExploreLoad;
	char _marqueeWasPaging;
	NSMutableSet* _loggedImpressions;
	IGSearchViewController* _searchController;
	IGExploreJumbotronView* _jumbotronView;
	IGExploreCarouselsView* _carouselsView;
	IGExploreSectionTextHeader* _explorePostsLabel;
	IGExploreTTILogger* _ttiLogger;
	int _stalenessThresholdSeconds;
	NSDate* _lastFullFetch;
	NSArray* _profileTeaserUsers;
	NSString* _peopleTeaserByline;
	NSArray* _trends;
	NSArray* _marqueeItems;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	FBAnimationPerformanceTracker* _apTracker;
	UIEdgeInsets _contentInsets;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                                    //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) IGSearchViewController * searchController;                           //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) char showSearchOnViewDidAppear;                                      //@synthesize showSearchOnViewDidAppear=_showSearchOnViewDidAppear - In the implementation block
@property (assign,nonatomic) char wasFreshExploreLoad;                                            //@synthesize wasFreshExploreLoad=_wasFreshExploreLoad - In the implementation block
@property (nonatomic,retain) IGExploreJumbotronView * jumbotronView;                              //@synthesize jumbotronView=_jumbotronView - In the implementation block
@property (nonatomic,retain) IGExploreCarouselsView * carouselsView;                              //@synthesize carouselsView=_carouselsView - In the implementation block
@property (nonatomic,retain) IGExploreSectionTextHeader * explorePostsLabel;                      //@synthesize explorePostsLabel=_explorePostsLabel - In the implementation block
@property (nonatomic,retain) IGExplorePhotosNetworkSource * feedSource; 
@property (assign,nonatomic) char marqueeWasPaging;                                               //@synthesize marqueeWasPaging=_marqueeWasPaging - In the implementation block
@property (nonatomic,retain) IGExploreTTILogger * ttiLogger;                                      //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (assign,nonatomic) int stalenessThresholdSeconds;                                       //@synthesize stalenessThresholdSeconds=_stalenessThresholdSeconds - In the implementation block
@property (nonatomic,retain) NSDate * lastFullFetch;                                              //@synthesize lastFullFetch=_lastFullFetch - In the implementation block
@property (nonatomic,copy) NSArray * profileTeaserUsers;                                          //@synthesize profileTeaserUsers=_profileTeaserUsers - In the implementation block
@property (nonatomic,copy) NSString * peopleTeaserByline;                                         //@synthesize peopleTeaserByline=_peopleTeaserByline - In the implementation block
@property (nonatomic,copy) NSArray * trends;                                                      //@synthesize trends=_trends - In the implementation block
@property (nonatomic,copy) NSArray * marqueeItems;                                                //@synthesize marqueeItems=_marqueeItems - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;              //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) FBAnimationPerformanceTracker * apTracker;                           //@synthesize apTracker=_apTracker - In the implementation block
-(id)analyticsModule;
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(char)enableNavState;
-(NSMutableSet *)loggedImpressions;
-(void)_setSurfaceRankInfoForSection:(unsigned)arg1 ;
-(void)logMarqueeItemClick:(id)arg1 index:(unsigned)arg2 ;
-(void)logMarqueeItemImpression:(id)arg1 inJumbotronView:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)logTrendingItemImpression:(id)arg1 withTrend:(id)arg2 section:(unsigned)arg3 atIndexPath:(id)arg4 ;
-(void)logTrendingItemClick:(id)arg1 withTrend:(id)arg2 section:(unsigned)arg3 atIndexPath:(id)arg4 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 ;
-(void)mainFeedReloadDidFinish:(id)arg1 ;
-(void)appDidEnterBackgroundNotification:(id)arg1 ;
-(void)appDidBecomeActiveNotification:(id)arg1 ;
-(IGExploreTTILogger *)ttiLogger;
-(void)configureMarqueeAndCarousel;
-(void)reloadMarquee:(char)arg1 carouselIndexes:(id)arg2 ;
-(void)configureExplorePostsHeaderLabel;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(void)updateScrollFromContextualFeed;
-(char)shouldShowNavigationShadow;
-(void)refreshStaleContent:(char)arg1 ;
-(IGExploreJumbotronView *)jumbotronView;
-(NSArray *)marqueeItems;
-(IGExploreSectionTextHeader *)explorePostsLabel;
-(IGExploreCarouselsView *)carouselsView;
-(char)shouldShowMarqueeAndCarousel;
-(void)setJumbotronView:(IGExploreJumbotronView *)arg1 ;
-(void)setCarouselsView:(IGExploreCarouselsView *)arg1 ;
-(void)setExplorePostsLabel:(IGExploreSectionTextHeader *)arg1 ;
-(void)sizeExplorePostsLabel;
-(void)sizeJumbotronView;
-(void)sizeCarouselsView;
-(NSDate *)lastFullFetch;
-(int)stalenessThresholdSeconds;
-(char)shouldRefreshExploreContent:(char)arg1 ;
-(NSArray *)profileTeaserUsers;
-(void)setProfileTeaserUsers:(NSArray *)arg1 ;
-(NSString *)peopleTeaserByline;
-(void)setPeopleTeaserByline:(NSString *)arg1 ;
-(NSArray *)trends;
-(id)changedIndexesForCurrentCarousel:(id)arg1 proposedCarousel:(id)arg2 ;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 entryPoint:(int)arg5 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)setMarqueeWasPaging:(char)arg1 ;
-(char)marqueeWasPaging;
-(void)presentViewController:(id)arg1 forCarouselItem:(id)arg2 ;
-(void)carouselsView:(id)arg1 didTapButtonInCarouselSection:(unsigned)arg2 ;
-(void)searchControllerSearchBarTapped:(id)arg1 ;
-(void)searchControllerCancelButtonTapped:(id)arg1 ;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2 ;
-(void)searchControllerPeopleIconTapped:(id)arg1 ;
-(void)searchControllerDirectIconTapped:(id)arg1 ;
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3 ;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3 ;
-(void)navigationControllerWillShowSearch;
-(void)prepareForPopToRootTransition;
-(char)showSearchOnViewDidAppear;
-(void)setShowSearchOnViewDidAppear:(char)arg1 ;
-(char)shouldShowPeopleEntryBanner;
-(void)onPeopleBannerTapped:(id)arg1 ;
-(void)showErrorLoadMessageIfPossible;
-(id)createPopularPostsFeedViewController;
-(unsigned)numberOfMarqueeItemsInJumbotronView:(id)arg1 ;
-(id)jumbotronView:(id)arg1 marqueeItemAtIndexPath:(id)arg2 ;
-(unsigned)numberOfCarouselsInCarouselsView:(id)arg1 ;
-(id)carouselsView:(id)arg1 titleForCarouselAtSection:(unsigned)arg2 ;
-(char)carouselsView:(id)arg1 shouldShowButtonForCarouselAtSection:(unsigned)arg2 ;
-(id)carouselsView:(id)arg1 actionTitleForCarouselAtSection:(unsigned)arg2 ;
-(unsigned)carouselsView:(id)arg1 numberOfItemsForCarouselAtSection:(unsigned)arg2 ;
-(id)carouselsView:(id)arg1 viewModelForCarouselItemAtIndexPath:(id)arg2 ;
-(void)jumbotronView:(id)arg1 didSelectMarqueeItemAtIndex:(unsigned)arg2 ;
-(void)jumbotronView:(id)arg1 didDisplayMarqueeItemAtIndex:(unsigned)arg2 ;
-(void)carouselsView:(id)arg1 didSelectCarouselItemAtIndexPath:(id)arg2 ;
-(void)carouselsView:(id)arg1 didDisplayCarouselItemAtIndexPath:(id)arg2 ;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(char)wasFreshExploreLoad;
-(void)setWasFreshExploreLoad:(char)arg1 ;
-(void)setTtiLogger:(IGExploreTTILogger *)arg1 ;
-(void)setStalenessThresholdSeconds:(int)arg1 ;
-(void)setLastFullFetch:(NSDate *)arg1 ;
-(FBAnimationPerformanceTracker *)apTracker;
-(void)setApTracker:(FBAnimationPerformanceTracker *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(IGSearchViewController *)searchController;
-(void)setSearchController:(IGSearchViewController *)arg1 ;
@end

