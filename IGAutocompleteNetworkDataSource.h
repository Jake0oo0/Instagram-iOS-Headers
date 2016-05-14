/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGAutocompleteNetworkDataSourceDelegate;
@class IGSearchCacheEntry, NSMutableDictionary, IGRequest, NSTimer;

@interface IGAutocompleteNetworkDataSource : NSObject {

	char _shouldReverseSort;
	id<IGAutocompleteNetworkDataSourceDelegate> _delegate;
	unsigned _maxLocalSuggestionCount;
	unsigned _maxTotalSuggestionCount;
	unsigned _maxServerResultCount;
	IGSearchCacheEntry* _currentEntry;
	NSMutableDictionary* _queryCache;
	IGRequest* _currentRequest;
	NSTimer* _serverSearchTimer;
	double _lastServerRequestTime;

}

@property (nonatomic,retain) IGSearchCacheEntry * currentEntry;                                        //@synthesize currentEntry=_currentEntry - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queryCache;                                         //@synthesize queryCache=_queryCache - In the implementation block
@property (assign,nonatomic) double lastServerRequestTime;                                             //@synthesize lastServerRequestTime=_lastServerRequestTime - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                                               //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSTimer * serverSearchTimer;                                              //@synthesize serverSearchTimer=_serverSearchTimer - In the implementation block
@property (assign,nonatomic,__weak) id<IGAutocompleteNetworkDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned maxLocalSuggestionCount;                                         //@synthesize maxLocalSuggestionCount=_maxLocalSuggestionCount - In the implementation block
@property (assign,nonatomic) unsigned maxTotalSuggestionCount;                                         //@synthesize maxTotalSuggestionCount=_maxTotalSuggestionCount - In the implementation block
@property (assign,nonatomic) unsigned maxServerResultCount;                                            //@synthesize maxServerResultCount=_maxServerResultCount - In the implementation block
@property (assign,nonatomic) char shouldReverseSort;                                                   //@synthesize shouldReverseSort=_shouldReverseSort - In the implementation block
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(id)canonicalQueryString:(id)arg1 ;
-(IGSearchCacheEntry *)currentEntry;
-(NSMutableDictionary *)queryCache;
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
-(void)setQueryCache:(NSMutableDictionary *)arg1 ;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteNetworkDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGAutocompleteNetworkDataSourceDelegate>)delegate;
-(void)reset;
-(IGRequest *)currentRequest;
@end

