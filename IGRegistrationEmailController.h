/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:31 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationEmailControllerDelegate;
@class UIView, IGRegistrationNavigationBar, IGRegistrationStepView, NSString;

@interface IGRegistrationEmailController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject> {

	char _submitting;
	id<IGRegistrationEmailControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;

}

@property (assign,nonatomic,__weak) id<IGRegistrationEmailControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                      //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                   //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) char submitting;                                                        //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)nextButtonTapped;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(IGRegistrationStepView *)stepView;
-(void)verifyEmailAndContinue;
-(void)validateEmail:(id)arg1 ;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGRegistrationEmailControllerDelegate>)arg1 ;
-(id<IGRegistrationEmailControllerDelegate>)delegate;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
@end

