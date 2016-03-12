
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGRankedMediaViewDelegate.h>
#import <Instagram/IGExploreComposedPeopleYouFollowViewDelegate.h>
#import <Instagram/IGRelatedItemsHeaderViewDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>

@class IGRankedMediaView, IGExploreComposedPeopleYouFollowView, UIBarButtonItem, IGHashtagModel, NSArray, IGVisitedRelatedItemsStore, NSMutableSet, IGRelatedItemsHeaderView, IGRelatedItemsService, NSDictionary, IGGenericMegaphoneView, IGDefaultGenericMegaphoneLogger, IGFeedItemPreviewingHandler, NSString;

@interface IGHashtagFeedViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGExploreComposedPeopleYouFollowViewDelegate, IGRelatedItemsHeaderViewDelegate, IGGenericMegaphoneViewDelegate, IGFeedPromotionBannerDelegate> {

	IGRankedMediaView* _rankedMediaView;
	IGExploreComposedPeopleYouFollowView* _peopleYouFollowView;
	UIBarButtonItem* _moreOptionsButton;
	IGHashtagModel* _hashtag;
	NSArray* _forceMediaIDs;
	IGVisitedRelatedItemsStore* _visitedHashtagsStore;
	NSMutableSet* _loggedImpressions;
	NSMutableSet* _lastVisibleIndexPaths;
	NSMutableSet* _lastIndexPaths;
	NSMutableSet* _lastVisibleRankedImageURLs;
	NSMutableSet* _lastRankedImageURLs;
	IGRelatedItemsHeaderView* _relatedHashtagsHeaderView;
	IGRelatedItemsService* _relatedHashtagService;
	NSDictionary* _serverMegaphoneData;
	IGGenericMegaphoneView* _megaphoneView;
	IGDefaultGenericMegaphoneLogger* _megaphoneLogger;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;

}

@property (nonatomic,retain) IGRankedMediaView * rankedMediaView;                                            //@synthesize rankedMediaView=_rankedMediaView - In the implementation block
@property (assign,nonatomic,__weak) IGExploreComposedPeopleYouFollowView * peopleYouFollowView;              //@synthesize peopleYouFollowView=_peopleYouFollowView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moreOptionsButton;                                            //@synthesize moreOptionsButton=_moreOptionsButton - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                                                       //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,retain) NSArray * forceMediaIDs;                                                        //@synthesize forceMediaIDs=_forceMediaIDs - In the implementation block
@property (nonatomic,retain) IGVisitedRelatedItemsStore * visitedHashtagsStore;                              //@synthesize visitedHashtagsStore=_visitedHashtagsStore - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                                               //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleIndexPaths;                                           //@synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastIndexPaths;                                                  //@synthesize lastIndexPaths=_lastIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastVisibleRankedImageURLs;                                      //@synthesize lastVisibleRankedImageURLs=_lastVisibleRankedImageURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastRankedImageURLs;                                             //@synthesize lastRankedImageURLs=_lastRankedImageURLs - In the implementation block
@property (assign,nonatomic,__weak) IGRelatedItemsHeaderView * relatedHashtagsHeaderView;                    //@synthesize relatedHashtagsHeaderView=_relatedHashtagsHeaderView - In the implementation block
@property (nonatomic,retain) IGRelatedItemsService * relatedHashtagService;                                  //@synthesize relatedHashtagService=_relatedHashtagService - In the implementation block
@property (nonatomic,retain) NSDictionary * serverMegaphoneData;                                             //@synthesize serverMegaphoneData=_serverMegaphoneData - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                                         //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,retain) IGDefaultGenericMegaphoneLogger * megaphoneLogger;                              //@synthesize megaphoneLogger=_megaphoneLogger - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHashtag:(id)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(char)enableNavState;
-(void)setMegaphoneLogger:(IGDefaultGenericMegaphoneLogger *)arg1 ;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(IGDefaultGenericMegaphoneLogger *)megaphoneLogger;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)composedPeopleYouFollowView:(id)arg1 didTapSocialItemAtIndex:(unsigned)arg2 ;
-(void)setForceMediaIDs:(NSArray *)arg1 ;
-(id)initWithHashtag:(id)arg1 forceMediaIDs:(id)arg2 ;
-(NSMutableSet *)lastIndexPaths;
-(NSMutableSet *)lastVisibleIndexPaths;
-(void)setLastVisibleIndexPaths:(NSMutableSet *)arg1 ;
-(void)setLastIndexPaths:(NSMutableSet *)arg1 ;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidSelectFeedItemFromGrid:(id)arg1 ;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(void)setRankedMediaView:(IGRankedMediaView *)arg1 ;
-(IGRankedMediaView *)rankedMediaView;
-(void)presentHashtagReshareView;
-(void)setMoreOptionsButton:(UIBarButtonItem *)arg1 ;
-(void)requestRelatedHashtags;
-(void)setServerMegaphoneData:(NSDictionary *)arg1 ;
-(void)setRelatedHashtagService:(IGRelatedItemsService *)arg1 ;
-(IGRelatedItemsService *)relatedHashtagService;
-(IGVisitedRelatedItemsStore *)visitedHashtagsStore;
-(void)configureRelatedHashtagsViewWithHashtags:(id)arg1 ;
-(void)setRelatedHashtagsHeaderView:(IGRelatedItemsHeaderView *)arg1 ;
-(void)logRelatedHashtagClickForTag:(id)arg1 atIndexPath:(id)arg2 ;
-(void)onHashtagUpdated;
-(NSArray *)forceMediaIDs;
-(void)configureRankedHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)configureSocialSectionHeaderWithFeedNetworkSource:(id)arg1 ;
-(void)updateRankedViewVisibility;
-(IGExploreComposedPeopleYouFollowView *)peopleYouFollowView;
-(void)setPeopleYouFollowView:(IGExploreComposedPeopleYouFollowView *)arg1 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 sectionNumber:(int)arg3 sectionType:(int)arg4 ;
-(void)logSocialItemClickForPost:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 sectionNumber:(int)arg4 sectionType:(int)arg5 ;
-(void)rankedMediaView:(id)arg1 didSelectItemAtIndex:(unsigned)arg2 ;
-(void)relatedItemsHeaderView:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)relatedItemsHeaderView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3 ;
-(UIBarButtonItem *)moreOptionsButton;
-(void)setVisitedHashtagsStore:(IGVisitedRelatedItemsStore *)arg1 ;
-(NSMutableSet *)lastVisibleRankedImageURLs;
-(void)setLastVisibleRankedImageURLs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)lastRankedImageURLs;
-(void)setLastRankedImageURLs:(NSMutableSet *)arg1 ;
-(IGRelatedItemsHeaderView *)relatedHashtagsHeaderView;
-(NSDictionary *)serverMegaphoneData;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

