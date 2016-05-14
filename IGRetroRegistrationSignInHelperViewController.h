/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1 ;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1 ;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2 ;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2 ;
-(void)backgroundTapped;
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
-(void)setFacebookButtonLoading:(char)arg1 ;
-(IGFacebookAuthHelper *)fbAuthHelper;
-(void)authWithFacebookForRegistration;
-(id)actionTypes;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(/*^block*/id)fbAuthCompletionHandler;
-(void)setHelperView:(IGRetroRegistrationSignInHelperView *)arg1 ;
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

