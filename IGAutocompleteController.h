/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGAutocompleteAsyncDataSourceDelegate.h>

@protocol IGAutocompleteDataSource, IGAutocompleteControllerDelegate, IGAutocompleteControllerTextInput;
@class UIResponder, IGPlainTableView, IGUserListAutocompleteDataSource, IGHashtagAutocompleteDataSource, IGUserListLocalDataSource, IGHashtagListLocalDataSource, NSString;

@interface IGAutocompleteController : NSObject <UITableViewDataSource, UITableViewDelegate, IGAutocompleteAsyncDataSourceDelegate> {

	char _determinedNoResults;
	id<IGAutocompleteDataSource> _resultsDataSource;
	char _reverseScroll;
	char _committingText;
	char _useRemoteDataSources;
	char _useContextSensitiveAutocomplete;
	char _lastSearchWasEmpty;
	id<IGAutocompleteControllerDelegate> _delegate;
	UIResponder*<IGAutocompleteControllerTextInput> _textInput;
	IGPlainTableView* _tableView;
	IGUserListAutocompleteDataSource* _usersRemoteDataSource;
	IGHashtagAutocompleteDataSource* _hashtagsRemoteDataSource;
	IGUserListLocalDataSource* _usersLocalDataSource;
	IGHashtagListLocalDataSource* _hashtagsLocalDataSource;
	NSString* _analyticsModule;
	NSString* _currentAutocompletePrefix;
	NSString* _searchText;
	NSString* _analyticsSessionID;
	NSRange _currentAutocompleteRange;

}

@property (assign,nonatomic,__weak) id<IGAutocompleteControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIResponder*<IGAutocompleteControllerTextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (nonatomic,readonly) IGPlainTableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) IGUserListAutocompleteDataSource * usersRemoteDataSource;                    //@synthesize usersRemoteDataSource=_usersRemoteDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagAutocompleteDataSource * hashtagsRemoteDataSource;                  //@synthesize hashtagsRemoteDataSource=_hashtagsRemoteDataSource - In the implementation block
@property (nonatomic,readonly) IGUserListLocalDataSource * usersLocalDataSource;                            //@synthesize usersLocalDataSource=_usersLocalDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagListLocalDataSource * hashtagsLocalDataSource;                      //@synthesize hashtagsLocalDataSource=_hashtagsLocalDataSource - In the implementation block
@property (assign,getter=isReverseScroll,nonatomic) char reverseScroll;                                     //@synthesize reverseScroll=_reverseScroll - In the implementation block
@property (assign,getter=isCommittingText,nonatomic) char committingText;                                   //@synthesize committingText=_committingText - In the implementation block
@property (assign,nonatomic) char useRemoteDataSources;                                                     //@synthesize useRemoteDataSources=_useRemoteDataSources - In the implementation block
@property (assign,nonatomic) char useContextSensitiveAutocomplete;                                          //@synthesize useContextSensitiveAutocomplete=_useContextSensitiveAutocomplete - In the implementation block
@property (nonatomic,retain) NSString * analyticsModule;                                                    //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic) NSRange currentAutocompleteRange;                                              //@synthesize currentAutocompleteRange=_currentAutocompleteRange - In the implementation block
@property (nonatomic,copy) NSString * currentAutocompletePrefix;                                            //@synthesize currentAutocompletePrefix=_currentAutocompletePrefix - In the implementation block
@property (assign,nonatomic) char lastSearchWasEmpty;                                                       //@synthesize lastSearchWasEmpty=_lastSearchWasEmpty - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                                         //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSString * analyticsSessionID;                                                 //@synthesize analyticsSessionID=_analyticsSessionID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(id)arg1 ;
-(NSString *)analyticsModule;
-(void)displayAutocompleteOptionsForString:(id)arg1 isDeleting:(char)arg2 ;
-(void)hideAndResetResults;
-(id)userRegex;
-(void)setCurrentAutocompletePrefix:(NSString *)arg1 ;
-(id)hashtagRegex;
-(NSString *)analyticsSessionID;
-(void)reloadResultsTable;
-(void)setAnalyticsSessionID:(NSString *)arg1 ;
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
-(void)setCommittingText:(char)arg1 ;
-(void)autocompleteDataSourceDidFinishLoading:(id)arg1 ;
-(char)textInput:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setReverseScroll:(char)arg1 ;
-(void)displayAutocompleteOptionsForString:(id)arg1 ;
-(char)stringQualifies:(id)arg1 ;
-(IGUserListAutocompleteDataSource *)usersRemoteDataSource;
-(IGHashtagAutocompleteDataSource *)hashtagsRemoteDataSource;
-(IGUserListLocalDataSource *)usersLocalDataSource;
-(IGHashtagListLocalDataSource *)hashtagsLocalDataSource;
-(char)isReverseScroll;
-(char)isCommittingText;
-(char)useRemoteDataSources;
-(void)setUseRemoteDataSources:(char)arg1 ;
-(char)useContextSensitiveAutocomplete;
-(void)setUseContextSensitiveAutocomplete:(char)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(NSRange)currentAutocompleteRange;
-(void)setCurrentAutocompleteRange:(NSRange)arg1 ;
-(NSString *)currentAutocompletePrefix;
-(char)lastSearchWasEmpty;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGAutocompleteControllerDelegate>)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAutocompleteControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGPlainTableView *)tableView;
-(NSString *)searchText;
-(UIResponder*<IGAutocompleteControllerTextInput>)textInput;
-(void)setTextInput:(UIResponder*<IGAutocompleteControllerTextInput>)arg1 ;
@end

