
#import <Instagram/IGNavigationAnimator.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class UIView, NSString;

@interface IGNavigationPopAnimator : IGNavigationAnimator <UIViewControllerInteractiveTransitioning> {

	char _interactive;
	char _isRevealingTabBar;
	char _isHidingTabBar;
	char _interactiveTransitionDimmedStatusBar;
	UIView* _tabBarSuperview;
	UIView* _navigationBarSuperview;
	float _percentComplete;
	UIView* _fromHeaderSnapshot;
	UIView* _toHeaderSnapshot;

}

@property (assign,nonatomic,__weak) UIView * tabBarSuperview;                        //@synthesize tabBarSuperview=_tabBarSuperview - In the implementation block
@property (assign,nonatomic,__weak) UIView * navigationBarSuperview;                 //@synthesize navigationBarSuperview=_navigationBarSuperview - In the implementation block
@property (assign,nonatomic) char isRevealingTabBar;                                 //@synthesize isRevealingTabBar=_isRevealingTabBar - In the implementation block
@property (assign,nonatomic) char isHidingTabBar;                                    //@synthesize isHidingTabBar=_isHidingTabBar - In the implementation block
@property (assign,nonatomic) float percentComplete;                                  //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) char interactiveTransitionDimmedStatusBar;              //@synthesize interactiveTransitionDimmedStatusBar=_interactiveTransitionDimmedStatusBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * fromHeaderSnapshot;                     //@synthesize fromHeaderSnapshot=_fromHeaderSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * toHeaderSnapshot;                       //@synthesize toHeaderSnapshot=_toHeaderSnapshot - In the implementation block
@property (assign,getter=isInteractive,nonatomic) char interactive;                  //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)standardPopAnimator;
-(void)setUpViewHierarchy;
-(void)setNavigationBarSuperview:(UIView *)arg1 ;
-(UIView *)navigationBarSuperview;
-(void)updateWithPercentComplete:(float)arg1 ;
-(void)finishTransitionWithCompleted:(char)arg1 andVelocity:(float)arg2 ;
-(void)putBackViewHierarchyWithCompleted:(char)arg1 ;
-(void)moveToPercentCompleted:(float)arg1 ;
-(void)setTabBarSuperview:(UIView *)arg1 ;
-(void)setIsHidingTabBar:(char)arg1 ;
-(void)setIsRevealingTabBar:(char)arg1 ;
-(char)isRevealingTabBar;
-(char)isHidingTabBar;
-(UIView *)fromHeaderSnapshot;
-(UIView *)toHeaderSnapshot;
-(UIView *)tabBarSuperview;
-(void)setInteractiveTransitionDimmedStatusBar:(char)arg1 ;
-(char)interactiveTransitionDimmedStatusBar;
-(void)setFromHeaderSnapshot:(UIView *)arg1 ;
-(void)setToHeaderSnapshot:(UIView *)arg1 ;
-(char)isInteractive;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(float)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(void)setInteractive:(char)arg1 ;
@end

