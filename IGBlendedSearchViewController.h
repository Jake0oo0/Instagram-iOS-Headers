/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:21 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGSearchResultsViewController.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@class IGUserListLocalDataSource, IGBlendedSearchDataSource, NSString;

@interface IGBlendedSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController> {

	IGUserListLocalDataSource* _localUserDataSource;

}

@property (nonatomic,readonly) IGBlendedSearchDataSource * dataSource; 
@property (nonatomic,readonly) IGUserListLocalDataSource * localUserDataSource;              //@synthesize localUserDataSource=_localUserDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)fallbackIcon;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(IGUserListLocalDataSource *)localUserDataSource;
-(void)reloadTableView;
-(void)filterLocalResultsBySearchString:(id)arg1 ;
-(void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3 ;
-(id)blendedResultsList:(id)arg1 ;
-(id)blendedImpressionList:(id)arg1 ;
-(id)searchBarPlaceholder;
-(void)filterBySearchString:(id)arg1 ;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(void)viewDidLoad;
-(int)viewType;
-(int)searchType;
@end

