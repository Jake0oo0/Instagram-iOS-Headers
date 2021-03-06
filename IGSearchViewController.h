
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTabPageViewController.h>
#import <Instagram/IGNavSearchBarDelegate.h>
#import <Instagram/IGTabPageViewControllerDelegate.h>
#import <Instagram/IGSearchResultsViewControllerDelegate.h>

@protocol IGExploreSearchControllerDelegate;
@class IGExploreAutocompleteSearchHelper, NSDate, NSString, IGNavSearchBar, IGSearchResultsViewController, IGKVOHandle, UIView;

@interface IGSearchViewController : IGTabPageViewController <IGNavSearchBarDelegate, IGTabPageViewControllerDelegate, IGSearchResultsViewControllerDelegate> {

	char _isActive;
	char _willMoveToParentVC;
	IGExploreAutocompleteSearchHelper* _searchHelper;
	id<IGExploreSearchControllerDelegate> _searchDelegate;
	NSDate* _lastSearch;
	NSString* _sessionId;
	IGNavSearchBar* _searchBar;
	IGSearchResultsViewController* _topSearchViewController;
	IGSearchResultsViewController* _userSearchViewController;
	IGSearchResultsViewController* _hashtagSearchViewController;
	IGSearchResultsViewController* _placesSearchViewController;
	IGKVOHandle* _topResultsContentOffsetObserver;
	IGKVOHandle* _userResultsContentOffsetObserver;
	IGKVOHandle* _hashtagResultsContentOffsetObserver;
	IGKVOHandle* _placeResultsContentOffsetObserver;
	UIView* _navView;
	UIView* _navLineView;
	CGRect _originalHostingContenViewFrame;
	CGRect _originalHostingTabControlFrame;

}

