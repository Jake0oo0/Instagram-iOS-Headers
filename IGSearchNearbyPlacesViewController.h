/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:42 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGSearchResultsViewController.h>

@class IGPlacesAutocompleteDataSource;

@interface IGSearchNearbyPlacesViewController : IGSearchResultsViewController

@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * dataSource; 
-(void)reloadTableView;
-(void)filterBySearchString:(id)arg1 ;
-(void)logRaindropSearchQueryEvent;
-(int)searchResultState;
-(char)noSearchQuery;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(void)reload;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(int)searchType;
@end

