
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIImageView, UILabel, IGDynamics1D;

@interface IGSpringButton : UIControl {

	UIView* _contentView;
	float _minimumWidth;
	float _maximumWidth;
	int _displayType;
	UIImageView* _springContentView;
	UIImageView* _accessoryImageView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	float _currentScale;
	IGDynamics1D* _spring;

}

@property (nonatomic,retain) UIImageView * springContentView;               //@synthesize springContentView=_springContentView - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryImageView;              //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                   //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) float currentScale;                            //@synthesize currentScale=_currentScale - In the implementation block
@property (assign,nonatomic,__weak) IGDynamics1D * spring;                  //@synthesize spring=_spring - In the implementation block
@property (nonatomic,retain) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) float titleLabelPadding; 
@property (assign,nonatomic) float minimumWidth;                            //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) float maximumWidth;                            //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) int displayType;                               //@synthesize displayType=_displayType - In the implementation block
-(UIImageView *)springContentView;
-(UIImageView *)accessoryImageView;
-(void)setCurrentScale:(float)arg1 ;
-(void)scaleUp:(char)arg1 withVelocity:(char)arg2 ;
-(float)currentScale;
-(void)setSpring:(IGDynamics1D *)arg1 ;
-(char)shouldShowTitle;
-(void)setSpringContentView:(UIImageView *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setMinimumWidth:(float)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)minimumWidth;
-(float)maximumWidth;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(int)displayType;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(IGDynamics1D *)spring;
-(float)titleLabelPadding;
@end

