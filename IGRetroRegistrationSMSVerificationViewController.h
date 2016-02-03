/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRetroRegistrationSMSVerificationViewControllerDelegate;
@class IGRetroRegistrationSMSVerificationView, NSTimer, NSString, UITapGestureRecognizer, FBSDKAccessToken;

@interface IGRetroRegistrationSMSVerificationViewController : UIViewController <IGCoreTextLinkHandler, UIGestureRecognizerDelegate> {

	char _submitting;
	char _canResendSMS;
	id<IGRetroRegistrationSMSVerificationViewControllerDelegate> _delegate;
	IGRetroRegistrationSMSVerificationView* _smsVerificationView;
	NSTimer* _resendTimer;
	NSString* _username;
	NSString* _twoFactorIdentifier;
	NSString* _obfuscatedPhoneNumber;
	UITapGestureRecognizer* _tapGesture;
	FBSDKAccessToken* _facebookAccessToken;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationSMSVerificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSMSVerificationView * smsVerificationView;                              //@synthesize smsVerificationView=_smsVerificationView - In the implementation block
@property (nonatomic,retain) NSTimer * resendTimer;                                                                     //@synthesize resendTimer=_resendTimer - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * twoFactorIdentifier;                                                            //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,retain) NSString * obfuscatedPhoneNumber;                                                          //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                       //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic) char submitting;                                                                           //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char canResendSMS;                                                                         //@synthesize canResendSMS=_canResendSMS - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                                                    //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)invalidateTimer;
-(void)setSubmitting:(char)arg1 ;
-(char)submitting;
-(FBSDKAccessToken *)facebookAccessToken;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(id)initWithTwoFactorInfo:(id)arg1 facebookAccessToken:(id)arg2 ;
-(id)createIndicatorViewAndAddToLoginButton;
-(void)removeIndicatorViewFromLoginButton:(id)arg1 ;
-(void)handleLoginErrors:(id)arg1 ;
-(NSString *)twoFactorIdentifier;
-(void)setTwoFactorIdentifier:(NSString *)arg1 ;
-(IGRetroRegistrationSMSVerificationView *)smsVerificationView;
-(NSString *)obfuscatedPhoneNumber;
-(void)confirmCodeButtonPressed;
-(void)keyboardWillDisappear;
-(NSTimer *)resendTimer;
-(void)setResendTimer:(NSTimer *)arg1 ;
-(void)resendTimerFired:(id)arg1 ;
-(void)setCanResendSMS:(char)arg1 ;
-(void)loginWithTwoFactorIdentifier;
-(char)canResendSMS;
-(void)resendTwoFactorSMS;
-(void)setSmsVerificationView:(IGRetroRegistrationSMSVerificationView *)arg1 ;
-(void)setObfuscatedPhoneNumber:(NSString *)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSMSVerificationViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSMSVerificationViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)resetTimer;
-(void)backButtonTapped;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillShow:(id)arg1 ;
@end

