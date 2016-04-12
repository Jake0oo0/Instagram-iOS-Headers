/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGSearchResultCollectionViewCellDelegate;
@class IGUser, IGProfilePictureImageView, UILabel, UIImageView, UILongPressGestureRecognizer, NSString;

@interface IGSearchResultCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	IGUser* _user;
	id<IGSearchResultCollectionViewCellDelegate> _delegate;
	IGProfilePictureImageView* _profileView;
	UILabel* _unseenLabel;
	UILabel* _usernameLabel;
	int _borderStyle;
	UIImageView* _verifiedBadgeImageView;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (nonatomic,readonly) IGUser * user;                                                           //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profileView;                                   //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * unseenLabel;                                                     //@synthesize unseenLabel=_unseenLabel - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic) int borderStyle;                                                           //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedBadgeImageView;                                      //@synthesize verifiedBadgeImageView=_verifiedBadgeImageView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                        //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)cellSize;
-(UILabel *)usernameLabel;
-(id)initWithFrame:(CGRect)arg1 andBorderStyle:(int)arg2 ;
-(IGProfilePictureImageView *)profileView;
-(void)setProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UIImageView *)verifiedBadgeImageView;
-(void)setVerifiedBadgeImageView:(UIImageView *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)configureWithUser:(id)arg1 delegate:(id)arg2 ;
-(UILabel *)unseenLabel;
-(char)gestureRecognizerShouldBeginInCollectionView:(id)arg1 ;
-(void)setUnseenLabel:(UILabel *)arg1 ;
-(IGUser *)user;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSearchResultCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGSearchResultCollectionViewCellDelegate>)delegate;
-(void)longPress:(id)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(int)borderStyle;
@end

