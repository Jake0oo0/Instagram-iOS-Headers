/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/POPAnimationDelegate.h>

@class UIView, UIPanGestureRecognizer, UILabel, UIButton, UIImageView, NSString;

@interface IGTickSlider : UIControl <UIScrollViewDelegate, UIGestureRecognizerDelegate, POPAnimationDelegate> {

	char _shouldDisplayValue;
	float _value;
	UIView* _scrollWheel;
	UIPanGestureRecognizer* _panGestureRecognizer;
	int _buttonStyle;
	float _unitDisplacement;
	UILabel* _angleLabel;
	UIButton* _angleResetButton;
	UIImageView* _bug;
	float _panValueOrigin;
	CGPoint _panOrigin;

}

@property (assign,nonatomic) float value;                                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char shouldDisplayValue;                                    //@synthesize shouldDisplayValue=_shouldDisplayValue - In the implementation block
@property (nonatomic,retain) UIView * scrollWheel;                                       //@synthesize scrollWheel=_scrollWheel - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) int buttonStyle;                                            //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) float unitDisplacement;                                     //@synthesize unitDisplacement=_unitDisplacement - In the implementation block
@property (nonatomic,retain) UILabel * angleLabel;                                       //@synthesize angleLabel=_angleLabel - In the implementation block
@property (nonatomic,retain) UIButton * angleResetButton;                                //@synthesize angleResetButton=_angleResetButton - In the implementation block
@property (nonatomic,retain) UIImageView * bug;                                          //@synthesize bug=_bug - In the implementation block
@property (assign,nonatomic) CGPoint panOrigin;                                          //@synthesize panOrigin=_panOrigin - In the implementation block
@property (assign,nonatomic) float panValueOrigin;                                       //@synthesize panValueOrigin=_panValueOrigin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(int)arg2 ;
-(void)setShouldDisplayValue:(char)arg1 ;
-(void)onPan:(id)arg1 ;
-(CGPoint)panOrigin;
-(void)setPanOrigin:(CGPoint)arg1 ;
-(float)panValueOrigin;
-(void)setPanValueOrigin:(float)arg1 ;
-(void)setButtonStyle:(int)arg1 ;
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
-(char)shouldDisplayValue;
-(void)setScrollWheel:(UIView *)arg1 ;
-(int)buttonStyle;
-(float)unitDisplacement;
-(void)setUnitDisplacement:(float)arg1 ;
-(void)setAngleLabel:(UILabel *)arg1 ;
-(void)setAngleResetButton:(UIButton *)arg1 ;
-(UIImageView *)bug;
-(void)setBug:(UIImageView *)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)handleTap:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
@end

