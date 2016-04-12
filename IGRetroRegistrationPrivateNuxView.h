/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:55 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UITableView, IGRetroRegistrationBackgroundView, UIImageView, UILabel;

@interface IGRetroRegistrationPrivateNuxView : UIView {

	UIButton* _nextButton;
	UITableView* _tableView;
	IGRetroRegistrationBackgroundView* _backgroundView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;

}

@property (nonatomic,retain) UIButton * nextButton;                                           //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                        //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subTitleLabel;                                       //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
-(id)createTitleLabel;
-(void)setUpViews;
-(UILabel *)subTitleLabel;
-(id)createIconView;
-(id)createSubTitleLabel;
-(id)createNextButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
-(UIImageView *)iconView;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
@end

