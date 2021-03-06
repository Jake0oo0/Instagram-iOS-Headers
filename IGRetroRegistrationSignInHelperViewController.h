
#import <UIKit/UIViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGFacebookAuthHelperDelegate.h>

@protocol IGRetroRegistrationSignInHelperViewControllerDelegate;
@class NSString, IGRetroRegistrationSignInHelperView, UITapGestureRecognizer, IGFacebookAuthHelper;

@interface IGRetroRegistrationSignInHelperViewController : UIViewController <IGTextFieldDelegate, IGCountryCodeViewControllerDelegate, IGFacebookAuthHelperDelegate> {

	char _isSubmitting;
	NSString* _username;
	id<IGRetroRegistrationSignInHelperViewControllerDelegate> _delegate;
	IGRetroRegistrationSignInHelperView* _helperView;
	UITapGestureRecognizer* _tapGesture;
	int _inputMode;
	IGFacebookAuthHelper* _fbAuthHelper;

}

@property (nonatomic,retain) IGRetroRegistrationSignInHelperView * helperView;                                       //@synthesize helperView=_helperView - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                                                      //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                    //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) int inputMode;                                                                          //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) IGFacebookAuthHelper * fbAuthHelper;                                                    //@synthesize fbAuthHelper=_fbAuthHelper - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                    //@synthesize username=_username - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationSignInHelperViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)backgroundTapped;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1 ;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1 ;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(char)isSubmitting;
-(void)setIsSubmitting:(char)arg1 ;
-(void)countryCodeButtonTapped;
-(void)sendLoginLink;
-(IGRetroRegistrationSignInHelperView *)helperView;
-(void)switchButtonTapped;
-(void)switchToUsernameButtonTapped;
-(void)switchToPhoneButtonTapped;
-(void)facebookButtonTapped;
-(void)helperButtonTapped;
-(id)actionTypes;
-(void)setHelperView:(IGRetroRegistrationSignInHelperView *)arg1 ;
-(void)authWithFacebookForRegistration;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(IGFacebookAuthHelper *)fbAuthHelper;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(void)setFbAuthHelper:(IGFacebookAuthHelper *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSignInHelperViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSignInHelperViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)backButtonTapped;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillShow:(id)arg1 ;
@end

