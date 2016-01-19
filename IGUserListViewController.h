/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>
#import <Instagram/IGFollowListUserCellDelegate.h>

@class IGUserListNetworkDataSource, IGPlainTableView, NSString, NSMutableIndexSet, IGFeedStatusView;

@interface IGUserListViewController : IGViewController <IGSearchBarDelegate, UITableViewDataSource, IGRaindropAnalyticsDelegate, IGUserListNetworkDataSourceDelegate, UITableViewDelegate, IGFeedStatusViewDynamicHeightProtocol, IGFollowListUserCellDelegate> {

	IGUserListNetworkDataSource* _networkDataSource;
	IGPlainTableView* _tableView;
	int _userCellAccessory;
	int _userListType;
	NSString* _listContextPK;
	NSMutableIndexSet* _expandedIndices;
	IGFeedStatusView* _feedStatusView;

}

@property (nonatomic,retain) IGUserListNetworkDataSource * networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) int userCellAccessory;                                        //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (assign,nonatomic) int userListType;                                             //@synthesize userListType=_userListType - In the implementation block
@property (nonatomic,copy) NSString * listContextPK;                                       //@synthesize listContextPK=_listContextPK - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * expandedIndices;                          //@synthesize expandedIndices=_expandedIndices - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                            //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserCellAccessory:(int)arg1 ;
-(void)setNetworkDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setUserListType:(int)arg1 ;
-(void)setListContextPK:(NSString *)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)followButtonGroupController:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)indexPathForUser:(id)arg1 ;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(float)arg2 ;
-(void)didTapOnSeeAllAccounts:(id)arg1 withUser:(id)arg2 ;
-(void)removeUserFromList:(id)arg1 ;
-(IGUserListNetworkDataSource *)networkDataSource;
-(int)userCellAccessory;
-(void)loadMoreUsers;
-(char)isShowingSimilarAccountsViewForCellAtIndexPath:(id)arg1 ;
-(id)statusCell;
-(id)userCellForIndexPath:(id)arg1 ;
-(void)presentSimilarAccountsViewForCellAtIndexPath:(id)arg1 expand:(char)arg2 ;
-(int)userListType;
-(NSString *)listContextPK;
-(NSMutableIndexSet *)expandedIndices;
-(void)setExpandedIndices:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
@end

