
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol IGNavigationAnimatorDelegate, UIViewControllerContextTransitioning;
@class IGViewController, UIView, IGNavigationBar, NSString;

@interface IGNavigationAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	char _userInteractionDisabled;
	char _transitioning;
	id<IGNavigationAnimatorDelegate> _delegate;
	IGViewController* _toViewController;
	IGViewController* _fromViewController;
	UIView* _containerView;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (assign,nonatomic,__weak) IGViewController * toViewController;                                     //@synthesize toViewController=_toViewController - In the implementation block
@property (assign,nonatomic,__weak) IGViewController * fromViewController;                                   //@synthesize fromViewController=_fromViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                                  //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                                      //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic,__weak) id<IGNavigationAnimatorDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IGNavigationBar * navigationBar; 
@property (nonatomic,__weak,readonly) UIView * tabBar; 
@property (assign,getter=isUserInteractionDisabled,nonatomic) char userInteractionDisabled;                  //@synthesize userInteractionDisabled=_userInteractionDisabled - In the implementation block
@property (nonatomic,readonly) char bottomBarWillBeHidden; 
@property (nonatomic,readonly) char bottomBarIsHidden; 
@property (nonatomic,readonly) char navigationBarIsHidden; 
@property (nonatomic,readonly) char navigationBarWillBeHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dynamicsProperties;
-(void)setStatusBarDimmed:(char)arg1 animated:(char)arg2 ;
-(void)setUserInteractionDisabled:(char)arg1 ;
-(char)bottomBarWillBeHidden;
-(char)bottomBarIsHidden;
-(char)navigationBarIsHidden;
-(char)navigationBarWillBeHidden;
-(char)isUserInteractionDisabled;
-(void)setTransitioning:(char)arg1 ;
-(void)setFromViewController:(IGViewController *)arg1 ;
-(void)setToViewController:(IGViewController *)arg1 ;
-(void)setDelegate:(id<IGNavigationAnimatorDelegate>)arg1 ;
-(id<IGNavigationAnimatorDelegate>)delegate;
-(UIView *)containerView;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)startInteractiveTransition:(id)arg1 ;
-(IGNavigationBar *)navigationBar;
-(void)setContainerView:(UIView *)arg1 ;
-(char)isTransitioning;
-(IGViewController *)fromViewController;
-(IGViewController *)toViewController;
-(UIView *)tabBar;
@end

