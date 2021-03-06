
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectedNUXViewDelegate;
@class NSString, NSAttributedString, UIImageView, UILabel, UITapGestureRecognizer;

@interface IGDirectedNUXView : UIView {

	char _isShowing;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	id<IGDirectedNUXViewDelegate> _delegate;
	UIImageView* _leftBGView;
	UIImageView* _rightBGView;
	UILabel* _titleLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CGPoint _targetPoint;

}

@property (nonatomic,retain) UIImageView * leftBGView;                                   //@synthesize leftBGView=_leftBGView - In the implementation block
@property (nonatomic,retain) UIImageView * rightBGView;                                  //@synthesize rightBGView=_rightBGView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char isShowing;                                             //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle;                       //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) CGPoint targetPoint;                                        //@synthesize targetPoint=_targetPoint - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectedNUXViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
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
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setIsShowing:(char)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<IGDirectedNUXViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGDirectedNUXViewDelegate>)delegate;
-(NSString *)title;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UILabel *)titleLabel;
-(NSAttributedString *)attributedTitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGPoint)targetPoint;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(char)isShowing;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)onTap;
@end

