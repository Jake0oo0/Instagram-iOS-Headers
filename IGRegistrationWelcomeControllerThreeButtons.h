/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:45 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
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

