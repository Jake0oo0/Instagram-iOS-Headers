/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFindUsersViewDataSourceDelegate.h>

@class IGProfileChainingFindUsersViewDataSource, IGUser, NSString;

@interface IGFollowerListChainingViewController : IGExploreFeedViewController <IGFindUsersViewDataSourceDelegate> {

	IGProfileChainingFindUsersViewDataSource* _dataSource;
	IGUser* _user;

}

@property (nonatomic,readonly) IGProfileChainingFindUsersViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)fetchMoreData;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(id)requestWithMaxId:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)fetchData;
-(IGProfileChainingFindUsersViewDataSource *)dataSource;
-(void)viewWillAppear:(char)arg1 ;
@end

