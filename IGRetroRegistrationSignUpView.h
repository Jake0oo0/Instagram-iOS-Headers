/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationSignUpScrollView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationSignUpView : UIView {

	IGRetroRegistrationSignUpScrollView* _signUpScrollView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationSignUpScrollView * signUpScrollView;              //@synthesize signUpScrollView=_signUpScrollView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                  //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setSignUpScrollView:(IGRetroRegistrationSignUpScrollView *)arg1 ;
-(IGRetroRegistrationSignUpScrollView *)signUpScrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

