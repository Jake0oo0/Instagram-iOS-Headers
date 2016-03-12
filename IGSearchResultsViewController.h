
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewController.h>
#import <Instagram/IGAutocompleteAsyncDataSourceDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGSearchResultCellDelegate.h>
#import <Instagram/IGNavigationContext.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@protocol IGAutocompleteAsyncDataSourceIGAutocompleteNetworkDataSourceAnalytics, IGSearchResultsTab, IGSearchResultsViewControllerDelegate;
@class NSString, IGExploreSearchViewController, NSOrderedSet, NSMutableArray, IGListCollectionView, IGListAdapter;

@interface IGSearchResultsViewController : IGPlainTableViewController <IGAutocompleteAsyncDataSourceDelegate, IGRaindropAnalyticsDelegate, IGSearchResultCellDelegate, IGNavigationContext, UICollectionViewDelegate, IGExploreSearchChildViewController> {

	char _isSearching;
	char _isBackSpace;
	char _hasInteraction;
	id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> _dataSource;
	id<IGSearchResultsTab> _searchResultsTab;
	id<IGSearchResultsViewControllerDelegate> _delegate;
	NSString* _searchText;
	IGExploreSearchViewController* _hostingViewController;
	unsigned _minUnSeenRow;
	NSOrderedSet* _sectionControllers;
	NSMutableArray* _searchQueryArray;
	IGListCollectionView* _suggestionCollectionView;
	IGListAdapter* _suggestionListAdapter;

}

@property (nonatomic,readonly) id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<IGSearchResultsTab> searchResultsTab;                                                             //@synthesize searchResultsTab=_searchResultsTab - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultsViewControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                                                   //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) char isSearching;                                                                                    //@synthesize isSearching=_isSearching - In the implementation block
@property (assign,nonatomic,__weak) IGExploreSearchViewController * hostingViewController;                                          //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) unsigned minUnSeenRow;                                                                                 //@synthesize minUnSeenRow=_minUnSeenRow - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * sectionControllers;                                                                   //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchQueryArray;                                                                     //@synthesize searchQueryArray=_searchQueryArray - In the implementation block
@property (assign,nonatomic) char isBackSpace;                                                                                      //@synthesize isBackSpace=_isBackSpace - In the implementation block
@property (assign,nonatomic) char hasInteraction;                                                                                   //@synthesize hasInteraction=_hasInteraction - In the implementation block
@property (nonatomic,retain) IGListCollectionView * suggestionCollectionView;                                                       //@synthesize suggestionCollectionView=_suggestionCollectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * suggestionListAdapter;                                                                 //@synthesize suggestionListAdapter=_suggestionListAdapter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)matchQuery:(id)arg1 forItem:(id)arg2 prefixShouldMatch:(char)arg3 ;
+(id)targetIdFromItem:(id)arg1 ;
+(id)raindropResultIdFromItem:(id)arg1 ;
+(char)showHScrollSuggestions;
+(id)sectionWithHostingViewController:(id)arg1 frequentItems:(id)arg2 recentItems:(id)arg3 shouldShowFrequent:(char)arg4 ;
+(id)hiddenItemIds;
+(id)filteredItems:(id)arg1 hiddenSet:(id)arg2 ;
+(id)raindropInstagramEntityFromItem:(id)arg1 ;
-(id)analyticsExtras;
-(id)searchingCellForTableView:(id)arg1 ;
-(void)autocompleteDataSourceDidStartLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidFailLoad:(id)arg1 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)enableNavState;
-(id)fallbackIcon;
-(id)searchBarPlaceholder;
-(void)onSearchTextDidChange:(id)arg1 ;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 searchResultsTab:(id)arg3 ;
-(int)searchResultState;
-(void)searchDidEnd;
-(void)searchDidStart;
-(id<IGSearchResultsTab>)searchResultsTab;
-(void)transitionToVisibleState;
-(void)logSearchCancelEvent;
-(void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3 ;
-(void)logItemHide:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearSuggestions;
-(char)searchResultCellShouldLongPress:(id)arg1 ;
-(void)searchResultCellDidLongPress:(id)arg1 ;
-(void)logSearchBackSpaceRaindropEvent;
-(void)reloadTableView;
-(void)saveSearchQueryText:(id)arg1 ;
-(IGListAdapter *)suggestionListAdapter;
-(IGListCollectionView *)suggestionCollectionView;
-(void)setSuggestionListAdapter:(IGListAdapter *)arg1 ;
-(void)onClearSearchNotification:(id)arg1 ;
-(void)resetSearchImpressionTokenInfo;
-(void)reloadSearchView;
-(void)setHasInteraction:(char)arg1 ;
-(char)hasInteraction;
-(void)logRaindropSearchQueryEvent;
-(void)resetSearchRankTokenInfo;
-(void)logSearchBeginEvent;
-(void)logSearchInitiated;
-(void)setMinUnSeenRow:(unsigned)arg1 ;
-(NSOrderedSet *)sectionControllers;
-(id)sectionControllerForSection:(unsigned)arg1 ;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logSearchTypingRaindropEvent;
-(unsigned)minUnSeenRow;
-(void)logSearchResponseToSearchText:(id)arg1 rankToken:(id)arg2 ;
-(char)isSearchingIndicatorSection:(int)arg1 ;
-(char)shouldShowLocationCellInSection:(int)arg1 ;
-(id)noResultsCellForTableView:(id)arg1 ;
-(id)tableView:(id)arg1 resultCellForIndexPath:(id)arg2 ;
-(id)newSectionTitleWithFrame:(CGRect)arg1 title:(id)arg2 isHistory:(char)arg3 ;
-(void)didSelectResultRowAtIndexPath:(id)arg1 ;
-(void)hideButtonTappedWithItemID:(id)arg1 indexPath:(id)arg2 item:(id)arg3 ;
-(NSMutableArray *)searchQueryArray;
-(void)setSearchQueryArray:(NSMutableArray *)arg1 ;
-(char)isBackSpace;
-(void)setIsBackSpace:(char)arg1 ;
-(void)setSuggestionCollectionView:(IGListCollectionView *)arg1 ;
-(void)setHostingViewController:(IGExploreSearchViewController *)arg1 ;
-(char)isSearching;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDelegate:(id<IGSearchResultsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAutocompleteAsyncDataSource><IGAutocompleteNetworkDataSourceAnalytics>)dataSource;
-(id<IGSearchResultsViewControllerDelegate>)delegate;
-(id)popViewControllerAnimated:(char)arg1 ;
-(id)accessibilityIdentifier;
-(void)viewWillLayoutSubviews;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(UIEdgeInsets)preferredContentInsets;
-(NSString *)searchText;
-(IGExploreSearchViewController *)hostingViewController;
-(void)setSections:(id)arg1 ;
-(void)configure;
-(char)prefersNavigationBarHidden;
@end

