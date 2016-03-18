
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGFacebookAuthHelperDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRetroRegistrationLoginViewControllerDelegate;
@class IGRetroRegistrationLoginView, IGRetroRegistrationLoginHelper, IGFacebookAuthHelper, NSString;

@interface IGRetroRegistrationLoginViewController : UIViewController <IGTextFieldDelegate, IGFacebookAuthHelperDelegate, IGCoreTextLinkHandler, UIGestureRecognizerDelegate> {

	char _isSubmitting;
	id<IGRetroRegistrationLoginViewControllerDelegate> _delegate;
	IGRetroRegistrationLoginView* _loginView;
	IGRetroRegistrationLoginHelper* _loginHelper;
	IGFacebookAuthHelper* _fbAuthHelper;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                                               //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationLoginView * loginView;                                        //@synthesize loginView=_loginView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationLoginHelper * loginHelper;                                    //@synthesize loginHelper=_loginHelper - In the implementation block
@property (nonatomic,retain) IGFacebookAuthHelper * fbAuthHelper;                                             //@synthesize fbAuthHelper=_fbAuthHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)dismissButtonTapped;
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1 ;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1 ;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(char)isSubmitting;
-(void)setIsSubmitting:(char)arg1 ;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(void)loginButtonTapped;
-(void)setLoginView:(IGRetroRegistrationLoginView *)arg1 ;
-(IGRetroRegistrationLoginView *)loginView;
-(void)facebookButtonTapped;
-(void)signUpButtonTapped;
-(void)keyboardWillHide;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(IGFacebookAuthHelper *)fbAuthHelper;
-(void)logInWithUsernameAndPassword;
-(void)authWithFacebookForRegistration;
-(void)loginHelperButtonTapped;
-(id)createIndicatorViewAndAddToLoginButton;
-(void)removeIndicatorViewFromLoginButton:(id)arg1 ;
-(void)handleLoginErrors:(id)arg1 ;
-(id)getErrorButtonTitle:(id)arg1 ;
-(SEL)callbackForButtonType:(int)arg1 ;
-(IGRetroRegistrationLoginHelper *)loginHelper;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)facebookLoginCallback:(int)arg1 ;
-(void)loginEmailCallback:(id)arg1 ;
-(void)lookupEmailForUsernameCallback:(id)arg1 ;
-(void)forgotPasswordFlowCallback:(id)arg1 ;
-(void)loginFromRegistrationWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loginFromOneClickWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3 ;
-(void)setLoginHelper:(IGRetroRegistrationLoginHelper *)arg1 ;
-(void)setFbAuthHelper:(IGFacebookAuthHelper *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationLoginViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRetroRegistrationLoginViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setLoading:(char)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

