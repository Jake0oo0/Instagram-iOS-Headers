
#import <Instagram/IGSearchResultsTab.h>

@class NSString, IGSearchResultsEnableLocationCell, IGUserListAutocompleteDataSource;

@interface IGUserSearchResults : NSObject <IGSearchResultsTab> {

	char _raindropEnableNavState;
	char _canShowLocationCell;
	char _shouldShowSectionHeader;
	char _enableFrequentItems;
	NSString* _moduleName;
	int _raindropViewType;
	int _raindropSearchType;
	int _raindropViewSubType;
	NSString* _noResultsMessage;
	NSString* _queryType;
	NSString* _tapEventName;
	NSString* _tapCancelEventName;
	IGSearchResultsEnableLocationCell* _locationCell;
	IGUserListAutocompleteDataSource* _dataSource;

}

@property (nonatomic,readonly) IGUserListAutocompleteDataSource * dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * moduleName;                                           //@synthesize moduleName=_moduleName - In the implementation block
@property (assign,nonatomic) int raindropViewType;                                          //@synthesize raindropViewType=_raindropViewType - In the implementation block
@property (assign,nonatomic) char raindropEnableNavState;                                   //@synthesize raindropEnableNavState=_raindropEnableNavState - In the implementation block
@property (assign,nonatomic) int raindropSearchType;                                        //@synthesize raindropSearchType=_raindropSearchType - In the implementation block
@property (assign,nonatomic) int raindropViewSubType;                                       //@synthesize raindropViewSubType=_raindropViewSubType - In the implementation block
@property (assign,nonatomic) char canShowLocationCell;                                      //@synthesize canShowLocationCell=_canShowLocationCell - In the implementation block
@property (assign,nonatomic) char shouldShowSectionHeader;                                  //@synthesize shouldShowSectionHeader=_shouldShowSectionHeader - In the implementation block
@property (nonatomic,retain) NSString * noResultsMessage;                                   //@synthesize noResultsMessage=_noResultsMessage - In the implementation block
@property (nonatomic,retain) NSString * queryType;                                          //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,retain) NSString * tapEventName;                                       //@synthesize tapEventName=_tapEventName - In the implementation block
@property (nonatomic,retain) NSString * tapCancelEventName;                                 //@synthesize tapCancelEventName=_tapCancelEventName - In the implementation block
@property (nonatomic,retain) IGSearchResultsEnableLocationCell * locationCell;              //@synthesize locationCell=_locationCell - In the implementation block
@property (assign,nonatomic) char enableFrequentItems;                                      //@synthesize enableFrequentItems=_enableFrequentItems - In the implementation block
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(unsigned)numberOfLocalResults;
-(id)fallbackIcon;
-(char)enableFrequentItems;
-(char)shouldShowFrequentSection;
-(void)filterBySearchString:(id)arg1 surfaceRankInfo:(id)arg2 ;
-(char)isLocalItem:(id)arg1 ;
-(char)noSearchQuery:(id)arg1 ;
-(id)allSearchResults;
-(id)tableSectionsWithViewController:(id)arg1 ;
-(id)idResultsList;
-(void)clearFrequent;
-(void)frequentItemsLoaded;
-(int)filterResultState:(int)arg1 ;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(NSString *)moduleName;
-(void)setModuleName:(NSString *)arg1 ;
-(int)raindropViewType;
-(void)setRaindropViewType:(int)arg1 ;
-(char)raindropEnableNavState;
-(void)setRaindropEnableNavState:(char)arg1 ;
-(int)raindropSearchType;
-(void)setRaindropSearchType:(int)arg1 ;
-(int)raindropViewSubType;
-(void)setRaindropViewSubType:(int)arg1 ;
-(char)canShowLocationCell;
-(void)setCanShowLocationCell:(char)arg1 ;
-(char)shouldShowSectionHeader;
-(void)setShouldShowSectionHeader:(char)arg1 ;
-(NSString *)queryType;
-(void)setQueryType:(NSString *)arg1 ;
-(NSString *)tapEventName;
-(void)setTapEventName:(NSString *)arg1 ;
-(NSString *)tapCancelEventName;
-(void)setTapCancelEventName:(NSString *)arg1 ;
-(IGSearchResultsEnableLocationCell *)locationCell;
-(void)setLocationCell:(IGSearchResultsEnableLocationCell *)arg1 ;
-(void)setEnableFrequentItems:(char)arg1 ;
-(id)searchBarPlaceholder;
-(void)onSearchTextDidChange:(id)arg1 ;
-(IGUserListAutocompleteDataSource *)dataSource;
-(id)title;
-(id)accessibilityIdentifier;
-(NSString *)noResultsMessage;
-(void)setNoResultsMessage:(NSString *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
@end

