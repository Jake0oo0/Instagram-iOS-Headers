/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, IGProfilePictureImageView, UIImageView;

@interface IGUserHeaderView : UIView {

	UIButton* _followButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGProfilePictureImageView* _imageView;
	UIImageView* _verifiedImageView;

}

@property (nonatomic,retain) UIButton * followButton;                            //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                    //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
-(UIButton *)followButton;
-(void)setFollowButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(IGProfilePictureImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(IGProfilePictureImageView *)arg1 ;
-(UIImageView *)verifiedImageView;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
@end

