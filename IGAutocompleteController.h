
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGAutocompleteAsyncDataSourceDelegate.h>

@protocol IGAutocompleteControllerDelegate, IGAutocompleteControllerTextInput;
@class IGAutocompleteDataSource, UIResponder, IGPlainTableView, IGUserListAutocompleteDataSource, IGHashtagAutocompleteDataSource, IGUserListLocalDataSource, IGHashtagListLocalDataSource, NSString, NSArray;

@interface IGAutocompleteController : NSObject <UITableViewDataSource, UITableViewDelegate, IGAutocompleteAsyncDataSourceDelegate> {

	char _determinedNoResults;
	IGAutocompleteDataSource* _resultsDataSource;
	char _reverseScroll;
	char _committingText;
	char _useRemoteDataSources;
	char _lastSearchWasEmpty;
	char _isShowingDefaultUserList;
	id<IGAutocompleteControllerDelegate> _delegate;
	UIResponder*<IGAutocompleteControllerTextInput> _textInput;
	IGPlainTableView* _tableView;
	IGUserListAutocompleteDataSource* _usersRemoteDataSource;
	IGHashtagAutocompleteDataSource* _hashtagsRemoteDataSource;
	IGUserListLocalDataSource* _usersLocalDataSource;
	IGHashtagListLocalDataSource* _hashtagsLocalDataSource;
	NSString* _analyticsModule;
	NSString* _searchText;
	NSString* _currentAutocompletePrefix;
	NSString* _analyticsSessionID;
	int _displayedResultsType;
	NSArray* _displayedResults;
	NSRange _currentAutocompleteRange;

}

@property (assign,getter=isCommittingText,nonatomic) char committingText;                                   //@synthesize committingText=_committingText - In the implementation block
@property (assign,nonatomic) NSRange currentAutocompleteRange;                                              //@synthesize currentAutocompleteRange=_currentAutocompleteRange - In the implementation block
@property (nonatomic,copy) NSString * currentAutocompletePrefix;                                            //@synthesize currentAutocompletePrefix=_currentAutocompletePrefix - In the implementation block
@property (assign,nonatomic) char lastSearchWasEmpty;                                                       //@synthesize lastSearchWasEmpty=_lastSearchWasEmpty - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                                         //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSString * analyticsSessionID;                                                 //@synthesize analyticsSessionID=_analyticsSessionID - In the implementation block
@property (assign,nonatomic) int displayedResultsType;                                                      //@synthesize displayedResultsType=_displayedResultsType - In the implementation block
@property (nonatomic,retain) NSArray * displayedResults;                                                    //@synthesize displayedResults=_displayedResults - In the implementation block
@property (assign,nonatomic) char isShowingDefaultUserList;                                                 //@synthesize isShowingDefaultUserList=_isShowingDefaultUserList - In the implementation block
@property (assign,nonatomic,__weak) id<IGAutocompleteControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder*<IGAutocompleteControllerTextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,readonly) IGPlainTableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) IGUserListAutocompleteDataSource * usersRemoteDataSource;                    //@synthesize usersRemoteDataSource=_usersRemoteDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagAutocompleteDataSource * hashtagsRemoteDataSource;                  //@synthesize hashtagsRemoteDataSource=_hashtagsRemoteDataSource - In the implementation block
@property (nonatomic,readonly) IGUserListLocalDataSource * usersLocalDataSource;                            //@synthesize usersLocalDataSource=_usersLocalDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagListLocalDataSource * hashtagsLocalDataSource;                      //@synthesize hashtagsLocalDataSource=_hashtagsLocalDataSource - In the implementation block
@property (assign,getter=isReverseScroll,nonatomic) char reverseScroll;                                     //@synthesize reverseScroll=_reverseScroll - In the implementation block
@property (assign,nonatomic) char useRemoteDataSources;                                                     //@synthesize useRemoteDataSources=_useRemoteDataSources - In the implementation block
@property (nonatomic,retain) NSString * analyticsModule;                                                    //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)displayAutocompleteOptionsForString:(id)arg1 ;
-(char)showDefaultUserListExperimentEnabled;
-(char)isStartingUserTagging:(id)arg1 ;
-(void)showDefaultUserList;
-(void)setCurrentAutocompletePrefix:(NSString *)arg1 ;
-(char)isShowingDefaultUserList;
-(void)clearDefaultUserList;
-(id)findMatchingUserInString:(id)arg1 ;
-(id)findMatchingHashtagInString:(id)arg1 ;
-(id)generateAnalyticsInfoDictionary;
-(NSString *)analyticsSessionID;
-(void)reloadResultsTable;
-(void)setAnalyticsSessionID:(NSString *)arg1 ;
-(void)setIsShowingDefaultUserList:(char)arg1 ;
-(id)userRegex;
-(id)hashtagRegex;
-(char)resultsTableVisible;
-(void)hideResultsTable;
-(void)resetResultsTableFilter;
-(void)scrollTableViewToBottom;
-(char)resultsDataSourceIsLoading;
-(void)setLastSearchWasEmpty:(char)arg1 ;
-(void)showResultsTable;
-(id)searchingCellForTableView:(id)arg1 ;
-(id)tableView:(id)arg1 hashtagCellForRow:(int)arg2 ;
-(id)tableView:(id)arg1 userCellForRow:(int)arg2 ;
-(void)updateTextInputWithAutocompleteText:(id)arg1 ;
-(IGUserListAutocompleteDataSource *)usersRemoteDataSource;
-(IGHashtagAutocompleteDataSource *)hashtagsRemoteDataSource;
-(IGUserListLocalDataSource *)usersLocalDataSource;
-(IGHashtagListLocalDataSource *)hashtagsLocalDataSource;
-(char)isReverseScroll;
-(char)useRemoteDataSources;
-(NSRange)currentAutocompleteRange;
-(void)setCurrentAutocompleteRange:(NSRange)arg1 ;
-(NSString *)currentAutocompletePrefix;
-(char)lastSearchWasEmpty;
-(int)displayedResultsType;
-(void)setDisplayedResultsType:(int)arg1 ;
-(NSArray *)displayedResults;
-(void)setDisplayedResults:(NSArray *)arg1 ;
-(void)setReverseScroll:(char)arg1 ;
-(char)stringQualifies:(id)arg1 ;
-(void)hideAndResetResults;
-(void)textInputDidChange;
-(char)isCommittingText;
-(void)setCommittingText:(char)arg1 ;
-(void)setFeedItem:(id)arg1 ;
-(void)setUseRemoteDataSources:(char)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)autocompleteDataSourceDidStartLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1 ;
-(void)autocompleteDataSourceDidFailLoad:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAutocompleteControllerDelegate>)delegate;
-(IGPlainTableView *)tableView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)searchText;
-(UIResponder*<IGAutocompleteControllerTextInput>)textInput;
-(void)setTextInput:(UIResponder*<IGAutocompleteControllerTextInput>)arg1 ;
@end