@property (nonatomic,retain) IGViewController*<IGExploreSearchChildViewController> currentViewController; 
@property (nonatomic,retain) IGNavSearchBar * searchBar;                                                               //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) char isActive;                                                                            //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                                                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) IGExploreAutocompleteSearchHelper * searchHelper;                                       //@synthesize searchHelper=_searchHelper - In the implementation block
@property (nonatomic,retain) IGSearchResultsViewController * topSearchViewController;                                  //@synthesize topSearchViewController=_topSearchViewController - In the implementation block
@property (nonatomic,retain) IGSearchResultsViewController * userSearchViewController;                                 //@synthesize userSearchViewController=_userSearchViewController - In the implementation block
@property (nonatomic,retain) IGSearchResultsViewController * hashtagSearchViewController;                              //@synthesize hashtagSearchViewController=_hashtagSearchViewController - In the implementation block
@property (nonatomic,retain) IGSearchResultsViewController * placesSearchViewController;                               //@synthesize placesSearchViewController=_placesSearchViewController - In the implementation block
@property (nonatomic,retain) IGKVOHandle * topResultsContentOffsetObserver;                                            //@synthesize topResultsContentOffsetObserver=_topResultsContentOffsetObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * userResultsContentOffsetObserver;                                           //@synthesize userResultsContentOffsetObserver=_userResultsContentOffsetObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * hashtagResultsContentOffsetObserver;                                        //@synthesize hashtagResultsContentOffsetObserver=_hashtagResultsContentOffsetObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * placeResultsContentOffsetObserver;                                          //@synthesize placeResultsContentOffsetObserver=_placeResultsContentOffsetObserver - In the implementation block
@property (nonatomic,retain) UIView * navView;                                                                         //@synthesize navView=_navView - In the implementation block
@property (nonatomic,retain) UIView * navLineView;                                                                     //@synthesize navLineView=_navLineView - In the implementation block
@property (assign,nonatomic) CGRect originalHostingContenViewFrame;                                                    //@synthesize originalHostingContenViewFrame=_originalHostingContenViewFrame - In the implementation block
@property (assign,nonatomic) CGRect originalHostingTabControlFrame;                                                    //@synthesize originalHostingTabControlFrame=_originalHostingTabControlFrame - In the implementation block
@property (assign,nonatomic) char willMoveToParentVC;                                                                  //@synthesize willMoveToParentVC=_willMoveToParentVC - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreSearchControllerDelegate> searchDelegate;                              //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (nonatomic,readonly) NSDate * lastSearch;                                                                    //@synthesize lastSearch=_lastSearch - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(char)disableNonEdgeNavigationGesture;
-(void)animatePushTransition:(id)arg1 duration:(double)arg2 complete:(/*^block*/id)arg3 ;
-(void)performPopTransition:(id)arg1 toVC:(id)arg2 duration:(double)arg3 complete:(/*^block*/id)arg4 ;
-(void)fetchFrequentItemsIfNeeded;
-(CGRect)searchBarFrame;
-(void)resetSearchViewForRootVC:(id)arg1 ;
-(void)pageViewController:(id)arg1 didPageToViewController:(id)arg2 ;
-(char)disableNavigationGesture;
-(void)searchBarButtonTapped:(id)arg1 ;
-(void)searchBarCancelButtonTapped:(id)arg1 ;
-(void)searchBarChannelHomeTapped:(id)arg1 ;
-(void)searchBarPeopleIconTapped:(id)arg1 ;
-(void)searchBarDirectIconTapped:(id)arg1 ;
-(void)searchBarWillBeginEditing:(id)arg1 ;
-(void)searchBarWillEndEditing:(id)arg1 ;
-(void)searchBarReturnKeyTapped:(id)arg1 ;
-(NSDate *)lastSearch;
-(void)didTapSearchResult;
-(void)searchDidStart;
-(void)searchDidEnd;
-(IGSearchResultsViewController *)topSearchViewController;
-(IGSearchResultsViewController *)userSearchViewController;
-(IGSearchResultsViewController *)hashtagSearchViewController;
-(IGSearchResultsViewController *)placesSearchViewController;
-(void)updateRecentHideItems;
-(void)setNavLineView:(UIView *)arg1 ;
-(UIView *)navView;
-(void)updateSearchbarPlaceholderForController:(id)arg1 ;
-(char)willMoveToParentVC;
-(void)setWillMoveToParentVC:(char)arg1 ;
-(IGExploreAutocompleteSearchHelper *)searchHelper;
-(id)createSearchObserverForSearchResultViewController:(id)arg1 ;
-(void)setTopResultsContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(void)setUserResultsContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(void)setHashtagResultsContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(void)setPlaceResultsContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(UIView *)navLineView;
-(void)onSearchWillBecomeActive;
-(void)onSearchWillBecomeInactive;
-(void)searchTableViewController:(id)arg1 didChangeSearchText:(id)arg2 ;
-(void)setTopSearchViewController:(IGSearchResultsViewController *)arg1 ;
-(void)setUserSearchViewController:(IGSearchResultsViewController *)arg1 ;
-(void)setHashtagSearchViewController:(IGSearchResultsViewController *)arg1 ;
-(void)setPlacesSearchViewController:(IGSearchResultsViewController *)arg1 ;
-(IGKVOHandle *)topResultsContentOffsetObserver;
-(IGKVOHandle *)userResultsContentOffsetObserver;
-(IGKVOHandle *)hashtagResultsContentOffsetObserver;
-(IGKVOHandle *)placeResultsContentOffsetObserver;
-(void)setNavView:(UIView *)arg1 ;
-(CGRect)originalHostingContenViewFrame;
-(void)setOriginalHostingContenViewFrame:(CGRect)arg1 ;
-(CGRect)originalHostingTabControlFrame;
-(void)setOriginalHostingTabControlFrame:(CGRect)arg1 ;
-(void)onSearchTextDidChange:(id)arg1 ;
-(char)enableNavState;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(int)preferredStatusBarStyle;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(IGNavSearchBar *)searchBar;
-(UIEdgeInsets)preferredContentInsets;
-(void)setIsActive:(char)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(NSString *)searchText;
-(void)setSearchBar:(IGNavSearchBar *)arg1 ;
-(void)setSearchDelegate:(id<IGExploreSearchControllerDelegate>)arg1 ;
-(id<IGExploreSearchControllerDelegate>)searchDelegate;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(char)prefersNavigationBarHidden;
@end

