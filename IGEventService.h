/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGNetworkSourceDelegate.h>

@protocol IGEventServiceNetworkDelegate, IGEventServiceCacheDelegate;
@class NSString, NSArray, IGNetworkSource, IGEventFeedDataArchiver, IGEventFeedDataCache, IGEventServiceConfiguration;

@interface IGEventService : NSObject <IGNetworkSourceDelegate> {

	NSString* _eventTitle;
	NSArray* _cachedPosts;
	id<IGEventServiceNetworkDelegate> _networkDelegate;
	id<IGEventServiceCacheDelegate> _cacheDelegate;
	IGNetworkSource* _networkSource;
	IGEventFeedDataArchiver* _feedDataArchiver;
	IGEventFeedDataCache* _feedDataCache;
	IGEventServiceConfiguration* _configuration;
	NSString* _eventId;
	NSString* _eventHeader;
	NSString* _currentUserPK;

}

@property (assign,nonatomic,__weak) id<IGEventServiceNetworkDelegate> networkDelegate;              //@synthesize networkDelegate=_networkDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventServiceCacheDelegate> cacheDelegate;                  //@synthesize cacheDelegate=_cacheDelegate - In the implementation block
@property (nonatomic,readonly) IGNetworkSource * networkSource;                                     //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataArchiver * feedDataArchiver;                          //@synthesize feedDataArchiver=_feedDataArchiver - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataCache * feedDataCache;                                //@synthesize feedDataCache=_feedDataCache - In the implementation block
@property (nonatomic,readonly) IGEventServiceConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * eventId;                                                  //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) NSString * eventTitle;                                               //@synthesize eventTitle=_eventTitle - In the implementation block
@property (nonatomic,readonly) NSString * eventHeader;                                              //@synthesize eventHeader=_eventHeader - In the implementation block
@property (nonatomic,readonly) NSString * currentUserPK;                                            //@synthesize currentUserPK=_currentUserPK - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPosts;                                               //@synthesize cachedPosts=_cachedPosts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportUserDismissPost:(id)arg1 ;
-(IGNetworkSource *)networkSource;
-(NSString *)eventTitle;
-(IGEventFeedDataCache *)feedDataCache;
-(IGEventFeedDataArchiver *)feedDataArchiver;
-(id<IGEventServiceCacheDelegate>)cacheDelegate;
-(id)networkParams;
-(NSString *)currentUserPK;
-(id<IGEventServiceNetworkDelegate>)networkDelegate;
-(void)cacheEventFeedData:(id)arg1 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 feedDataCache:(id)arg2 ;
-(NSArray *)cachedPosts;
-(void)loadPostsFromCache;
-(void)fetchPosts;
-(void)fetchMorePosts;
-(void)setNetworkDelegate:(id<IGEventServiceNetworkDelegate>)arg1 ;
-(void)setCacheDelegate:(id<IGEventServiceCacheDelegate>)arg1 ;
-(NSString *)eventHeader;
-(IGEventServiceConfiguration *)configuration;
-(void)cancelRequest;
-(NSString *)eventId;
@end

