/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class NSString;

@interface IGSignInHelpViewController : IGGroupedTableViewController {

	NSString* _usernameOrEmail;

}

@property (nonatomic,retain) NSString * usernameOrEmail;              //@synthesize usernameOrEmail=_usernameOrEmail - In the implementation block
-(id)tableView:(id)arg1 subtitleForHeaderInSection:(int)arg2 ;
-(void)appearedFromBackground:(id)arg1 ;
-(void)configureForgotPasswordCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureOtherIssuesCell:(id)arg1 forRow:(int)arg2 ;
-(NSString *)usernameOrEmail;
-(void)setUsernameOrEmail:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

