
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/POPAnimationDelegate.h>

@class UIView, UIPanGestureRecognizer, UILabel, UIButton, UIImageView, NSString;

@interface IGTickSlider : UIControl <UIGestureRecognizerDelegate, POPAnimationDelegate> {

	char _shouldDisplayValue;
	float _value;
	UIView* _scrollWheel;
	UIPanGestureRecognizer* _panGestureRecognizer;
	float _unitDisplacement;
	UILabel* _angleLabel;
	UIButton* _angleResetButton;
	UIImageView* _bug;
	float _panValueOrigin;
	CGPoint _panOrigin;

}

@property (nonatomic,retain) UIView * scrollWheel;                                       //@synthesize scrollWheel=_scrollWheel - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) float unitDisplacement;                                     //@synthesize unitDisplacement=_unitDisplacement - In the implementation block
@property (nonatomic,retain) UILabel * angleLabel;                                       //@synthesize angleLabel=_angleLabel - In the implementation block
@property (nonatomic,retain) UIButton * angleResetButton;                                //@synthesize angleResetButton=_angleResetButton - In the implementation block
@property (nonatomic,retain) UIImageView * bug;                                          //@synthesize bug=_bug - In the implementation block
@property (assign,nonatomic) CGPoint panOrigin;                                          //@synthesize panOrigin=_panOrigin - In the implementation block
@property (assign,nonatomic) float panValueOrigin;                                       //@synthesize panValueOrigin=_panValueOrigin - In the implementation block
@property (assign,nonatomic) float value;                                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char shouldDisplayValue;                                    //@synthesize shouldDisplayValue=_shouldDisplayValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onPan:(id)arg1 ;
-(CGPoint)panOrigin;
-(void)setPanOrigin:(CGPoint)arg1 ;
-(float)panValueOrigin;
-(void)setPanValueOrigin:(float)arg1 ;
-(UIView *)scrollWheel;
-(UIButton *)angleResetButton;
-(void)resetAngle;
-(float)scrollWheelOffsetForValue:(float)arg1 ;
-(UILabel *)angleLabel;
-(void)updateAngleLabel;
-(void)incrementLeft;
-(void)incrementRight;
-(float)virtualPanPositionForOffset:(float)arg1 ;
-(float)offsetForVirtualPanPosition:(float)arg1 ;
-(float)valueForScrollOffset:(float)arg1 ;
-(void)setShouldDisplayValue:(char)arg1 ;
-(char)shouldDisplayValue;
-(void)setScrollWheel:(UIView *)arg1 ;
-(float)unitDisplacement;
-(void)setUnitDisplacement:(float)arg1 ;
-(void)setAngleLabel:(UILabel *)arg1 ;
-(void)setAngleResetButton:(UIButton *)arg1 ;
-(UIImageView *)bug;
-(void)setBug:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)handleTap:(id)arg1 ;
@end

