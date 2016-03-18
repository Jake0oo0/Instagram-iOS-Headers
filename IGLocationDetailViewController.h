
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGRankedMediaViewDelegate.h>
#import <Instagram/IGLocationHeaderViewDelegate.h>
#import <Instagram/IGExploreComposedPeopleYouFollowViewDelegate.h>
#import <Instagram/IGRelatedItemsHeaderViewDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGLocation, NSArray, IGRankedMediaView, IGLocationHeaderView, IGExploreComposedPeopleYouFollowView, NSMutableSet, IGFeedItemPreviewingHandler, IGRelatedItemsService, IGRelatedItemsHeaderView, IGVisitedRelatedItemsStore, NSString;

@interface IGLocationDetailViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGLocationHeaderViewDelegate, IGExploreComposedPeopleYouFollowViewDelegate, IGRelatedItemsHeaderViewDelegate, IGAnalyticsModule> {

	char _shouldUpdateLocationHeaderView;
	IGLocation* _location;
	NSArray* _forceMediaIDs;
	IGRankedMediaView* _rankedMediaView;
	IGLocationHeaderView* _locationHeaderView;
	IGExploreComposedPeopleYouFollowView* _peopleYouFollowView;
	NSMutableSet* _loggedImpressions;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	IGRelatedItemsService* _relatedLocationsService;
	IGRelatedItemsHeaderView* _relatedLocationsHeaderView;
	IGVisitedRelatedItemsStore* _visitedLocationsStore;

}

@property (nonatomic,retain) IGLocation * location;                                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * forceMediaIDs;                                                        //@synthesize forceMediaIDs=_forceMediaIDs - In the implementation block
@property (nonatomic,retain) IGRankedMediaView * rankedMediaView;                                            //@synthesize rankedMediaView=_rankedMediaView - In the implementation block
@property (assign,nonatomic,__weak) IGLocationHeaderView * locationHeaderView;                               //@synthesize locationHeaderView=_locationHeaderView - In the implementation block
@property (assign,nonatomic,__weak) IGExploreComposedPeopleYouFollowView * peopleYouFollowView;              //@synthesize peopleYouFollowView=_peopleYouFollowView - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                                               //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGRelatedItemsService * relatedLocationsService;                                //@synthesize relatedLocationsService=_relatedLocationsService - In the implementation block
@property (nonatomic,retain) IGRelatedItemsHeaderView * relatedLocationsHeaderView;                          //@synthesize relatedLocationsHeaderView=_relatedLocationsHeaderView - In the implementation block
@property (nonatomic,retain) IGVisitedRelatedItemsStore * visitedLocationsStore;                             //@synthesize visitedLocationsStore=_visitedLocationsStore - In the implementation block
@property (assign,nonatomic) char shouldUpdateLocationHeaderView;                                            //@synthesize shouldUpdateLocationHeaderView=_shouldUpdateLocationHeaderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(char)enableNavState;
-(NSMutableSet *)loggedImpressions;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateCellVisibility:(id)arg1 atIndex:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)composedPeopleYouFollowView:(id)arg1 didTapSocialItemAtIndex:(unsigned)arg2 ;
-(void)setForceMediaIDs:(NSArray *)arg1 ;
-(void)handleDidSelectFeedItemFromGrid:(id)arg1 ;
-(void)setRankedMediaView:(IGRankedMediaView *)arg1 ;
-(IGRankedMediaView *)rankedMediaView;
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
-(void)setLocationID:(id)arg1 ;
-(void)requestRelatedLocations;
-(IGVisitedRelatedItemsStore *)visitedLocationsStore;
-(void)configureLocationHeaderView;
-(void)presentLocationShareView;
-(void)onLocationInfoFailed:(id)arg1 ;
-(char)shouldUpdateLocationHeaderView;
-(IGLocationHeaderView *)locationHeaderView;
-(void)setShouldUpdateLocationHeaderView:(char)arg1 ;
-(void)setLocationHeaderView:(IGLocationHeaderView *)arg1 ;
-(void)setRelatedLocationsService:(IGRelatedItemsService *)arg1 ;
-(IGRelatedItemsService *)relatedLocationsService;
-(void)configureRelatedLocationsViewWithLocations:(id)arg1 ;
-(void)setRelatedLocationsHeaderView:(IGRelatedItemsHeaderView *)arg1 ;
-(void)logRelatedLocationClickForLocation:(id)arg1 atIndexPath:(id)arg2 ;
-(void)locationHeaderViewMapTapped:(id)arg1 ;
-(IGRelatedItemsHeaderView *)relatedLocationsHeaderView;
-(void)setVisitedLocationsStore:(IGVisitedRelatedItemsStore *)arg1 ;
-(void)fetchData;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
@end

