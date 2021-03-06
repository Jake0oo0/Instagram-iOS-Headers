
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationNextButton, IGRetroRegistrationTextField, IGRetroRegistrationTextView, UILabel, UITableView, UIButton, UIView;

@interface IGRetroRegistrationRequestSupportScrollView : UIScrollView {

	char _showReasonTable;
	IGRetroRegistrationNextButton* _requestSupportButton;
	IGRetroRegistrationTextField* _emailField;
	IGRetroRegistrationTextField* _contactEmailField;
	IGRetroRegistrationTextView* _additionalInfoField;
	UILabel* _descriptionLabel;
	UITableView* _accountTypeTableView;
	UITableView* _reasonTableView;
	UIButton* _footerButton;
	UILabel* _titleLabel;
	UIView* _footerViewSeperator;
	UIView* _footerView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                        //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * requestSupportButton;              //@synthesize requestSupportButton=_requestSupportButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;                         //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * contactEmailField;                  //@synthesize contactEmailField=_contactEmailField - In the implementation block
@property (nonatomic,retain) UITableView * accountTypeTableView;                                //@synthesize accountTypeTableView=_accountTypeTableView - In the implementation block
@property (nonatomic,retain) UITableView * reasonTableView;                                     //@synthesize reasonTableView=_reasonTableView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextView * additionalInfoField;                 //@synthesize additionalInfoField=_additionalInfoField - In the implementation block
@property (nonatomic,retain) UIView * footerViewSeperator;                                      //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                               //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                           //@synthesize footerButton=_footerButton - In the implementation block
@property (assign,nonatomic) char showReasonTable;                                              //@synthesize showReasonTable=_showReasonTable - In the implementation block
+(id)createTitleLabel;
+(id)createDescriptionLabel;
-(UIView *)footerViewSeperator;
-(IGRetroRegistrationTextField *)emailField;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setFooterButton:(UIButton *)arg1 ;
-(char)showReasonTable;
-(void)setRequestSupportButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setContactEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setAdditionalInfoField:(IGRetroRegistrationTextView *)arg1 ;
-(void)setAccountTypeTableView:(UITableView *)arg1 ;
-(void)setReasonTableView:(UITableView *)arg1 ;
-(void)setShowReasonTable:(char)arg1 ;
-(IGRetroRegistrationTextField *)contactEmailField;
-(IGRetroRegistrationTextView *)additionalInfoField;
-(UITableView *)accountTypeTableView;
-(UITableView *)reasonTableView;
-(IGRetroRegistrationNextButton *)requestSupportButton;
-(void)setFooterViewSeperator:(UIView *)arg1 ;
-(UIButton *)footerButton;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

