/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UILabel;

@interface IGHideHeaderView : UIView {

	char _showUser;
	IGProfilePictureImageView* _profilePic;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char showUser;                                       //@synthesize showUser=_showUser - In the implementation block
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)setShowUser:(char)arg1 ;
-(char)showUser;
-(void)hideUser:(id)arg1 suggested:(char)arg2 ;
-(void)hideItemName:(id)arg1 suggested:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

