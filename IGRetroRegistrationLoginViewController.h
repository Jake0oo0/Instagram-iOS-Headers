
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGRetroRegistrationLoginViewControllerDelegate;
@class IGRetroRegistrationLoginView, IGRetroRegistrationLoginHelper, NSString;

@interface IGRetroRegistrationLoginViewController : UIViewController <IGTextFieldDelegate> {

	char _isSubmitting;
	id<IGRetroRegistrationLoginViewControllerDelegate> _delegate;
	IGRetroRegistrationLoginView* _loginView;
	IGRetroRegistrationLoginHelper* _loginHelper;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                                               //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationLoginView * loginView;                                        //@synthesize loginView=_loginView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationLoginHelper * loginHelper;                                    //@synthesize loginHelper=_loginHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthCancelled;
-(void)logInFromEmail:(id)arg1 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(void)facebookLoginCallback:(int)arg1 ;
-(void)lookupEmailForUsernameCallback:(id)arg1 ;
-(void)forgotPasswordFlowCallback:(id)arg1 ;
-(void)handleLoggedInUserForResponse:(id)arg1 ;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(SEL)callbackForButtonType:(int)arg1 ;
-(void)loginButtonTapped;
-(void)setLoginView:(IGRetroRegistrationLoginView *)arg1 ;
-(IGRetroRegistrationLoginView *)loginView;
-(void)loginHelperButtonTapped;
-(void)facebookButtonTapped;
-(void)signUpButtonTapped;
-(void)keyboardWillHide;
-(void)handleFBLoginDistilleryErrorWithCode:(int)arg1 response:(id)arg2 ;
-(void)logInWithUsernameAndPassword;
-(void)authWithFacebookForRegistration;
-(char)isSubmitting;
-(void)setIsSubmitting:(char)arg1 ;
-(id)createIndicatorViewAndAddToLoginButton;
-(void)removeIndicatorViewFromLoginButton:(id)arg1 ;
-(void)loginFromOneClickWithUsername:(id)arg1 token:(id)arg2 ;
-(void)handleLoginErrors:(id)arg1 ;
-(IGRetroRegistrationLoginHelper *)loginHelper;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)handleFBErrorEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleFBErrorEmailTakenAutoLoginForResponse:(id)arg1 ;
-(void)handleFBErrorLockedAccountForResponse:(id)arg1 ;
-(void)handleFBErrorNoFBForResponse:(id)arg1 ;
-(void)loginEmailCallback:(id)arg1 ;
-(void)loginFromRegistrationWithUsername:(id)arg1 password:(id)arg2 ;
-(void)setLoginHelper:(IGRetroRegistrationLoginHelper *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationLoginViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRetroRegistrationLoginViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setLoading:(char)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end
