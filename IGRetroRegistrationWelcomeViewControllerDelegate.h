/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
@optional
-(void)welcomeViewControllerDidTapFBButton:(id)arg1;

@required
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1;
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2;

@end

