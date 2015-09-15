/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:45 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextField.h>

@class UIButton;

@interface IGPasswordField : IGTextField {

	UIButton* _logInButton;
	UIButton* _forgotButton;

}

@property (nonatomic,retain) UIButton * logInButton;               //@synthesize logInButton=_logInButton - In the implementation block
@property (nonatomic,retain) UIButton * forgotButton;              //@synthesize forgotButton=_forgotButton - In the implementation block
-(void)setIsVerifying:(char)arg1 ;
-(UIButton *)forgotButton;
-(UIButton *)logInButton;
-(void)showLogInButton;
-(void)showForgotButton;
-(void)configureButtons;
-(void)setLogInButton:(UIButton *)arg1 ;
-(void)setForgotButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
@end

