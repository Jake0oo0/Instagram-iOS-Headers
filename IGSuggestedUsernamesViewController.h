/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:31 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewController.h>

@protocol IGSuggestedUsernamesViewControllerDelegate;
@class NSArray, NSString, UIView, UILabel;

@interface IGSuggestedUsernamesViewController : IGPlainTableViewController {

	id<IGSuggestedUsernamesViewControllerDelegate> _delegate;
	NSArray* _suggestions;
	NSString* _attemptedUsername;
	UIView* _tableHeader;
	UILabel* _infoLabel;

}

@property (assign,nonatomic,__weak) id<IGSuggestedUsernamesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                         //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,copy) NSString * attemptedUsername;                                                  //@synthesize attemptedUsername=_attemptedUsername - In the implementation block
@property (nonatomic,retain) UIView * tableHeader;                                                        //@synthesize tableHeader=_tableHeader - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                         //@synthesize infoLabel=_infoLabel - In the implementation block
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)onCancel;
-(void)setAttemptedUsername:(NSString *)arg1 ;
-(NSString *)attemptedUsername;
-(id)attributedHeaderText;
-(UIView *)tableHeader;
-(id)initWithSuggestions:(id)arg1 andAttemptedUsername:(id)arg2 ;
-(void)setTableHeader:(UIView *)arg1 ;
-(NSArray *)suggestions;
-(void)setDelegate:(id<IGSuggestedUsernamesViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSuggestedUsernamesViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UILabel *)infoLabel;
@end

