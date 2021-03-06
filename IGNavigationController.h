
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Instagram/IGNavigationAnimatorDelegate.h>

@protocol IGNavigationControllerDelegate;
@class IGAnalyticsMetadata, UIViewController, IGScrollingHeaderCoordinator, IGHorizontalPanGestureRecognizer, IGNavigationPopAnimator, IGNavigationPushAnimator, UIView, IGNavigationBar, NSString;

@interface IGNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, IGNavigationAnimatorDelegate> {

	id<IGNavigationControllerDelegate> _navigationDelegate;
	IGAnalyticsMetadata* _analyticsMetadata;
	UIViewController* _fromPreviewViewController;
	IGScrollingHeaderCoordinator* _scrollingHeaderCoordinator;
	IGHorizontalPanGestureRecognizer* _panGesture;
	IGNavigationPopAnimator* _navigationPopAnimator;
	IGNavigationPushAnimator* _navigationPushAnimator;
	UIViewController* _poppingViewController;
	UIView* _navigationBarUnderlay;
	CGPoint _initialTranslation;

}

@property (nonatomic,retain) IGHorizontalPanGestureRecognizer * panGesture;                             //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) IGNavigationPopAnimator * navigationPopAnimator;                           //@synthesize navigationPopAnimator=_navigationPopAnimator - In the implementation block
@property (nonatomic,retain) IGNavigationPushAnimator * navigationPushAnimator;                         //@synthesize navigationPushAnimator=_navigationPushAnimator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * poppingViewController;                           //@synthesize poppingViewController=_poppingViewController - In the implementation block
@property (nonatomic,retain) UIView * navigationBarUnderlay;                                            //@synthesize navigationBarUnderlay=_navigationBarUnderlay - In the implementation block
@property (assign,nonatomic,__weak) id<IGNavigationControllerDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) IGNavigationBar * navigationBar; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata;                                 //@synthesize analyticsMetadata=_analyticsMetadata - In the implementation block
@property (assign,nonatomic) CGPoint initialTranslation;                                                //@synthesize initialTranslation=_initialTranslation - In the implementation block
@property (nonatomic,retain) UIViewController * fromPreviewViewController;                              //@synthesize fromPreviewViewController=_fromPreviewViewController - In the implementation block
@property (nonatomic,readonly) IGScrollingHeaderCoordinator * scrollingHeaderCoordinator;               //@synthesize scrollingHeaderCoordinator=_scrollingHeaderCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGHorizontalPanGestureRecognizer *)panGesture;
-(void)setPanGesture:(IGHorizontalPanGestureRecognizer *)arg1 ;
-(void)updateForVisibleChange;
-(CGPoint)initialTranslation;
-(void)setInitialTranslation:(CGPoint)arg1 ;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(void)navigationAnimatorWillAnimateTransition:(id)arg1 ;
-(void)navigationAnimatorDidFinishTransition:(id)arg1 ;
-(void)setNavigationPopAnimator:(IGNavigationPopAnimator *)arg1 ;
-(void)setNavigationPushAnimator:(IGNavigationPushAnimator *)arg1 ;
-(IGNavigationPopAnimator *)navigationPopAnimator;
-(IGNavigationPushAnimator *)navigationPushAnimator;
-(UIView *)navigationBarUnderlay;
-(id)ig_tabBarController;
-(id)ig_topViewController;
-(void)setPoppingViewController:(UIViewController *)arg1 ;
-(UIViewController *)poppingViewController;
-(IGScrollingHeaderCoordinator *)scrollingHeaderCoordinator;
-(UIViewController *)fromPreviewViewController;
-(void)setFromPreviewViewController:(UIViewController *)arg1 ;
-(void)setNavigationBarUnderlay:(UIView *)arg1 ;
-(id)popToMainViewController:(char)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)popViewControllerAnimated:(char)arg1 ;
-(int)preferredStatusBarStyle;
-(int)preferredStatusBarUpdateAnimation;
-(char)shouldAutorotate;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(double)transitionDuration;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(id<IGNavigationControllerDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGNavigationControllerDelegate>)arg1 ;
@end

