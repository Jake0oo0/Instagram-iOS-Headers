/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteNetworkDataSourceDelegate.h>
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@class IGPlacesAutocompleteNetworkDataSource, IGAutocompleteDataSourceStore, NSString, NSDictionary;

@interface IGPlacesAutocompleteDataSource : NSObject <IGAutocompleteNetworkDataSourceDelegate, IGAutocompleteAsyncDataSource, IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	char _responseWasFoundInQueryCache;
	char _isResponseQueryLocation;
	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;
	IGPlacesAutocompleteNetworkDataSource* _dataSource;
	IGAutocompleteDataSourceStore* _dataStore;
	NSString* _responseQueryText;
	NSString* _responseRankToken;
	NSDictionary* _analyticsInfo;

}

@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSearching,nonatomic) char searching;                                      //@synthesize searching=_searching - In the implementation block
@property (nonatomic,retain) IGPlacesAutocompleteNetworkDataSource * dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGAutocompleteDataSourceStore * dataStore;                              //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                             //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                             //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                                           //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (assign,nonatomic) char responseWasFoundInQueryCache;                                      //@synthesize responseWasFoundInQueryCache=_responseWasFoundInQueryCache - In the implementation block
@property (assign,nonatomic) char isResponseQueryLocation;                                           //@synthesize isResponseQueryLocation=_isResponseQueryLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(char)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(char)arg7 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 ;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(void)setResponseWasFoundInQueryCache:(char)arg1 ;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(char)responseWasFoundInQueryCache;
-(char)isResponseQueryLocation;
-(void)setIsResponseQueryLocation:(char)arg1 ;
-(void)beginFilteringLocationsCloseTo:(id)arg1 rankToken:(id)arg2 analyticsInfo:(id)arg3 ;
-(id)initWithMaximumLocalResults:(unsigned)arg1 maximumServerResults:(unsigned)arg2 ;
-(void)beginFilteringLocations:(id)arg1 closeToLocation:(id)arg2 rankToken:(id)arg3 analyticsInfo:(id)arg4 ;
-(void)beginFilteringLocations:(id)arg1 closeToLocation:(id)arg2 rankToken:(id)arg3 analyticsInfo:(id)arg4 ignoreEmptyQuery:(char)arg5 ;
-(char)isSearching;
-(void)setDataSource:(IGPlacesAutocompleteNetworkDataSource *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id)init;
-(IGPlacesAutocompleteNetworkDataSource *)dataSource;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
-(void)reset;
-(void)setSearching:(char)arg1 ;
-(unsigned)numberOfResults;
-(void)setDataStore:(IGAutocompleteDataSourceStore *)arg1 ;
-(IGAutocompleteDataSourceStore *)dataStore;
-(void)clearResults;
@end

