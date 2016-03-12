
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, IGProfilePictureImageView, UIView;

@interface IGDirectThreadAvatarView : UIView {

	char _selected;
	NSArray* _users;
	int _borderStyle;
	IGProfilePictureImageView* _frontProfileView;
	IGProfilePictureImageView* _backProfileView;
	UIView* _singleBlueRing;
	UIView* _doubleBlueRing;

}

@property (nonatomic,retain) NSArray * users;                                           //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) char selected;                                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) int borderStyle;                                           //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * frontProfileView;              //@synthesize frontProfileView=_frontProfileView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * backProfileView;               //@synthesize backProfileView=_backProfileView - In the implementation block
@property (nonatomic,retain) UIView * singleBlueRing;                                   //@synthesize singleBlueRing=_singleBlueRing - In the implementation block
@property (nonatomic,retain) UIView * doubleBlueRing;                                   //@synthesize doubleBlueRing=_doubleBlueRing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 andBorderStyle:(int)arg2 ;
-(IGProfilePictureImageView *)backProfileView;
-(IGProfilePictureImageView *)frontProfileView;
-(UIView *)singleBlueRing;
-(UIView *)doubleBlueRing;
-(CGRect)stackedFrontUserFrame;
-(CGRect)stackedBackUserFrame;
-(CGRect)singleUserFrame;
-(float)overlapDistance;
-(void)setFrontProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setBackProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setSingleBlueRing:(UIView *)arg1 ;
-(void)setDoubleBlueRing:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(char)selected;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(int)borderStyle;
-(float)pictureDiameter;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end

