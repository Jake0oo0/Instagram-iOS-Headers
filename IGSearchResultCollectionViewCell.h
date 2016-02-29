/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
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
	UILabel* _usernameLabel;
	int _borderStyle;
	UIImageView* _verifiedBadgeImageView;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (nonatomic,retain) IGUser * user;                                                             //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profileView;                                   //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic) int borderStyle;                                                           //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedBadgeImageView;                                      //@synthesize verifiedBadgeImageView=_verifiedBadgeImageView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                        //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)cellSize;
-(id)initWithFrame:(CGRect)arg1 andBorderStyle:(int)arg2 ;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(IGProfilePictureImageView *)profileView;
-(void)setProfileView:(IGProfilePictureImageView *)arg1 ;
-(UIImageView *)verifiedBadgeImageView;
-(void)setVerifiedBadgeImageView:(UIImageView *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)configureWithUser:(id)arg1 delegate:(id)arg2 ;
-(char)gestureRecognizerShouldBeginInCollectionView:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSearchResultCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGSearchResultCollectionViewCellDelegate>)delegate;
-(void)longPress:(id)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(int)borderStyle;
@end

