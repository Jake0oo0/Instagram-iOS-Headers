/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:42 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGServiceHelperLoginProtocol;
@class UIBarButtonItem, IGTextField, NSString;

@interface IGServiceLoginTableViewController : IGGroupedTableViewController <UITextFieldDelegate> {

	UIBarButtonItem* _doneButtonItem;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	NSString* _serviceName;
	int _serviceUsernameType;
	id<IGServiceHelperLoginProtocol> _serviceHelper;
	id _delegate;

}

@property (nonatomic,copy) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) int serviceUsernameType;                                            //@synthesize serviceUsernameType=_serviceUsernameType - In the implementation block
@property (assign,nonatomic,__weak) id<IGServiceHelperLoginProtocol> serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onLoginSucceeded:(id)arg1 ;
-(void)onLoginFailed:(id)arg1 ;
-(void)doLogin;
-(void)configureLoginCell:(id)arg1 forRow:(int)arg2 ;
-(char)canLogin;
-(id)initWithStyle:(int)arg1 serviceName:(id)arg2 serviceHelper:(id)arg3 ;
-(int)serviceUsernameType;
-(void)setServiceUsernameType:(int)arg1 ;
-(id<IGServiceHelperLoginProtocol>)serviceHelper;
-(void)setServiceHelper:(id<IGServiceHelperLoginProtocol>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
@end

