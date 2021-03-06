
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGUsertagViewDelegate;
@class UIView, UIImageView, UIPanGestureRecognizer, UILabel, IGUsertag, UIControl, UILongPressGestureRecognizer, IGTapButton, NSString;

@interface IGUsertagView : UIView <UIGestureRecognizerDelegate> {

	UIView* _expandedView;
	UIImageView* _leftBGView;
	UIImageView* _rightBGView;
	float _caretPosition;
	char _shouldRemoveAfterAnimation;
	UIPanGestureRecognizer* _panRecognizer;
	UILabel* _tagLabel;
	CGPoint _panGestureInitialCenter;
	CGPoint _panGestureInitialLocation;
	char _expanded;
	char _isMoving;
	char _flipped;
	char _isEditable;
	char _isActive;
	IGUsertag* _usertag;
	id<IGUsertagViewDelegate> _delegate;
	UIControl* _contentView;
	UILongPressGestureRecognizer* _pressRecognizer;
	IGTapButton* _removeButton;
	float _proposedCaretPosition;
	CGPoint _position;

}

@property (assign,nonatomic) char isActive;                                                 //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) IGUsertag * usertag;                                           //@synthesize usertag=_usertag - In the implementation block
@property (assign,nonatomic) char expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGUsertagViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIControl * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * pressRecognizer;              //@synthesize pressRecognizer=_pressRecognizer - In the implementation block
@property (nonatomic,readonly) IGTapButton * removeButton;                                  //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic) CGPoint position;                                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) char isMoving;                                               //@synthesize isMoving=_isMoving - In the implementation block
@property (assign,nonatomic) char flipped;                                                  //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) char isEditable;                                               //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) float caretPosition;                                           //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) float proposedCaretPosition;                                   //@synthesize proposedCaretPosition=_proposedCaretPosition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)currentWidth;
-(void)onTouchDown;
-(IGUsertag *)usertag;
-(void)show:(char)arg1 withAnimation:(int)arg2 ;
-(void)setUsertag:(IGUsertag *)arg1 ;
-(void)setExpanded:(char)arg1 animated:(char)arg2 ;
-(void)onRemove;
-(void)onDragExit;
-(CGRect)proposedFrame;
-(void)handlePanFromRecognizer:(id)arg1 ;
-(CGPoint)caretPointWithCenter:(CGPoint)arg1 ;
-(void)hideAndRemove;
-(void)removeAndNotifyDelegate:(char)arg1 ;
-(void)repositionWithCaretAtPosition:(float)arg1 ;
-(char)flipped;
-(float)proposedCaretPosition;
-(void)setProposedCaretPosition:(float)arg1 ;
-(void)shrink:(char)arg1 animated:(char)arg2 ;
-(void)reposition;
-(void)setCaretPosition:(float)arg1 ;
-(float)caretPosition;
-(void)setFlipped:(char)arg1 ;
-(void)setDelegate:(id<IGUsertagViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id<IGUsertagViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)isActive;
-(char)isEditable;
-(void)setPosition:(CGPoint)arg1 ;
-(UIControl *)contentView;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(CGPoint)position;
-(void)didMoveToSuperview;
-(void)setIsActive:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)remove;
-(void)scaleUp;
-(void)updateBackgroundImages;
-(void)setIsEditable:(char)arg1 ;
-(UILongPressGestureRecognizer *)pressRecognizer;
-(void)onTap;
-(char)isMoving;
-(IGTapButton *)removeButton;
@end

