/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGRegistrationWelcomeControllerBase.h>
#import <Instagram/IGRegistrationSignUpViewBaseDelegate.h>

@class IGRegistrationSignUpViewThreeButtons, NSString;

@interface IGRegistrationWelcomeControllerThreeButtons : IGRegistrationWelcomeControllerBase <IGRegistrationSignUpViewBaseDelegate> {

	IGRegistrationSignUpViewThreeButtons* _signUpView;

}

@property (nonatomic,retain) IGRegistrationSignUpViewThreeButtons * signUpView; 
@property (assign,nonatomic,__weak) id<IGRegistrationWelcomeControllerThreeButtonsDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userWillProceedFromSignUpView:(id)arg1 withUserInfo:(id)arg2 ;
-(IGRegistrationSignUpViewThreeButtons *)signUpView;
-(void)logInWithFacebookTapped;
-(void)setRegistrationMode:(int)arg1 ;
-(void)dealloc;
@end

