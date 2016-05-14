/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSource.h>

@protocol IGExploreMainFeedNetworkSourceDelegate;
@interface IGExploreMainFeedNetworkSource : IGFeedNetworkSource {

	id<IGExploreMainFeedNetworkSourceDelegate> _exploreDelegate;

}

@property (assign,nonatomic,__weak) id<IGExploreMainFeedNetworkSourceDelegate> exploreDelegate;              //@synthesize exploreDelegate=_exploreDelegate - In the implementation block
-(id<IGExploreMainFeedNetworkSourceDelegate>)exploreDelegate;
-(void)refreshWithNewItems:(id)arg1 clearOut:(char)arg2 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id)initWithPostClass:(Class)arg1 ;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 ;
-(void)setExploreDelegate:(id<IGExploreMainFeedNetworkSourceDelegate>)arg1 ;
@end

