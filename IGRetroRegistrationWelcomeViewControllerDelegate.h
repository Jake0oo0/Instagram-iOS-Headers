/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
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
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;

@end

