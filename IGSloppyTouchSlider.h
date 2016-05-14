/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIImageView, UIView, UIPanGestureRecognizer, UITapGestureRecognizer, UIButton, NSString;

@interface IGSloppyTouchSlider : UIControl <UIGestureRecognizerDelegate> {

	char _positiveOnlySlider;
	char _isSliding;
	float _value;
	UIImageView* _thumbView;
	UIView* _trackView;
	UIView* _highlightedTrackView;
	UIImageView* _centerView;
	float _panValueOrigin;
	float _sliderPosition;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	UIButton* _addAccessibilityButton;
	UIButton* _subtractAccessibilityButton;
	CGSize _touchTargetInflation;
	CGPoint _panOrigin;

}

@property (nonatomic,retain) UIImageView * thumbView;                             //@synthesize thumbView=_thumbView - In the implementation block
@property (nonatomic,retain) UIView * trackView;                                  //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,retain) UIView * highlightedTrackView;                       //@synthesize highlightedTrackView=_highlightedTrackView - In the implementation block
@property (nonatomic,retain) UIImageView * centerView;                            //@synthesize centerView=_centerView - In the implementation block
@property (assign,nonatomic) CGPoint panOrigin;                                   //@synthesize panOrigin=_panOrigin - In the implementation block
@property (assign,nonatomic) float panValueOrigin;                                //@synthesize panValueOrigin=_panValueOrigin - In the implementation block
@property (assign,nonatomic) float sliderPosition;                                //@synthesize sliderPosition=_sliderPosition - In the implementation block
@property (assign,nonatomic) char isSliding;                                      //@synthesize isSliding=_isSliding - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                 //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                 //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) UIButton * addAccessibilityButton;                   //@synthesize addAccessibilityButton=_addAccessibilityButton - In the implementation block
@property (nonatomic,retain) UIButton * subtractAccessibilityButton;              //@synthesize subtractAccessibilityButton=_subtractAccessibilityButton - In the implementation block
@property (assign,nonatomic) float value;                                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) CGSize touchTargetInflation;                         //@synthesize touchTargetInflation=_touchTargetInflation - In the implementation block
@property (assign,nonatomic) char positiveOnlySlider;                             //@synthesize positiveOnlySlider=_positiveOnlySlider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessibilityNudgeButtonWithLabel:(id)arg1 initialValue:(id)arg2 ;
-(UIView *)trackView;
-(void)setThumbView:(UIImageView *)arg1 ;
-(void)setCenterView:(UIImageView *)arg1 ;
-(void)onPan:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(void)onAccessibilityAdd:(id)arg1 ;
-(void)onAccessibilitySubtract:(id)arg1 ;
-(void)voiceOverStatusChangedNotification:(id)arg1 ;
-(float)sliderPositionForValue:(float)arg1 ;
-(UIImageView *)centerView;
-(float)unitDisplacementInPoints;
-(UIView *)highlightedTrackView;
-(void)setSliderPosition:(float)arg1 ;
-(void)setIsSliding:(char)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(UIPanGestureRecognizer *)panGesture;
-(float)valueForSliderPosition:(float)arg1 ;
-(CGSize)touchTargetInflation;
-(void)setTouchTargetInflation:(CGSize)arg1 ;
-(char)positiveOnlySlider;
-(void)setPositiveOnlySlider:(char)arg1 ;
-(UIImageView *)thumbView;
-(void)setTrackView:(UIView *)arg1 ;
-(void)setHighlightedTrackView:(UIView *)arg1 ;
-(CGPoint)panOrigin;
-(void)setPanOrigin:(CGPoint)arg1 ;
-(float)panValueOrigin;
-(void)setPanValueOrigin:(float)arg1 ;
-(float)sliderPosition;
-(char)isSliding;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UIButton *)addAccessibilityButton;
-(void)setAddAccessibilityButton:(UIButton *)arg1 ;
-(UIButton *)subtractAccessibilityButton;
-(void)setSubtractAccessibilityButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setAccessibilityValue:(id)arg1 ;
@end

