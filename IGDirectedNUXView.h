
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSAttributedString, UIImageView, UILabel;

@interface IGDirectedNUXView : UIView {

	char _isShowing;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	UIImageView* _leftBGView;
	UIImageView* _rightBGView;
	UILabel* _titleLabel;
	CGPoint _targetPoint;

}

@property (nonatomic,retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) char isShowing;                                    //@synthesize isShowing=_isShowing - In the implementation block
@property (assign,nonatomic) CGPoint targetPoint;                               //@synthesize targetPoint=_targetPoint - In the implementation block
@property (nonatomic,retain) UIImageView * leftBGView;                          //@synthesize leftBGView=_leftBGView - In the implementation block
@property (nonatomic,retain) UIImageView * rightBGView;                         //@synthesize rightBGView=_rightBGView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)showAndHide;
-(void)showAndHideAfterDelay:(double)arg1 ;
-(UIImageView *)leftBGView;
-(UIImageView *)rightBGView;
-(void)resize;
-(void)setXAnchorPosition:(float)arg1 flipped:(char)arg2 ;
-(void)scheduleHideAfterDelay:(double)arg1 ;
-(void)positionOnScreen;
-(void)setLeftBGView:(UIImageView *)arg1 ;
-(void)setRightBGView:(UIImageView *)arg1 ;
-(void)setIsShowing:(char)arg1 ;
-(void)hide;
-(void)show;
-(id)init;
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UILabel *)titleLabel;
-(NSAttributedString *)attributedTitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGPoint)targetPoint;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(char)isShowing;
@end

