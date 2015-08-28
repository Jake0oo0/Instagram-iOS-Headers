/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSignUpViewDelegate.h>
#import <Instagram/IGLogInViewDelegate.h>
#import <Instagram/IGLogInViewOnePasswordDelegate.h>

@protocol IGWelcomeViewControllerDelegate;
@class IGSignUpView, IGLogInView, IGRegistrationToggleView, IGWelcomeBackgroundView, NSString;

@interface IGWelcomeViewController : IGViewController <IGSignUpViewDelegate, IGLogInViewDelegate, IGLogInViewOnePasswordDelegate> {

	char _textFieldTextDidChange;
	char _useNewLandingPage;
	id<IGWelcomeViewControllerDelegate> _delegate;
	IGSignUpView* _signUpView;
	IGLogInView* _logInView;
	IGRegistrationToggleView* _toggleView;
	IGWelcomeBackgroundView* _backgroundView;
	int _registrationMode;

}

@property (assign,nonatomic,__weak) id<IGWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSignUpView * signUpView;                                        //@synthesize signUpView=_signUpView - In the implementation block
@property (nonatomic,retain) IGLogInView * logInView;                                          //@synthesize logInView=_logInView - In the implementation block
@property (nonatomic,retain) IGRegistrationToggleView * toggleView;                            //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) IGWelcomeBackgroundView * backgroundView;                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) int registrationMode;                                             //@synthesize registrationMode=_registrationMode - In the implementation block
@property (assign,nonatomic) char textFieldTextDidChange;                                      //@synthesize textFieldTextDidChange=_textFieldTextDidChange - In the implementation block
@property (assign,nonatomic) char useNewLandingPage;                                           //@synthesize useNewLandingPage=_useNewLandingPage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersNavigationBarHidden;
-(void)onFacebookAuthSuccess;
-(IGRegistrationToggleView *)toggleView;
-(void)setToggleView:(IGRegistrationToggleView *)arg1 ;
-(void)onFacebookAuthCancelled;
-(IGSignUpView *)signUpView;
-(IGLogInView *)logInView;
-(void)logInWithFacebookTapped;
-(int)registrationMode;
-(void)setRegistrationMode:(int)arg1 ;
-(void)setKeyboardStateForSignUp:(char)arg1 ;
-(id)attributedStringForString:(id)arg1 ;
-(void)setFacebookButtonLoading:(char)arg1 ;
-(void)authWithFacebookForRegistrationMode:(int)arg1 ;
-(void)submitFBSignupRequest;
-(void)handleLoggedInUserForResponse:(id)arg1 ;
-(void)handleEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleEmailTakenAutoLoginForResponse:(id)arg1 ;
-(void)handleLockedAccountForResponse:(id)arg1 ;
-(void)logIn;
-(void)setLogInView:(IGLogInView *)arg1 ;
-(void)setSignUpView:(IGSignUpView *)arg1 ;
-(void)logInView:(id)arg1 willProceedWithKeyboard:(char)arg2 ;
-(void)logInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2 ;
-(void)logInViewDidPromptForOnePassword:(id)arg1 ;
-(void)logInView:(id)arg1 didBeginEditingTextField:(id)arg2 ;
-(void)logInView:(id)arg1 didChangeTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 didBeginEditingTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 didChangeTextField:(id)arg2 ;
-(void)signUpView:(id)arg1 willProceedWithEmail:(id)arg2 keyboard:(char)arg3 ;
-(void)setTextFieldTextDidChange:(char)arg1 ;
-(void)logTextFieldEvent:(id)arg1 forTextField:(id)arg2 ;
-(char)textFieldTextDidChange;
-(char)useNewLandingPage;
-(void)setUseNewLandingPage:(char)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGWelcomeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGWelcomeViewControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)setBackgroundView:(IGWelcomeBackgroundView *)arg1 ;
-(IGWelcomeBackgroundView *)backgroundView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

