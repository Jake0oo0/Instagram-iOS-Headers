/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGImageViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGSwitchUsersControllerDelegate;
@class UITableView, NSArray, NSString;

@interface IGSwitchUsersController : NSObject <IGImageViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	id<IGSwitchUsersControllerDelegate> _delegate;
	NSArray* _usersArray;
	unsigned _switchUsersMode;

}

@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwitchUsersControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * usersArray;                                             //@synthesize usersArray=_usersArray - In the implementation block
@property (assign,nonatomic) unsigned switchUsersMode;                                         //@synthesize switchUsersMode=_switchUsersMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(id)initWithSwitchUsersMode:(unsigned)arg1 ;
-(float)minimumTableViewHeight;
-(void)updateUserData;
-(void)setUsersArray:(NSArray *)arg1 ;
-(unsigned)switchUsersMode;
-(NSArray *)usersArray;
-(id)currentUserCellForTableView:(id)arg1 ;
-(id)userCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)addAccountCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)setSwitchUsersMode:(unsigned)arg1 ;
-(void)setDelegate:(id<IGSwitchUsersControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGSwitchUsersControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

