
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@class IGRequest, IGService, NSSet, NSString, NSDictionary;

@interface IGBlendedSearchDataSource : NSObject <IGAutocompleteAsyncDataSource, IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;
	IGRequest* _currentRequest;
	IGService* _service;
	NSSet* _hashtags;
	NSSet* _users;
	NSSet* _places;
	NSString* _responseQueryText;
	NSString* _responseRankToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate; 
@property (assign,getter=isSearching,nonatomic) char searching;                                      //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                                             //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) IGService * service;                                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSSet * hashtags;                                                     //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,readonly) NSSet * users;                                                        //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) NSSet * places;                                                       //@synthesize places=_places - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                             //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                             //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
@property (nonatomic,readonly) char responseWasFoundInQueryCache; 
+(id)itemsFromJson:(id)arg1 itemCreationBlock:(/*^block*/id)arg2 ;
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(NSDictionary *)analyticsInfo;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(char)responseWasFoundInQueryCache;
-(id)requestForQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(NSSet *)hashtags;
-(void)fetchDataForSearchQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(void)fetchFrequentItems;
-(id)hashtagResults;
-(id)userResults;
-(id)blendedResults;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(char)isSearching;
-(void)fetchData;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
-(void)setSearching:(char)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(IGRequest *)currentRequest;
-(IGService *)service;
-(id)placeResults;
-(NSSet *)places;
-(unsigned)numberOfResults;
-(NSSet *)users;
-(void)clearResults;
-(void)setService:(IGService *)arg1 ;
@end

