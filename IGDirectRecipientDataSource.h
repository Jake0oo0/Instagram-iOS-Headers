
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <Instagram/IGWebDataSource.h>

@protocol IGDirectRecipientDataSourceDelegate;
@class NSString, NSObject, NSArray, IGUserListNetworkDataSource, IGUserListLocalDataSource, NSCache;

@interface IGDirectRecipientDataSource : NSObject <IGUserListNetworkDataSourceDelegate, IGWebDataSource> {

	char _showThreads;
	char _fetchNullStateResults;
	char _isLocal;
	NSString* _searchString;
	NSObject*<IGDirectRecipientDataSourceDelegate> _delegate;
	NSArray* _currentResults;
	IGUserListNetworkDataSource* _networkSource;
	IGUserListLocalDataSource* _localDataSource;
	NSArray* _augmentedRecipients;
	NSCache* _searchCache;

}

@property (nonatomic,retain) NSArray * currentResults;                                                    //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,nonatomic) char isLocal;                                                                //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkSource;                                 //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) IGUserListLocalDataSource * localDataSource;                                 //@synthesize localDataSource=_localDataSource - In the implementation block
@property (nonatomic,retain) NSArray * augmentedRecipients;                                               //@synthesize augmentedRecipients=_augmentedRecipients - In the implementation block
@property (nonatomic,retain) NSCache * searchCache;                                                       //@synthesize searchCache=_searchCache - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                       //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGDirectRecipientDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showThreads;                                                            //@synthesize showThreads=_showThreads - In the implementation block
@property (assign,nonatomic) char fetchNullStateResults;                                                  //@synthesize fetchNullStateResults=_fetchNullStateResults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentResults:(NSArray *)arg1 ;
-(id)recipientListFromUserList:(id)arg1 ;
-(void)setAugmentedRecipients:(NSArray *)arg1 ;
-(NSArray *)augmentedRecipients;
-(char)fetchNullStateResults;
-(NSCache *)searchCache;
-(void)performSearchForString:(id)arg1 augmentRecipients:(id)arg2 recipientHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)recipientFromDictionary:(id)arg1 ;
-(void)updateLocalResultsForSearchString:(id)arg1 ;
-(void)useRankedContactsForString:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(char)showThreads;
-(id)parseResultsFromResponse:(id)arg1 augmentRecipients:(id)arg2 ;
-(void)setSearchCache:(NSCache *)arg1 ;
-(void)setShowThreads:(char)arg1 ;
-(void)fetchDataWithRecipientSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(char)useRankedContacts;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)setFetchNullStateResults:(char)arg1 ;
-(IGUserListNetworkDataSource *)networkSource;
-(void)setNetworkSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)fetchData;
-(void)setIsLocal:(char)arg1 ;
-(void)setDelegate:(NSObject*<IGDirectRecipientDataSourceDelegate>)arg1 ;
-(id)init;
-(NSObject*<IGDirectRecipientDataSourceDelegate>)delegate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(IGUserListLocalDataSource *)localDataSource;
-(void)setLocalDataSource:(IGUserListLocalDataSource *)arg1 ;
-(id)errorMessage;
-(NSArray *)currentResults;
-(char)isLocal;
@end

