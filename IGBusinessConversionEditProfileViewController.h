
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGBusinessConversionEditableProfileCellDelegate.h>
#import <Instagram/IGBusinessConversionAddressViewControllerDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGPhoneNumberTextFieldDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class IGFacebookPageInfo, UIView, UIButton, IGBusinessConversionLoggingHelper, IGPhoneNumberTextField, NSString;

@interface IGBusinessConversionEditProfileViewController : IGGroupedTableViewController <IGBusinessConversionEditableProfileCellDelegate, IGBusinessConversionAddressViewControllerDelegate, IGCountryCodeViewControllerDelegate, IGPhoneNumberTextFieldDelegate, IGBusinessConversionFlowStep> {

	char _isEditingInfo;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	IGFacebookPageInfo* _pageInfo;
	IGFacebookPageInfo* _startPageInfo;
	UIView* _headerView;
	UIButton* _bottomButton;
	IGBusinessConversionLoggingHelper* _loggingHelper;
	IGPhoneNumberTextField* _phoneNumberTextField;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;                                               //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * startPageInfo;                                          //@synthesize startPageInfo=_startPageInfo - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                                     //@synthesize bottomButton=_bottomButton - In the implementation block
@property (assign,nonatomic) char isEditingInfo;                                                          //@synthesize isEditingInfo=_isEditingInfo - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGPhoneNumberTextField * phoneNumberTextField;                               //@synthesize phoneNumberTextField=_phoneNumberTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)bottomButton;
-(void)setBottomButton:(UIButton *)arg1 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(void)addressViewController:(id)arg1 didUpdateInfo:(id)arg2 ;
-(void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3 ;
-(void)editableProfileCellDidBeginEditing:(id)arg1 ;
-(char)editableProfileCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(id)analyticsFlowStep;
-(id)newBottomButton;
-(id)newHeaderViewWithWidth:(float)arg1 ;
-(void)setIsEditingInfo:(char)arg1 ;
-(IGFacebookPageInfo *)startPageInfo;
-(void)setStartPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)finishConversion;
-(void)setPhoneNumberTextField:(IGPhoneNumberTextField *)arg1 ;
-(IGPhoneNumberTextField *)phoneNumberTextField;
-(char)isEditingInfo;
-(void)textFieldDidTapCountryButton:(id)arg1 ;
-(id)initWithPageInfo:(id)arg1 andLoggingHelper:(id)arg2 ;
-(void)saveChanges;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
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
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)updateButtonState;
@end

