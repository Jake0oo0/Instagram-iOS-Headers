/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class IGUser, NSString, UIView, IGCoreTextView;

@interface IGResetPasswordOptionsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler> {

	int _emailRequestState;
	int _smsRequestState;
	int _lastSentMedium;
	char _hasValidPhone;
	IGUser* _user;
	NSString* _userEmail;
	UIView* _emailConformationFooterView;
	UIView* _smsConfirmationFooterView;
	UIView* _assistedResetFooterView;
	IGCoreTextView* _assistedResetCoreTextView;

}

@property (nonatomic,retain) IGUser * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * userEmail;                                      //@synthesize userEmail=_userEmail - In the implementation block
@property (assign,nonatomic) char hasValidPhone;                                      //@synthesize hasValidPhone=_hasValidPhone - In the implementation block
@property (nonatomic,retain) UIView * emailConformationFooterView;                    //@synthesize emailConformationFooterView=_emailConformationFooterView - In the implementation block
@property (nonatomic,retain) UIView * smsConfirmationFooterView;                      //@synthesize smsConfirmationFooterView=_smsConfirmationFooterView - In the implementation block
@property (nonatomic,retain) UIView * assistedResetFooterView;                        //@synthesize assistedResetFooterView=_assistedResetFooterView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * assistedResetCoreTextView;              //@synthesize assistedResetCoreTextView=_assistedResetCoreTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(char)hasValidPhone;
-(id)emailConfirmationView;
-(id)smsConfirmationView;
-(UIView *)assistedResetFooterView;
-(IGCoreTextView *)assistedResetCoreTextView;
-(id)actionTypes;
-(void)setHasValidPhone:(char)arg1 ;
-(UIView *)emailConformationFooterView;
-(void)setEmailConformationFooterView:(UIView *)arg1 ;
-(UIView *)smsConfirmationFooterView;
-(void)setSmsConfirmationFooterView:(UIView *)arg1 ;
-(void)setAssistedResetFooterView:(UIView *)arg1 ;
-(void)setAssistedResetCoreTextView:(IGCoreTextView *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
@end

