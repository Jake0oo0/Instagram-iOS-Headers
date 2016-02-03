/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol IGRetroRegistrationAddEmailViewControllerDelegate;
@class IGRetroRegistrationAddEmailView, NSString, UITapGestureRecognizer;

@interface IGRetroRegistrationAddEmailViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate, UIAlertViewDelegate> {

	char _submitting;
	id<IGRetroRegistrationAddEmailViewControllerDelegate> _delegate;
	IGRetroRegistrationAddEmailView* _addEmailView;
	NSString* _email;
	UITapGestureRecognizer* _tapGesture;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationAddEmailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationAddEmailView * addEmailView;                                     //@synthesize addEmailView=_addEmailView - In the implementation block
@property (assign,nonatomic) char submitting;                                                                    //@synthesize submitting=_submitting - In the implementation block
@property (nonatomic,copy) NSString * email;                                                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                //@synthesize tapGesture=_tapGesture - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setSubmitting:(char)arg1 ;
-(char)submitting;
-(void)nextButtonTapped;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)validateEmail:(id)arg1 ;
-(IGRetroRegistrationAddEmailView *)addEmailView;
-(void)phoneRegistrationButtonTapped;
-(void)loginButtonTapped;
-(void)backgroundViewTapped;
-(void)setAddEmailView:(IGRetroRegistrationAddEmailView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationAddEmailViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationAddEmailViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

