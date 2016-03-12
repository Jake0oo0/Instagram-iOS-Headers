
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/IGRageShakeViewControllerDelegate.h>
#import <Instagram/IGClusterBrowsingV2ViewControllerDelegate.h>
#import <Instagram/IGBusinessConversionViewControllerDelegate.h>

@class NSArray, IGGroupedTableViewFooterView, IGSwitch, NSString;

@interface IGAccountSettingsViewController : IGGroupedTableViewController <UIAlertViewDelegate, IGRageShakeViewControllerDelegate, IGClusterBrowsingV2ViewControllerDelegate, IGBusinessConversionViewControllerDelegate> {

	NSArray* _followSectionRowTypes;
	NSArray* _accountSectionRowTypes;
	NSArray* _aboutSectionRowTypes;
	NSArray* _settingSectionRowTypes;
	NSArray* _sessionSectionRowTypes;
	IGGroupedTableViewFooterView* _privacySettingsFooterView;
	IGSwitch* _privateAccountSwitch;

}

@property (nonatomic,retain) IGGroupedTableViewFooterView * privacySettingsFooterView;              //@synthesize privacySettingsFooterView=_privacySettingsFooterView - In the implementation block
@property (nonatomic,readonly) IGSwitch * privateAccountSwitch;                                     //@synthesize privateAccountSwitch=_privateAccountSwitch - In the implementation block
@property (assign,getter=isPrivateAccount,nonatomic) char privateAccount; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appVersionString;
-(void)clusterBrowsingV2ViewControllerDidSkip:(id)arg1 ;
-(void)clusterBrowsingV2ViewController:(id)arg1 willContinueToViewController:(id)arg2 ;
-(void)didDismissRageShakeViewController:(id)arg1 didSendReport:(char)arg2 ;
-(void)presentReportThankYouAlert;
-(void)setPrivateAccount:(char)arg1 ;
-(IGSwitch *)privateAccountSwitch;
-(char)isPrivateAccount;
-(char)shouldShowAboutSponsoredPost;
-(id)aboutSectionRows;
-(id)accountSectionRows;
-(id)followSectionRows;
-(id)settingSectionRows;
-(id)sessionSectionRows;
-(int)followRowTypeForRow:(int)arg1 ;
-(void)logTapEventForServiceType:(int)arg1 ;
-(int)accountRowForRow:(int)arg1 ;
-(void)sendChangePasswordRequest;
-(int)settingRowForRow:(int)arg1 ;
-(int)sessionRowForRow:(int)arg1 ;
-(void)showLogoutFromCurrentUserAlertViewForCellWithIndexPath:(id)arg1 ;
-(void)startAdRating;
-(void)showLogoutFromAllUsersAlertViewForCellWithIndexPath:(id)arg1 ;
-(void)showLogoutAlertViewFromCellWithIndexPath:(id)arg1 withLogoutBlock:(/*^block*/id)arg2 ;
-(void)presentReportProblemAlert;
-(void)tableView:(id)arg1 didSelectFollowRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectAccountRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSettingsRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSupportRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectAboutRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSessionRowAtIndexPath:(id)arg2 ;
-(id)imageForServiceType:(int)arg1 ;
-(void)configureCell:(id)arg1 forServiceType:(int)arg2 ;
-(IGGroupedTableViewFooterView *)privacySettingsFooterView;
-(id)configureFollowCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureAccountCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSettingsCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureAboutCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSupportCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSessionCell:(id)arg1 forRow:(int)arg2 ;
-(void)businessConversionViewControllerDidDismiss:(id)arg1 ;
-(void)businessConversionViewController:(id)arg1 didCompleteFlowWithInfo:(id)arg2 ;
-(void)setPrivacySettingsFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)dismissViewController;
@end

