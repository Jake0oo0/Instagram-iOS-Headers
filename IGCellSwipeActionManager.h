/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGCellSwipeActionManagerDelegate;
@class UIView, NSArray, UIPanGestureRecognizer, NSString;

@interface IGCellSwipeActionManager : NSObject <UIGestureRecognizerDelegate> {

	char _disableSwipeToAction;
	char _dragging;
	char _shouldDrag;
	char _didCompleteExpandAnimation;
	char _isShowingActions;
	id<IGCellSwipeActionManagerDelegate> _cellSwipeActionManagerDelegate;
	UIView* _hostingView;
	NSArray* _actionButtons;
	float _actionButtonWidth;
	UIView* _actionButtonContainerView;
	UIView* _contentScreenshotView;
	UIView* _swipeActionsContainerView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	float _totalTranslationX;
	float _contentScreenshotViewBeginningX;
	float _swipeCompletionThresholdX;
	unsigned _panState;
	NSArray* _accessibleElements;
	CGRect _originalActionButtonContainerViewFrame;

}

@property (assign,nonatomic,__weak) id<IGCellSwipeActionManagerDelegate> cellSwipeActionManagerDelegate;              //@synthesize cellSwipeActionManagerDelegate=_cellSwipeActionManagerDelegate - In the implementation block
@property (assign,nonatomic) char disableSwipeToAction;                                                               //@synthesize disableSwipeToAction=_disableSwipeToAction - In the implementation block
@property (nonatomic,retain) UIView * hostingView;                                                                    //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,retain) NSArray * actionButtons;                                                                 //@synthesize actionButtons=_actionButtons - In the implementation block
@property (assign,nonatomic) float actionButtonWidth;                                                                 //@synthesize actionButtonWidth=_actionButtonWidth - In the implementation block
@property (nonatomic,retain) UIView * actionButtonContainerView;                                                      //@synthesize actionButtonContainerView=_actionButtonContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentScreenshotView;                                                          //@synthesize contentScreenshotView=_contentScreenshotView - In the implementation block
@property (nonatomic,retain) UIView * swipeActionsContainerView;                                                      //@synthesize swipeActionsContainerView=_swipeActionsContainerView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                           //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,getter=isDragging,nonatomic) char dragging;                                                         //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) char shouldDrag;                                                                         //@synthesize shouldDrag=_shouldDrag - In the implementation block
@property (assign,nonatomic) CGRect originalActionButtonContainerViewFrame;                                           //@synthesize originalActionButtonContainerViewFrame=_originalActionButtonContainerViewFrame - In the implementation block
@property (assign,nonatomic) float totalTranslationX;                                                                 //@synthesize totalTranslationX=_totalTranslationX - In the implementation block
@property (assign,nonatomic) float contentScreenshotViewBeginningX;                                                   //@synthesize contentScreenshotViewBeginningX=_contentScreenshotViewBeginningX - In the implementation block
@property (assign,nonatomic) char didCompleteExpandAnimation;                                                         //@synthesize didCompleteExpandAnimation=_didCompleteExpandAnimation - In the implementation block
@property (assign,nonatomic) char isShowingActions;                                                                   //@synthesize isShowingActions=_isShowingActions - In the implementation block
@property (assign,nonatomic) float swipeCompletionThresholdX;                                                         //@synthesize swipeCompletionThresholdX=_swipeCompletionThresholdX - In the implementation block
@property (assign,nonatomic) unsigned panState;                                                                       //@synthesize panState=_panState - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                                            //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDragging:(char)arg1 ;
-(id)initWithHostingView:(id)arg1 actionButtons:(id)arg2 actionButtonWidth:(float)arg3 ;
-(void)setDisableSwipeToAction:(char)arg1 ;
-(void)setCellSwipeActionManagerDelegate:(id<IGCellSwipeActionManagerDelegate>)arg1 ;
-(void)showActionView:(char)arg1 ;
-(void)hideActionView:(char)arg1 ;
-(void)peekActionView;
-(id)accessibileElements;
-(void)removeSwipingView;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(float)actionsViewButtonsTotalWidth;
-(float)calculateSwipeCompletionThresholdForHostingViewFrame:(CGRect)arg1 totalButtonWidth:(float)arg2 buttonWidth:(float)arg3 ;
-(void)showActionView:(char)arg1 duration:(double)arg2 ;
-(void)setupSwipingView;
-(UIView *)contentScreenshotView;
-(id)addBasicAnimationToView:(id)arg1 toFrame:(CGRect)arg2 duration:(double)arg3 name:(id)arg4 ;
-(float)actionButtonWidth;
-(UIView *)actionButtonContainerView;
-(CGRect)defaultFrameForButtonAtIndex:(unsigned)arg1 buttons:(id)arg2 buttonWidth:(float)arg3 containerView:(id)arg4 ;
-(id<IGCellSwipeActionManagerDelegate>)cellSwipeActionManagerDelegate;
-(void)setPanState:(unsigned)arg1 ;
-(void)setIsShowingActions:(char)arg1 ;
-(void)hideActionView:(char)arg1 duration:(double)arg2 ;
-(unsigned)panState;
-(id)createAccessibilityCloseButton;
-(float)swipeViewHorizontalDistanceFromActionView;
-(float)swipeCompletionThresholdX;
-(char)disableSwipeToAction;
-(UIView *)hostingView;
-(char)shouldDrag;
-(void)setTotalTranslationX:(float)arg1 ;
-(void)setContentScreenshotViewBeginningX:(float)arg1 ;
-(float)totalTranslationX;
-(float)contentScreenshotViewBeginningX;
-(CGRect)originalActionButtonContainerViewFrame;
-(void)cellDidPanWithVelocity:(CGPoint)arg1 ;
-(void)animateSwipeWithVelocity:(CGPoint)arg1 ;
-(void)setDidCompleteExpandAnimation:(char)arg1 ;
-(unsigned)panStateFromSwipeViewFrame:(CGRect)arg1 ;
-(void)handleActionButtonFramesForPanState:(unsigned)arg1 deltaX:(float)arg2 ;
-(char)didCompleteExpandAnimation;
-(unsigned)swipeCompletionActionForPanDirection:(unsigned)arg1 ;
-(id)addSpringAnimationToView:(id)arg1 toFrame:(CGRect)arg2 name:(id)arg3 ;
-(char)isShowingActions;
-(void)showActionViewWithVelocity:(CGPoint)arg1 ;
-(void)hideActionViewWithVelocity:(CGPoint)arg1 ;
-(void)setSwipeActionsContainerView:(UIView *)arg1 ;
-(UIView *)swipeActionsContainerView;
-(id)imageWithView:(id)arg1 ;
-(id)createActionsButtonViewWithBounds:(CGRect)arg1 ;
-(void)setActionButtonContainerView:(UIView *)arg1 ;
-(void)fillActionsButtonContainerView:(id)arg1 withButtonViews:(id)arg2 buttonWidth:(float)arg3 ;
-(void)setOriginalActionButtonContainerViewFrame:(CGRect)arg1 ;
-(void)setContentScreenshotView:(UIView *)arg1 ;
-(void)handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(void)handleHideActionView:(id)arg1 ;
-(void)setHostingView:(UIView *)arg1 ;
-(void)setActionButtonWidth:(float)arg1 ;
-(void)setShouldDrag:(char)arg1 ;
-(void)setSwipeCompletionThresholdX:(float)arg1 ;
-(NSArray *)accessibleElements;
-(void)dealloc;
-(char)isDragging;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
@end

