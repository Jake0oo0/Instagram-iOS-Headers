
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGSignUpViewDelegate;
@class IGTextField, IGFacebookButton, IGWelcomeSeparator, UIButton, NSString;

@interface IGSignUpView : UIView <IGTextFieldDelegate> {

	IGTextField* _emailField;
	IGFacebookButton* _facebookButton;
	id<IGSignUpViewDelegate> _delegate;
	IGWelcomeSeparator* _separator;
	UIButton* _nextButton;
	float _fieldHeight;

}

@property (nonatomic,retain) IGTextField * emailField;                              //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                     //@synthesize facebookButton=_facebookButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGSignUpViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGWelcomeSeparator * separator;                        //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                 //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic) float fieldHeight;                                     //@synthesize fieldHeight=_fieldHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextButtonTapped;
-(IGTextField *)emailField;
-(IGFacebookButton *)facebookButton;
-(void)proceedWithSignUpWithKeyboard:(char)arg1 ;
-(void)setEmailField:(IGTextField *)arg1 ;
-(void)setFieldHeight:(float)arg1 ;
-(float)fieldHeight;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setSeparator:(IGWelcomeSeparator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSignUpViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGSignUpViewDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(IGWelcomeSeparator *)separator;
@end

