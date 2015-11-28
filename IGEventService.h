
#import <Instagram/IGNetworkSourceDelegate.h>

@protocol IGEventServiceNetworkDelegate, IGEventServiceCacheDelegate;
@class IGNetworkSource, IGEventFeedDataArchiver, NSString;

@interface IGEventService : NSObject <IGNetworkSourceDelegate> {

	id<IGEventServiceNetworkDelegate> _networkDelegate;
	id<IGEventServiceCacheDelegate> _cacheDelegate;
	IGNetworkSource* _networkSource;
	IGEventFeedDataArchiver* _feedDataArchiver;
	NSString* _eventId;
	NSString* _eventTitle;
	NSString* _eventHeader;

}

@property (assign,nonatomic,__weak) id<IGEventServiceNetworkDelegate> networkDelegate;              //@synthesize networkDelegate=_networkDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventServiceCacheDelegate> cacheDelegate;                  //@synthesize cacheDelegate=_cacheDelegate - In the implementation block
@property (nonatomic,readonly) IGNetworkSource * networkSource;                                     //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataArchiver * feedDataArchiver;                          //@synthesize feedDataArchiver=_feedDataArchiver - In the implementation block
@property (nonatomic,readonly) NSString * eventId;                                                  //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) NSString * eventTitle;                                               //@synthesize eventTitle=_eventTitle - In the implementation block
@property (nonatomic,readonly) NSString * eventHeader;                                              //@synthesize eventHeader=_eventHeader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGNetworkSource *)networkSource;
-(NSString *)eventTitle;
-(NSString *)eventHeader;
-(id)initWithEventId:(id)arg1 ;
-(id)initWithEventId:(id)arg1 fetchPath:(id)arg2 ;
-(id)initWithEventId:(id)arg1 fetchPath:(id)arg2 extraParams:(id)arg3 ;
-(id)initWithNetworkSource:(id)arg1 feedDataArchiver:(id)arg2 ;
-(IGEventFeedDataArchiver *)feedDataArchiver;
-(id<IGEventServiceCacheDelegate>)cacheDelegate;
-(id<IGEventServiceNetworkDelegate>)networkDelegate;
-(void)cacheEventFeedData:(id)arg1 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loadPostsFromCache;
-(void)fetchPosts;
-(void)fetchMorePosts;
-(void)setNetworkDelegate:(id<IGEventServiceNetworkDelegate>)arg1 ;
-(void)setCacheDelegate:(id<IGEventServiceCacheDelegate>)arg1 ;
-(void)cancelRequest;
-(NSString *)eventId;
@end

