/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGExplorePlacesNetworkSourceDelegate.h>

@class IGExplorePlacesNetworkSource, NSMutableSet, NSString;

@interface IGExplorePlacesViewController : IGExploreFeedViewController <IGExplorePlacesNetworkSourceDelegate> {

	IGExplorePlacesNetworkSource* _dataSource;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,retain) IGExplorePlacesNetworkSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                       //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(char)enableNavState;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(id)explorePlacesNetworkSourceLocationForRequest:(id)arg1 ;
-(void)fetchMoreData;
-(void)logTap:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)logImpression:(id)arg1 viewed:(char)arg2 atIndex:(unsigned)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 mediaIndex:(unsigned)arg4 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)fetchData;
-(void)setDataSource:(IGExplorePlacesNetworkSource *)arg1 ;
-(id)init;
-(IGExplorePlacesNetworkSource *)dataSource;
-(id)initWithTitle:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
@end

