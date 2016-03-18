
#import <Instagram/IGViewController.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsTabContentViewControllerDelegate.h>
#import <Instagram/IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate.h>
#import <Instagram/IGInsightsTabBarControllerDelegate.h>

@class IGInsightsTabBarController, UIActivityIndicatorView, IGInsightsDataProvider, NSArray, IGInsightsSeeAllPostsSwitchPostTypeButton, IGInsightsSeeAllPostsSwitchPostTypeController, UIView, NSMutableArray, NSMutableDictionary, NSString;

@interface IGInsightsSeeAllPostsViewController : IGViewController <IGInsightsDataProviderDelegate, IGInsightsSeeAllPostsTabContentViewControllerDelegate, IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate, IGInsightsTabBarControllerDelegate> {

	char _showDropDown;
	char _needRefreshView;
	IGInsightsTabBarController* _tabBarViewController;
	UIActivityIndicatorView* _spinner;
	IGInsightsDataProvider* _dataProvider;
	NSArray* _defaultTabComponents;
	NSArray* _defaultTabMediaOrderSelectorTabs;
	IGInsightsSeeAllPostsSwitchPostTypeButton* _postTypeButton;
	IGInsightsSeeAllPostsSwitchPostTypeController* _switchPostTypeController;
	UIView* _overlayViewForTabBar;
	UIView* _overlayForMainView;
	NSArray* _dropDownCells;
	NSMutableArray* _images;
	NSArray* _titles;
	unsigned _activeIndex;
	NSMutableDictionary* _queryItems;

}

@property (nonatomic,retain) IGInsightsTabBarController * tabBarViewController;                                       //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                       //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * dataProvider;                                                   //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabComponents;                                                            //@synthesize defaultTabComponents=_defaultTabComponents - In the implementation block
@property (nonatomic,copy) NSArray * defaultTabMediaOrderSelectorTabs;                                                //@synthesize defaultTabMediaOrderSelectorTabs=_defaultTabMediaOrderSelectorTabs - In the implementation block
@property (nonatomic,retain) IGInsightsSeeAllPostsSwitchPostTypeButton * postTypeButton;                              //@synthesize postTypeButton=_postTypeButton - In the implementation block
@property (nonatomic,readonly) IGInsightsSeeAllPostsSwitchPostTypeController * switchPostTypeController;              //@synthesize switchPostTypeController=_switchPostTypeController - In the implementation block
@property (assign,nonatomic) char showDropDown;                                                                       //@synthesize showDropDown=_showDropDown - In the implementation block
@property (assign,nonatomic) char needRefreshView;                                                                    //@synthesize needRefreshView=_needRefreshView - In the implementation block
@property (nonatomic,readonly) UIView * overlayViewForTabBar;                                                         //@synthesize overlayViewForTabBar=_overlayViewForTabBar - In the implementation block
@property (nonatomic,readonly) UIView * overlayForMainView;                                                           //@synthesize overlayForMainView=_overlayForMainView - In the implementation block
@property (nonatomic,copy) NSArray * dropDownCells;                                                                   //@synthesize dropDownCells=_dropDownCells - In the implementation block
@property (nonatomic,copy) NSMutableArray * images;                                                                   //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSArray * titles;                                                                          //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                                                                    //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * queryItems;                                                          //@synthesize queryItems=_queryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1 ;
-(id)initWithQueryItems:(id)arg1 ;
-(void)setActiveIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)seeAllPostsSwitchPostTypeController:(id)arg1 didSelectPostAtIndex:(unsigned)arg2 ;
-(void)initializeSpinner;
-(void)didSelectNavigateInSeeAllPostsTabContentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)loadOverlays;
-(void)loadPostTypeButton;
-(IGInsightsTabBarController *)tabBarViewController;
-(IGInsightsSeeAllPostsSwitchPostTypeController *)switchPostTypeController;
-(char)showDropDown;
-(id)postTypeAtIndex:(unsigned)arg1 ;
-(void)setNeedRefreshView:(char)arg1 ;
-(void)animateSwitchPostTypeTableView;
-(IGInsightsSeeAllPostsSwitchPostTypeButton *)postTypeButton;
-(void)setupTabBarViewController;
-(void)setPostTypeButton:(IGInsightsSeeAllPostsSwitchPostTypeButton *)arg1 ;
-(void)overlayViewTapped:(id)arg1 ;
-(UIView *)overlayForMainView;
-(UIView *)overlayViewForTabBar;
-(void)setShowDropDown:(char)arg1 ;
-(char)needRefreshView;
-(void)requestTabBarItemsAndDefaultTabContent;
-(NSArray *)dropDownCells;
-(void)setDropDownCells:(NSArray *)arg1 ;
-(id)getTitlesFromDropDownCells:(id)arg1 ;
-(unsigned)getDropDownCellsActiveIndex;
-(void)setDefaultTabComponents:(NSArray *)arg1 ;
-(void)setDefaultTabMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(id)createTabContentViewControllerWithQueryItems:(id)arg1 isDefaultTab:(char)arg2 ;
-(NSArray *)defaultTabComponents;
-(NSArray *)defaultTabMediaOrderSelectorTabs;
-(void)insightsTabBarController:(id)arg1 tappedSegmentIndex:(unsigned)arg2 ;
-(void)setTabBarViewController:(IGInsightsTabBarController *)arg1 ;
-(void)loadView;
-(NSMutableArray *)images;
-(void)viewDidLayoutSubviews;
-(void)setTitles:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)titles;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)setDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)dataProvider;
-(void)setQueryItems:(NSMutableDictionary *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSMutableDictionary *)queryItems;
-(void)startRequest;
@end

