/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGBackgroundLoader.h>

@class IGFeedNetworkSource, IGBulkMediaRequestManager, NSArray, NSString;

@interface IGBackgroundFeedLoader : NSObject <IGFeedNetworkSourceDelegate, IGBackgroundLoader> {

	IGFeedNetworkSource* _feedSource;
	id _selfReference;
	/*^block*/id _completionHandler;
	IGBulkMediaRequestManager* _mediaLoader;
	int _ongoingMediaRequestsCount;
	NSArray* _currentFeedPostsToLoad;

}

@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                     //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) id selfReference;                                     //@synthesize selfReference=_selfReference - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * mediaLoader;              //@synthesize mediaLoader=_mediaLoader - In the implementation block
@property (assign,nonatomic) int ongoingMediaRequestsCount;                        //@synthesize ongoingMediaRequestsCount=_ongoingMediaRequestsCount - In the implementation block
@property (nonatomic,retain) NSArray * currentFeedPostsToLoad;                     //@synthesize currentFeedPostsToLoad=_currentFeedPostsToLoad - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadFeed;
-(NSArray *)currentFeedPostsToLoad;
-(void)setCurrentFeedPostsToLoad:(NSArray *)arg1 ;
-(void)loadMediaForNewPosts:(id)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(IGBulkMediaRequestManager *)mediaLoader;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)setMediaLoader:(IGBulkMediaRequestManager *)arg1 ;
-(int)ongoingMediaRequestsCount;
-(void)setOngoingMediaRequestsCount:(int)arg1 ;
-(void)finishWithResult:(unsigned)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(id)selfReference;
@end

