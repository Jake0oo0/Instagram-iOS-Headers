
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGDynamicCollectionViewDelegate, IGDynamicCollectionViewDatasource;
@class UIScrollView, UILongPressGestureRecognizer, IGTouchGestureRecognizer, UITapGestureRecognizer, NSMapTable, NSMutableArray, UIView, CADisplayLink, NSString;

@interface IGDynamicCollectionView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	char _autoscrollDisabled;
	char _rightToLeftDirection;
	id<IGDynamicCollectionViewDelegate> _delegate;
	id<IGDynamicCollectionViewDatasource> _dataSource;
	float _itemSpacing;
	UIScrollView* _contentView;
	UILongPressGestureRecognizer* _touchRecognizer;
	IGTouchGestureRecognizer* _velocityRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	NSMapTable* _centerAnimators;
	NSMapTable* _transformAnimators;
	NSMutableArray* _views;
	UIView* _trackingView;
	int _trackingViewIndex;
	int _trackingViewPotentialLandingIndex;
	NSMutableArray* _viewCenters;
	float _maxWidth;
	CADisplayLink* _autoscrollDisplayLink;
	int _autoscrollDirection;
	double _lastAutoscrollTime;
	double _autoscrollStartTime;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) UIScrollView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * touchRecognizer;                       //@synthesize touchRecognizer=_touchRecognizer - In the implementation block
@property (nonatomic,retain) IGTouchGestureRecognizer * velocityRecognizer;                        //@synthesize velocityRecognizer=_velocityRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                               //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) NSMapTable * centerAnimators;                                         //@synthesize centerAnimators=_centerAnimators - In the implementation block
@property (nonatomic,retain) NSMapTable * transformAnimators;                                      //@synthesize transformAnimators=_transformAnimators - In the implementation block
@property (nonatomic,retain) NSMutableArray * views;                                               //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) UIView * trackingView;                                                //@synthesize trackingView=_trackingView - In the implementation block
@property (assign,nonatomic) int trackingViewIndex;                                                //@synthesize trackingViewIndex=_trackingViewIndex - In the implementation block
@property (assign,nonatomic) int trackingViewPotentialLandingIndex;                                //@synthesize trackingViewPotentialLandingIndex=_trackingViewPotentialLandingIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewCenters;                                         //@synthesize viewCenters=_viewCenters - In the implementation block
@property (assign,nonatomic) float maxWidth;                                                       //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) CADisplayLink * autoscrollDisplayLink;                                //@synthesize autoscrollDisplayLink=_autoscrollDisplayLink - In the implementation block
@property (assign,nonatomic) int autoscrollDirection;                                              //@synthesize autoscrollDirection=_autoscrollDirection - In the implementation block
@property (assign,nonatomic) double lastAutoscrollTime;                                            //@synthesize lastAutoscrollTime=_lastAutoscrollTime - In the implementation block
@property (assign,nonatomic) double autoscrollStartTime;                                           //@synthesize autoscrollStartTime=_autoscrollStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<IGDynamicCollectionViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDynamicCollectionViewDatasource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isAutoscrollDisabled,nonatomic) char autoscrollDisabled;                  //@synthesize autoscrollDisabled=_autoscrollDisabled - In the implementation block
@property (assign,nonatomic) float itemSpacing;                                                    //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) char alwaysBounceHorizontal; 
@property (assign,nonatomic) char rightToLeftDirection;                                            //@synthesize rightToLeftDirection=_rightToLeftDirection - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelCenterSprings;
-(void)cancelTransformSprings;
-(id)initWithFrame:(CGRect)arg1 andMaxWidth:(float)arg2 ;
-(void)setTrackingViewPotentialLandingIndex:(int)arg1 ;
-(void)setCenterAnimators:(NSMapTable *)arg1 ;
-(void)setTransformAnimators:(NSMapTable *)arg1 ;
-(void)setViewCenters:(NSMutableArray *)arg1 ;
-(void)setUpSubviews;
-(void)setTouchRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)touchRecognizer;
-(void)setVelocityRecognizer:(IGTouchGestureRecognizer *)arg1 ;
-(IGTouchGestureRecognizer *)velocityRecognizer;
-(void)applyAttachmentsWithAnimation:(char)arg1 ;
-(void)scaleToValue:(float)arg1 withVelocity:(float)arg2 forView:(id)arg3 ;
-(void)applyAttachments;
-(void)applyAttachmentsWithoutAnimation;
-(double)lastAutoscrollTime;
-(double)autoscrollStartTime;
-(int)autoscrollDirection;
-(void)setLastAutoscrollTime:(double)arg1 ;
-(void)updateForTouchRecognizerChange;
-(void)startAutoscroll;
-(void)setAutoscrollDirection:(int)arg1 ;
-(char)isAutoscrollDisabled;
-(CADisplayLink *)autoscrollDisplayLink;
-(void)setAutoscrollStartTime:(double)arg1 ;
-(void)setAutoscrollDisplayLink:(CADisplayLink *)arg1 ;
-(void)setTrackingView:(UIView *)arg1 ;
-(UIView *)trackingView;
-(void)setTrackingViewIndex:(int)arg1 ;
-(int)trackingViewIndex;
-(void)stopAnimationsForView:(id)arg1 ;
-(void)scaleBounceView:(id)arg1 ;
-(void)moveView:(id)arg1 toPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(NSMutableArray *)viewCenters;
-(void)autoscrollLeft;
-(void)autoscrollRight;
-(int)trackingViewPotentialLandingIndex;
-(id)viewForPoint:(CGPoint)arg1 ;
-(NSMapTable *)centerAnimators;
-(NSMapTable *)transformAnimators;
-(char)rightToLeftDirection;
-(void)scrollToLastItemAnimated:(char)arg1 ;
-(void)setAutoscrollDisabled:(char)arg1 ;
-(void)setRightToLeftDirection:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<IGDynamicCollectionViewDatasource>)arg1 ;
-(void)setDelegate:(id<IGDynamicCollectionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGDynamicCollectionViewDatasource>)dataSource;
-(id<IGDynamicCollectionViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)contentSize;
-(UIEdgeInsets)edgeInsets;
-(UIScrollView *)contentView;
-(void)setContentView:(UIScrollView *)arg1 ;
-(char)alwaysBounceHorizontal;
-(void)setAlwaysBounceHorizontal:(char)arg1 ;
-(void)cancelAutoscroll;
-(float)maxWidth;
-(void)setItemSpacing:(float)arg1 ;
-(float)itemSpacing;
-(void)tap:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMaxWidth:(float)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)reloadDataAnimated:(char)arg1 ;
-(void)setViews:(NSMutableArray *)arg1 ;
-(void)autoscroll:(id)arg1 ;
-(NSMutableArray *)views;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)pan:(id)arg1 ;
-(void)touch:(id)arg1 ;
@end

