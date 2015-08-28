/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>

@class IGExploreSearchViewController, NSArray, IGExplorePeopleBannerView, IGExploreJumbotronView, NSMutableSet, NSDate, IGExploreTTILogger, IGPostsFeedVisibleStatus, NSString, IGExplorePhotosNetworkSource;

@interface IGExplorePhotosViewController : IGFeedViewController <IGExploreSearchControllerDelegate, IGSearchOriginControllerProtocol> {

	char _showSearchOnAppear;
	char _showSearchOnViewDidAppear;
	char _wasFreshExploreLoad;
	char _marqueeWasPaging;
	IGExploreSearchViewController* _searchController;
	NSArray* _currentPosts;
	IGExplorePeopleBannerView* _peopleBannerView;
	IGExploreJumbotronView* _jumbotronView;
	NSMutableSet* _loggedImpressions;
	NSDate* _backgroundingDate;
	IGExploreTTILogger* _ttiLogger;
	IGPostsFeedVisibleStatus* _postsFeedVisibleStatus;
	NSArray* _profileTeaserUsers;
	NSString* _peopleTeaserByline;
	NSArray* _trends;
	NSArray* _marqueeItems;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) IGExploreSearchViewController * searchController;               //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) char showSearchOnAppear;                                        //@synthesize showSearchOnAppear=_showSearchOnAppear - In the implementation block
@property (assign,nonatomic) char showSearchOnViewDidAppear;                                 //@synthesize showSearchOnViewDidAppear=_showSearchOnViewDidAppear - In the implementation block
@property (nonatomic,retain) NSArray * currentPosts;                                         //@synthesize currentPosts=_currentPosts - In the implementation block
@property (assign,nonatomic) char wasFreshExploreLoad;                                       //@synthesize wasFreshExploreLoad=_wasFreshExploreLoad - In the implementation block
@property (nonatomic,retain) IGExplorePeopleBannerView * peopleBannerView;                   //@synthesize peopleBannerView=_peopleBannerView - In the implementation block
@property (nonatomic,retain) IGExploreJumbotronView * jumbotronView;                         //@synthesize jumbotronView=_jumbotronView - In the implementation block
@property (nonatomic,retain) IGExplorePhotosNetworkSource * feedSource; 
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                               //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (assign,nonatomic) char marqueeWasPaging;                                          //@synthesize marqueeWasPaging=_marqueeWasPaging - In the implementation block
@property (nonatomic,retain) NSDate * backgroundingDate;                                     //@synthesize backgroundingDate=_backgroundingDate - In the implementation block
@property (nonatomic,retain) IGExploreTTILogger * ttiLogger;                                 //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (nonatomic,retain) IGPostsFeedVisibleStatus * postsFeedVisibleStatus;              //@synthesize postsFeedVisibleStatus=_postsFeedVisibleStatus - In the implementation block
@property (nonatomic,copy) NSArray * profileTeaserUsers;                                     //@synthesize profileTeaserUsers=_profileTeaserUsers - In the implementation block
@property (nonatomic,copy) NSString * peopleTeaserByline;                                    //@synthesize peopleTeaserByline=_peopleTeaserByline - In the implementation block
@property (nonatomic,copy) NSArray * trends;                                                 //@synthesize trends=_trends - In the implementation block
@property (nonatomic,copy) NSArray * marqueeItems;                                           //@synthesize marqueeItems=_marqueeItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 ;
-(char)enableNavState;
-(void)appDidEnterBackgroundNotification:(id)arg1 ;
-(void)appDidBecomeActiveNotification:(id)arg1 ;
-(IGExploreTTILogger *)ttiLogger;
-(void)updateScrollFromContextualFeed;
-(char)shouldShowNavigationShadow;
-(void)refreshStaleContent;
-(void)setBackgroundingDate:(NSDate *)arg1 ;
-(IGExploreJumbotronView *)jumbotronView;
-(NSArray *)marqueeItems;
-(char)shouldShowPeopleEntryBanner;
-(IGExplorePeopleBannerView *)peopleBannerView;
-(void)setPeopleBannerView:(IGExplorePeopleBannerView *)arg1 ;
-(void)onPeopleBannerTapped:(id)arg1 ;
-(NSString *)peopleTeaserByline;
-(NSArray *)profileTeaserUsers;
-(char)shouldShowMarqueeAndCarousel;
-(void)setJumbotronView:(IGExploreJumbotronView *)arg1 ;
-(void)sizeJumbotronView;
-(NSDate *)backgroundingDate;
-(char)shouldRefreshExploreContent;
-(void)setProfileTeaserUsers:(NSArray *)arg1 ;
-(void)setPeopleTeaserByline:(NSString *)arg1 ;
-(NSArray *)trends;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(void)configurePeopleEntryBanner;
-(void)configureMarqueeAndCarousel;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 ;
-(void)setPostsFeedVisibleStatus:(IGPostsFeedVisibleStatus *)arg1 ;
-(unsigned)contextualFeedInfiniteScrollCap;
-(IGPostsFeedVisibleStatus *)postsFeedVisibleStatus;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)setMarqueeWasPaging:(char)arg1 ;
-(char)marqueeWasPaging;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 ;
-(id)maxVisibleItemCount;
-(NSMutableSet *)loggedImpressions;
-(void)logMarqueeItemClick:(id)arg1 index:(unsigned)arg2 ;
-(void)logTagClick:(id)arg1 indexPath:(id)arg2 ;
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
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(void)showErrorLoadMessageIfPossible;
-(void)logItemsLoadedFromOldPosts:(id)arg1 toNewPosts:(id)arg2 ;
-(unsigned)numberOfMarqueeItemsInJumbotronView:(id)arg1 ;
-(id)jumbotronView:(id)arg1 viewForMarqueeAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfCarouselsInJumbotronView:(id)arg1 ;
-(unsigned)jumbotronView:(id)arg1 numberOfItemsForCarouselAtSection:(unsigned)arg2 ;
-(id)jumbotronView:(id)arg1 buttonTitleForCarouselAtSection:(unsigned)arg2 ;
-(id)jumbotronView:(id)arg1 titleForCarouselAtSection:(unsigned)arg2 ;
-(id)jumbotronView:(id)arg1 viewModelForCarouselItemAtIndexPath:(id)arg2 ;
-(id)finalSectionTitleForJumbotronView:(id)arg1 ;
-(void)jumbotronView:(id)arg1 didSelectMarqueeItemAtIndex:(unsigned)arg2 ;
-(void)jumbotronView:(id)arg1 didSelectCarouselItemAtIndexPath:(id)arg2 ;
-(void)jumbotronView:(id)arg1 didTapButtonInCarouselSection:(unsigned)arg2 ;
-(void)jumbotronView:(id)arg1 didDisplayMarqueeItemAtIndex:(unsigned)arg2 ;
-(void)jumbotronView:(id)arg1 didDisplayCarouselItemAtIndexPath:(id)arg2 ;
-(NSArray *)currentPosts;
-(void)setCurrentPosts:(NSArray *)arg1 ;
-(char)wasFreshExploreLoad;
-(void)setWasFreshExploreLoad:(char)arg1 ;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)setTtiLogger:(IGExploreTTILogger *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setSearchController:(IGExploreSearchViewController *)arg1 ;
-(IGExploreSearchViewController *)searchController;
-(int)viewType;
@end

