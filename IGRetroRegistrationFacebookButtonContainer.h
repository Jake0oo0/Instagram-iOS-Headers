/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:54 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGFacebookButton, IGRetroRegistrationFacebookButtonSeperator;

@interface IGRetroRegistrationFacebookButtonContainer : UIView {

	IGFacebookButton* _facebookButton;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;

}

@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(IGFacebookButton *)facebookButton;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

