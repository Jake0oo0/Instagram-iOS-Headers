
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIActivityIndicatorView, IGImageView, UILabel, NSTimer, UIPanGestureRecognizer, UIButton, IGTouchGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGNotificationBar : UIWindow <UIGestureRecognizerDelegate> {

	char _visible;
	char _startedDraggingBanner;
	UIView* _contentView;
	UIActivityIndicatorView* _activityIndicator;
	IGImageView* _imageView;
	UILabel* _label;
	int _disabledCount;
	NSTimer* _timer;
	UIPanGestureRecognizer* _pan;
	UIButton* _dismissButton;
	NSTimer* _hideTimer;
	/*^block*/id _block;
	IGTouchGestureRecognizer* _touchRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	float _initialFingerPointY;
	float _initialCenterY;

}

@property (nonatomic,retain) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int disabledCount;                                        //@synthesize disabledCount=_disabledCount - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                            //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * pan;                             //@synthesize pan=_pan - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                 //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) NSTimer * hideTimer;                                      //@synthesize hideTimer=_hideTimer - In the implementation block
@property (nonatomic,copy) id block;                                                   //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) IGTouchGestureRecognizer * touchRecognizer;               //@synthesize touchRecognizer=_touchRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                   //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) char startedDraggingBanner;                               //@synthesize startedDraggingBanner=_startedDraggingBanner - In the implementation block
@property (assign,nonatomic) float initialFingerPointY;                                //@synthesize initialFingerPointY=_initialFingerPointY - In the implementation block
@property (assign,nonatomic) float initialCenterY;                                     //@synthesize initialCenterY=_initialCenterY - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringWithTitle:(id)arg1 andBody:(id)arg2 ;
+(char)showWithImage:(id)arg1 andAttributedText:(id)arg2 shouldRoundImage:(char)arg3 block:(/*^block*/id)arg4 ;
+(char)showWithImageURL:(id)arg1 andAttributedText:(id)arg2 shouldRoundImage:(char)arg3 block:(/*^block*/id)arg4 ;
+(char)showBarIfAllowedWithBlock:(/*^block*/id)arg1 ;
+(id)sharedInstance;
+(id)defaultTextAttributes;
+(void)setNotificationsEnabled:(char)arg1 ;
-(void)setTouchRecognizer:(IGTouchGestureRecognizer *)arg1 ;
-(IGTouchGestureRecognizer *)touchRecognizer;
-(void)dismissAction:(id)arg1 ;
-(void)setVisible:(char)arg1 velocity:(float)arg2 ;
-(void)notifyWithAction:(unsigned)arg1 ;
-(void)setStartedDraggingBanner:(char)arg1 ;
-(void)setInitialCenterY:(float)arg1 ;
-(void)setInitialFingerPointY:(float)arg1 ;
-(void)setPressedState:(char)arg1 ;
-(float)initialFingerPointY;
-(float)initialCenterY;
-(void)dragWithFingerPont:(CGPoint)arg1 ;
-(void)beginDraggingWithFingerPoint:(CGPoint)arg1 ;
-(char)startedDraggingBanner;
-(void)endDraggingWithFingerPoint:(CGPoint)arg1 ;
-(NSTimer *)hideTimer;
-(void)hideTimer:(id)arg1 ;
-(void)setHideTimer:(NSTimer *)arg1 ;
-(int)disabledCount;
-(void)setDisabledCount:(int)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setPan:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)pan;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)rootViewController;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setVisible:(char)arg1 ;
-(IGImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(char)isVisible;
-(void)startTimer;
-(void)tap:(id)arg1 ;
-(void)setImageView:(IGImageView *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)pan:(id)arg1 ;
-(void)cancelTimer;
-(void)touch:(id)arg1 ;
@end

