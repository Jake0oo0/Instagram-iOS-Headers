
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGPreviewActionViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGCustomViewController.h>

@class UIViewController, FXBlurView, UIView, IGPreviewActionView, UIImageView, NSArray, NSString;

@interface IGPreviewViewController : UIViewController <IGPreviewActionViewDelegate, UIViewControllerTransitioningDelegate, IGCustomViewController> {

	char _isShowingArrowView;
	char _isShowingActionView;
	char _isActionViewShownBeforePanning;
	UIViewController* _contentViewControler;
	FXBlurView* _blurView;
	UIView* _movableView;
	UIView* _maskedView;
	IGPreviewActionView* _actionView;
	UIImageView* _arrowView;
	float _panToHideOffset;
	NSArray* _actionItems;
	CGPoint _panningOrigin;
	CGPoint _panningViewOrigin;

}

@property (nonatomic,readonly) UIViewController * contentViewControler;              //@synthesize contentViewControler=_contentViewControler - In the implementation block
@property (nonatomic,retain) FXBlurView * blurView;                                  //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * movableView;                                   //@synthesize movableView=_movableView - In the implementation block
@property (nonatomic,retain) UIView * maskedView;                                    //@synthesize maskedView=_maskedView - In the implementation block
@property (nonatomic,retain) IGPreviewActionView * actionView;                       //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UIImageView * arrowView;                                //@synthesize arrowView=_arrowView - In the implementation block
@property (assign,nonatomic) CGPoint panningOrigin;                                  //@synthesize panningOrigin=_panningOrigin - In the implementation block
@property (assign,nonatomic) CGPoint panningViewOrigin;                              //@synthesize panningViewOrigin=_panningViewOrigin - In the implementation block
@property (assign,nonatomic) float panToHideOffset;                                  //@synthesize panToHideOffset=_panToHideOffset - In the implementation block
@property (assign,nonatomic) char isShowingArrowView;                                //@synthesize isShowingArrowView=_isShowingArrowView - In the implementation block
@property (assign,nonatomic) char isShowingActionView;                               //@synthesize isShowingActionView=_isShowingActionView - In the implementation block
@property (assign,nonatomic) char isActionViewShownBeforePanning;                    //@synthesize isActionViewShownBeforePanning=_isActionViewShownBeforePanning - In the implementation block
@property (nonatomic,retain) NSArray * actionItems;                                  //@synthesize actionItems=_actionItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)ig_keyViewControllers;
-(UIImageView *)arrowView;
-(void)setArrowView:(UIImageView *)arg1 ;
-(void)actionView:(id)arg1 didTakeAction:(id)arg2 ;
-(void)setActionItems:(NSArray *)arg1 ;
-(void)setMovableView:(UIView *)arg1 ;
-(UIView *)movableView;
-(UIViewController *)contentViewControler;
-(void)setPanningOrigin:(CGPoint)arg1 ;
-(void)setPanningViewOrigin:(CGPoint)arg1 ;
-(void)setIsShowingArrowView:(char)arg1 ;
-(CGPoint)panningOrigin;
-(char)isShowingActionView;
-(void)showActionView;
-(void)hideActionView;
-(CGPoint)panningViewOrigin;
-(void)panViewsWithMovableViewOrigin:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)restoreViewsToRestingPositionAnimatedCompletion:(/*^block*/id)arg1 ;
-(void)didTap:(id)arg1 ;
-(void)didPan:(id)arg1 ;
-(void)setIsActionViewShownBeforePanning:(char)arg1 ;
-(void)setPanToHideOffset:(float)arg1 ;
-(float)panToHideOffset;
-(float)restingActionViewY;
-(CGPoint)inertialTranslationForTranslation:(CGPoint)arg1 ;
-(char)isShowingArrowView;
-(float)restingMovableViewY;
-(void)setIsShowingActionView:(char)arg1 ;
-(char)isActionViewShownBeforePanning;
-(void)didStartPanFromExternalGestureRecognizer:(id)arg1 ;
-(void)didPanFromExternalGestureRecognizer:(id)arg1 ;
-(void)didEndPanFromExternalGestureRecognizer:(id)arg1 ;
-(NSArray *)actionItems;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(FXBlurView *)blurView;
-(void)setBlurView:(FXBlurView *)arg1 ;
-(IGPreviewActionView *)actionView;
-(void)setActionView:(IGPreviewActionView *)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)maskedView;
-(void)setMaskedView:(UIView *)arg1 ;
@end

