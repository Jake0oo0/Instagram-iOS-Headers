/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSource.h>

@class NSArray;

@interface IGExplorePhotosNetworkSource : IGFeedNetworkSource {

	char _shouldShowPromptInThisSession;
	NSArray* _trends;
	NSArray* _marqueeItems;

}

@property (retain) NSArray * trends;                                          //@synthesize trends=_trends - In the implementation block
@property (retain) NSArray * marqueeItems;                                    //@synthesize marqueeItems=_marqueeItems - In the implementation block
@property (assign,nonatomic) char shouldShowPromptInThisSession;              //@synthesize shouldShowPromptInThisSession=_shouldShowPromptInThisSession - In the implementation block
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(void)loadFromCache;
-(NSArray *)marqueeItems;
-(char)hasJumbotronInfo;
-(char)fetchDataWithParameters:(id)arg1 priority:(int)arg2 ;
-(NSArray *)trends;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(char)shouldShowPromptInThisSession;
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 fetchPath:(id)arg3 ;
-(void)loadMarqueeFromResponse:(id)arg1 ;
-(void)loadTrendsFromResponse:(id)arg1 ;
-(void)cacheMarqueeItems:(id)arg1 ;
-(void)cacheTrends:(id)arg1 ;
-(void)setShouldShowPromptInThisSession:(char)arg1 ;
@end

