
#import <Instagram/IGFeedNetworkSource.h>
#import <Instagram/IGFeedNetworkSourceSerializable.h>

@protocol IGMainFeedNetworkSourceDelegate;
@class NSArray, NSString;

@interface IGMainFeedNetworkSource : IGFeedNetworkSource <IGFeedNetworkSourceSerializable> {

	char _isPrefetch;
	id<IGMainFeedNetworkSourceDelegate> _mainFeedDelegate;
	NSArray* _followAccountList;
	NSString* _firstPostBeforeFeedReloadPK;

}

@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceDelegate> mainFeedDelegate;              //@synthesize mainFeedDelegate=_mainFeedDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * followAccountList;                                            //@synthesize followAccountList=_followAccountList - In the implementation block
@property (nonatomic,readonly) NSString * firstPostBeforeFeedReloadPK;                                 //@synthesize firstPostBeforeFeedReloadPK=_firstPostBeforeFeedReloadPK - In the implementation block
@property (assign,nonatomic) char isPrefetch;                                                          //@synthesize isPrefetch=_isPrefetch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 userSession:(id)arg3 ;
-(void)setIsPrefetch:(char)arg1 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 fetchPath:(id)arg3 userSession:(id)arg4 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(id)injectedCompleteFeedResponse:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(void)handleSuccessBlockWithResponse:(id)arg1 requestConfig:(id)arg2 ;
-(char)fetchMoreItemsWithParameters:(id)arg1 ;
-(char)fetchMoreItems;
-(NSString *)firstPostBeforeFeedReloadPK;
-(id)parametersForBatteryInfo;
-(id)parametersForHeadRequest;
-(id<IGMainFeedNetworkSourceDelegate>)mainFeedDelegate;
-(void)loadPromotionBannerInfoFromResponse:(id)arg1 ;
-(id)serializedDataFilePath;
-(void)deserializeEntriesAtPath:(id)arg1 ;
-(void)serializeData;
-(void)deserializeData;
-(void)setMainFeedDelegate:(id<IGMainFeedNetworkSourceDelegate>)arg1 ;
-(NSArray *)followAccountList;
-(char)fetchData;
-(void)archiveToFile:(id)arg1 ;
-(char)isPrefetch;
@end

