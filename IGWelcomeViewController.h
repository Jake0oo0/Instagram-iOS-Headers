
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGSignUpViewDelegate.h>
#import <Instagram/IGLogInViewDelegate.h>
#import <Instagram/IGLogInViewOnePasswordDelegate.h>
#import <Instagram/IGRetroRegistrationSMSVerificationViewControllerDelegate.h>
#import <Instagram/IGResetPasswordDelegate.h>

@protocol IGWelcomeViewControllerDelegate;
@class IGSignUpView, IGLogInView, IGRegistrationToggleView, IGWelcomeBackgroundView, UIButton, NSString;

@interface IGWelcomeViewController : IGViewController <IGSignUpViewDelegate, IGLogInViewDelegate, IGLogInViewOnePasswordDelegate, IGRetroRegistrationSMSVerificationViewControllerDelegate, IGResetPasswordDelegate> {

	char _textFieldTextDidChange;
	char _isKeyboardShown;
	id<IGWelcomeViewControllerDelegate> _delegate;
	IGSignUpView* _signUpView;
	IGLogInView* _logInView;
	IGRegistrationToggleView* _toggleView;
	IGWelcomeBackgroundView* _backgroundView;
	UIButton* _dismissButton;
	int _registrationMode;

}

@property (assign,nonatomic,__weak) id<IGWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSignUpView * signUpView;                                        //@synthesize signUpView=_signUpView - In the implementation block
@property (nonatomic,retain) IGLogInView * logInView;                                          //@synthesize logInView=_logInView - In the implementation block
@property (nonatomic,retain) IGRegistrationToggleView * toggleView;                            //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) IGWelcomeBackgroundView * backgroundView;                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) int registrationMode;                                             //@synthesize registrationMode=_registrationMode - In the implementation block
@property (assign,nonatomic) char textFieldTextDidChange;                                      //@synthesize textFieldTextDidChange=_textFieldTextDidChange - In the implementation block
@property (assign,nonatomic) char isKeyboardShown;                                             //@synthesize isKeyboardShown=_isKeyboardShown - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onFacebookAuthSuccess;
-(IGRegistrationToggleView *)toggleView;
-(void)setToggleView:(IGRegistrationToggleView *)arg1 ;
-(void)onFacebookAuthCancelled;
-(void)resetPasswordController:(id)arg1 dismissWithTwoFactorInfo:(id)arg2 ;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2 ;
-(IGSignUpView *)signUpView;
-(IGLogInView *)logInView;
-(void)logInWithFacebookTapped;
-(int)registrationMode;
-(void)setRegistrationMode:(int)arg1 ;
-(void)setKeyboardStateForSignUp:(char)arg1 ;
-(void)logInFromEmail:(id)arg1 ;
-(id)attributedStringForString:(id)arg1 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(void)authWithFacebookForRegistrationMode:(int)arg1 ;
-(void)sendPasswordResetEmailForUser:(id)arg1 ;
-(void)displayToastMessage:(id)arg1 ;
-(void)facebookLoginCallback:(int)arg1 ;
-(void)lookupEmailForUsernameCallback:(id)arg1 ;
-(void)forgotPasswordFlowCallback:(id)arg1 ;
-(void)submitFBSignupRequest;
-(void)handleLoggedInUserForResponse:(id)arg1 ;
-(void)handleEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleEmailTakenAutoLoginForResponse:(id)arg1 ;
-(void)handleLockedAccountForResponse:(id)arg1 ;
-(void)logIn;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(SEL)callbackForButtonType:(int)arg1 ;
-(void)setLogInView:(IGLogInView *)arg1 ;
-(void)setSignUpView:(IGSignUpView *)arg1 ;
-(void)loginEmailCallback:(id)arg1 ;
-(void)logInView:(id)arg1 willProceedWithKeyboard:(char)arg2 ;
-(void)logInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2 ;
-(void)logInViewDidPromptForOnePassword:(id)arg1 ;
-(void)logInView:(id)arg1 didBeginEditingTextField:(id)arg2 ;
-(void)logInView:(id)arg1 didChangeTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 didBeginEditingTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 didChangeTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 willProceedWithEmail:(id)arg2 keyboard:(char)arg3 ;
-(void)layoutViewWithoutKeyboard;
-(void)setTextFieldTextDidChange:(char)arg1 ;
-(void)logTextFieldEvent:(id)arg1 forTextField:(id)arg2 ;
-(char)textFieldTextDidChange;
-(void)layoutViewsWithKeyboardAtRect:(CGRect)arg1 ;
-(void)setIsKeyboardShown:(char)arg1 ;
-(char)isKeyboardShown;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGWelcomeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGWelcomeViewControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(IGWelcomeBackgroundView *)arg1 ;
-(IGWelcomeBackgroundView *)backgroundView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)dismiss;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

