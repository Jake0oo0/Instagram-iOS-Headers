
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationNextButton, IGRetroRegistrationTextField, IGCoreTextView, UIImageView, UILabel, NSString;

@interface IGRetroRegistrationPhoneConfirmationFrontView : UIView {

	IGRetroRegistrationNextButton* _nextButton;
	IGRetroRegistrationTextField* _confirmationCodeField;
	IGCoreTextView* _resendCodeView;
	UIImageView* _logoView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                        //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * confirmationCodeField;              //@synthesize confirmationCodeField=_confirmationCodeField - In the implementation block
@property (nonatomic,retain) IGCoreTextView * resendCodeView;                                   //@synthesize resendCodeView=_resendCodeView - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                            //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(IGRetroRegistrationTextField *)confirmationCodeField;
-(void)setConfirmationCodeField:(IGRetroRegistrationTextField *)arg1 ;
-(IGCoreTextView *)resendCodeView;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 ;
-(void)setResendCodeView:(IGCoreTextView *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(NSString *)phoneNumber;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end

