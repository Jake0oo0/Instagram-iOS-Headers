/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIImageView, UILabel;

@interface IGClusterBrowsingCategoriesScrollView : UIScrollView {

	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIImageView * iconView;                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

