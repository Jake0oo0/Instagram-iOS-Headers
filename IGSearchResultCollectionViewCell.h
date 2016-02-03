/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UILabel;

@interface IGSearchResultCollectionViewCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileView;
	UILabel* _usernameLabel;
	UILabel* _detailTextLabel;
	int _borderStyle;

}

@property (nonatomic,retain) IGProfilePictureImageView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                            //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (assign,nonatomic) int borderStyle;                                      //@synthesize borderStyle=_borderStyle - In the implementation block
+(CGSize)cellSize;
-(id)initWithFrame:(CGRect)arg1 andBorderStyle:(int)arg2 ;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(IGProfilePictureImageView *)profileView;
-(void)setProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)configureWithUser:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(void)setBorderStyle:(int)arg1 ;
-(int)borderStyle;
@end

