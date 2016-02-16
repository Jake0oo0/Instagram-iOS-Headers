/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGModernWebViewToolbar : UIView {

	UIButton* _backButton;
	UIButton* _forwardButton;
	UIView* _hairlineView;

}

@property (nonatomic,retain) UIButton * backButton;                 //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;              //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIView * hairlineView;                 //@synthesize hairlineView=_hairlineView - In the implementation block
+(id)navigationButtonWithImage:(id)arg1 ;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(UIButton *)backButton;
@end

