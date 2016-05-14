/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsHeaderViewDelegate;
@class UILabel, UIButton, UIImageView;

@interface IGInsightsHeaderView : UIView {

	id<IGInsightsHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _button;
	UIImageView* _iconView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                           //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTitle:(id)arg1 buttonText:(id)arg2 ;
-(void)_buttonClick:(id)arg1 ;
-(void)_layoutActionButton;
-(void)_layoutTitles;
-(UIButton *)button;
-(void)setDelegate:(id<IGInsightsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsHeaderViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
@end

