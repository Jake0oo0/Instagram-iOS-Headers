/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, IGRegistrationBackgroundView, UILabel;

@interface IGRetroRegistrationBackgroundView : UIView {

	UIButton* _footerButton;
	UIView* _footerView;
	IGRegistrationBackgroundView* _backgroundView;
	UIView* _footerViewSeperator;
	int _footerViewType;
	UILabel* _footerViewLabel;

}

@property (nonatomic,retain) UIButton * footerButton;                                    //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) IGRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * footerViewSeperator;                               //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (assign,nonatomic) int footerViewType;                                         //@synthesize footerViewType=_footerViewType - In the implementation block
@property (nonatomic,retain) UILabel * footerViewLabel;                                  //@synthesize footerViewLabel=_footerViewLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 footerViewType:(int)arg2 ;
-(UIButton *)footerButton;
-(void)setFooterViewType:(int)arg1 ;
-(UIView *)footerViewSeperator;
-(int)footerViewType;
-(UILabel *)footerViewLabel;
-(id)footerViewButtonText;
-(id)footerViewLabelText;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)setFooterViewSeperator:(UIView *)arg1 ;
-(void)setFooterViewLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRegistrationBackgroundView *)arg1 ;
-(IGRegistrationBackgroundView *)backgroundView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

