
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGBusinessConversionEditableProfileCellDelegate.h>
#import <Instagram/IGBusinessConversionAddressViewControllerDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGPhoneNumberTextFieldDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class IGFacebookPageInfo, IGBusinessConversionHeaderView, IGBusinessConversionLoggingHelper, IGPhoneNumberTextField, NSString;

@interface IGBusinessConversionEditProfileViewController : IGGroupedTableViewController <IGBusinessConversionEditableProfileCellDelegate, IGBusinessConversionAddressViewControllerDelegate, IGCountryCodeViewControllerDelegate, IGPhoneNumberTextFieldDelegate, IGBusinessConversionFlowStep> {

	id<IGBusinessConversionViewControllerDelegate> _delegate;
	IGFacebookPageInfo* _pageInfo;
	IGFacebookPageInfo* _startPageInfo;
	IGBusinessConversionHeaderView* _headerView;
	IGBusinessConversionLoggingHelper* _loggingHelper;
	IGPhoneNumberTextField* _phoneNumberTextField;

}

@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;                                               //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * startPageInfo;                                          //@synthesize startPageInfo=_startPageInfo - In the implementation block
@property (nonatomic,retain) IGBusinessConversionHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGPhoneNumberTextField * phoneNumberTextField;                               //@synthesize phoneNumberTextField=_phoneNumberTextField - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)addressViewController:(id)arg1 didUpdateInfo:(id)arg2 ;
-(void)finishConversion;
-(IGFacebookPageInfo *)startPageInfo;
-(void)setStartPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3 ;
-(void)editableProfileCellDidBeginEditing:(id)arg1 ;
-(char)editableProfileCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(id)initWithPageInfo:(id)arg1 andLoggingHelper:(id)arg2 ;
-(id)analyticsFlowStep;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)setPhoneNumberTextField:(IGPhoneNumberTextField *)arg1 ;
-(IGPhoneNumberTextField *)phoneNumberTextField;
-(void)textFieldDidTapCountryButton:(id)arg1 ;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(id)newHeaderView;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGBusinessConversionHeaderView *)headerView;
-(void)setHeaderView:(IGBusinessConversionHeaderView *)arg1 ;
@end

