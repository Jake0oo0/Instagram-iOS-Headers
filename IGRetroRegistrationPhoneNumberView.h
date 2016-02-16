/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationPhoneNumberFrontView, IGRetroRegistrationBackgroundView;

@interface IGRetroRegistrationPhoneNumberView : UIView {

	IGRetroRegistrationPhoneNumberFrontView* _phoneNumberFrontView;
	IGRetroRegistrationBackgroundView* _backgroundView;

}

@property (nonatomic,retain) IGRetroRegistrationPhoneNumberFrontView * phoneNumberFrontView;              //@synthesize phoneNumberFrontView=_phoneNumberFrontView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
-(IGRetroRegistrationPhoneNumberFrontView *)phoneNumberFrontView;
-(void)setPhoneNumberFrontView:(IGRetroRegistrationPhoneNumberFrontView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
@end

