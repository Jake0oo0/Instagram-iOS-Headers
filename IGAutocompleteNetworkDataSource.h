

@protocol IGAutocompleteNetworkDataSourceDelegate;
@class IGSearchCacheEntry, IGSearchCache, IGRequest, NSTimer;

@interface IGAutocompleteNetworkDataSource : NSObject {

	id<IGAutocompleteNetworkDataSourceDelegate> _delegate;
	unsigned _maxLocalSuggestionCount;
	unsigned _maxTotalSuggestionCount;
	unsigned _maxServerResultCount;
	IGSearchCacheEntry* _currentEntry;
	IGSearchCache* _queryCache;
	IGRequest* _currentRequest;
	NSTimer* _serverSearchTimer;
	double _lastServerRequestTime;

}

@property (nonatomic,retain) IGSearchCacheEntry * currentEntry;                                        //@synthesize currentEntry=_currentEntry - In the implementation block
@property (nonatomic,retain) IGSearchCache * queryCache;                                               //@synthesize queryCache=_queryCache - In the implementation block
@property (assign,nonatomic) double lastServerRequestTime;                                             //@synthesize lastServerRequestTime=_lastServerRequestTime - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                                               //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSTimer * serverSearchTimer;                                              //@synthesize serverSearchTimer=_serverSearchTimer - In the implementation block
@property (assign,nonatomic,__weak) id<IGAutocompleteNetworkDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned maxLocalSuggestionCount;                                         //@synthesize maxLocalSuggestionCount=_maxLocalSuggestionCount - In the implementation block
@property (assign,nonatomic) unsigned maxTotalSuggestionCount;                                         //@synthesize maxTotalSuggestionCount=_maxTotalSuggestionCount - In the implementation block
@property (assign,nonatomic) unsigned maxServerResultCount;                                            //@synthesize maxServerResultCount=_maxServerResultCount - In the implementation block
-(id)canonicalQueryString:(id)arg1 ;
-(IGSearchCacheEntry *)currentEntry;
-(IGSearchCache *)queryCache;
-(void)setCurrentEntry:(IGSearchCacheEntry *)arg1 ;
-(unsigned)maxTotalSuggestionCount;
-(id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2 ;
-(unsigned)maxLocalSuggestionCount;
-(double)lastServerRequestTime;
-(void)sendServerRequestIfNeeded:(id)arg1 ;
-(NSTimer *)serverSearchTimer;
-(void)setServerSearchTimer:(NSTimer *)arg1 ;
-(void)setLastServerRequestTime:(double)arg1 ;
-(id)requestForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 ;
-(void)setQueryString:(id)arg1 withRankToken:(id)arg2 additionalParams:(id)arg3 analyticsInfo:(id)arg4 ;
-(char)isLocalSuggestion:(id)arg1 ;
-(int)numberOfLocalSuggestions;
-(void)setMaxLocalSuggestionCount:(unsigned)arg1 ;
-(void)setMaxTotalSuggestionCount:(unsigned)arg1 ;
-(unsigned)maxServerResultCount;
-(void)setMaxServerResultCount:(unsigned)arg1 ;
-(void)setQueryCache:(IGSearchCache *)arg1 ;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteNetworkDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGAutocompleteNetworkDataSourceDelegate>)delegate;
-(void)reset;
-(IGRequest *)currentRequest;
@end

