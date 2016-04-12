
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGHScrollAYMFCellDelegate;
@class IGFeaturedUserInfo, UIButton, UILabel, IGProfilePictureImageView, IGFollowButton, NSString;

@interface IGHScrollAYMFCell : UICollectionViewCell <UIGestureRecognizerDelegate, IGFollowButtonDelegate> {

	id<IGHScrollAYMFCellDelegate> _delegate;
	IGFeaturedUserInfo* _userInfo;
	UIButton* _dismissButton;
	UILabel* _usernameLabel;
	UILabel* _socialContextLabel;
	IGProfilePictureImageView* _profilePicImageView;
	IGFollowButton* _followButton;
	float _socialContextLabelHeight;

}

@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                     //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                      //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * socialContextLabel;                                 //@synthesize socialContextLabel=_socialContextLabel - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePicImageView;              //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (nonatomic,readonly) IGFollowButton * followButton;                                //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) float socialContextLabelHeight;                                 //@synthesize socialContextLabelHeight=_socialContextLabelHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)suggestedCellHeightForType:(int)arg1 ;
+(float)suggestedCellWidth;
-(UILabel *)usernameLabel;
-(void)dismissButtonTapped;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(IGFollowButton *)followButton;
-(IGProfilePictureImageView *)profilePicImageView;
-(void)setUpSubViews;
-(float)socialContextLabelHeight;
-(UILabel *)socialContextLabel;
-(void)didTapAYMFCell;
-(void)setSocialContextLabelHeight:(float)arg1 ;
-(void)configureWithFeaturedUserInfo:(id)arg1 cellType:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHScrollAYMFCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(IGFeaturedUserInfo *)userInfo;
-(UIButton *)dismissButton;
@end

