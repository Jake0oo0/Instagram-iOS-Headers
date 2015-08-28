/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationPhoneControllerDelegate;
@class IGCountryCodeViewController, UIButton, UIView, IGRegistrationStepView, IGRegistrationNavigationBar, NSString;

@interface IGRegistrationPhoneController : NSObject <IGCountryCodeViewControllerDelegate, IGTextFieldDelegate, IGRegistrationStepObject> {

	id<IGRegistrationPhoneControllerDelegate> _delegate;
	IGCountryCodeViewController* _countryCodeTableViewController;
	UIButton* _countryCodeButton;
	UIView* _textFieldLeftView;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;

}

@property (assign,nonatomic,__weak) id<IGRegistrationPhoneControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCountryCodeViewController * countryCodeTableViewController;              //@synthesize countryCodeTableViewController=_countryCodeTableViewController - In the implementation block
@property (nonatomic,retain) UIButton * countryCodeButton;                                              //@synthesize countryCodeButton=_countryCodeButton - In the implementation block
@property (nonatomic,retain) UIView * textFieldLeftView;                                                //@synthesize textFieldLeftView=_textFieldLeftView - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                         //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)nextButtonTapped;
-(UIButton *)countryCodeButton;
-(UIView *)textFieldLeftView;
-(void)selectCountryCode;
-(void)setCountryCodeButton:(UIButton *)arg1 ;
-(void)setTextFieldLeftView:(UIView *)arg1 ;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(IGCountryCodeViewController *)countryCodeTableViewController;
-(void)setCountryCodeTableViewController:(IGCountryCodeViewController *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGRegistrationPhoneControllerDelegate>)arg1 ;
-(id)init;
-(id<IGRegistrationPhoneControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
@end

