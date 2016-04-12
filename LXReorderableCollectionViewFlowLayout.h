/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:55 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView, NSIndexPath, CADisplayLink, NSString;

@interface LXReorderableCollectionViewFlowLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	char _selectedItemDeletePossible;
	float _scrollingSpeed;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UILongPressGestureRecognizer* _rearrangeHotspotGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIView* _draggingContainerView;
	float _returnToCollectionAnimationDuration;
	NSIndexPath* _selectedItemIndexPath;
	UIView* _currentView;
	CADisplayLink* _displayLink;
	CGPoint _currentViewPanOrigin;
	UIEdgeInsets _scrollingTriggerEdgeInsets;

}

@property (assign,nonatomic) float scrollingSpeed;                                                            //@synthesize scrollingSpeed=_scrollingSpeed - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollingTriggerEdgeInsets;                                         //@synthesize scrollingTriggerEdgeInsets=_scrollingTriggerEdgeInsets - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;                     //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * rearrangeHotspotGestureRecognizer;              //@synthesize rearrangeHotspotGestureRecognizer=_rearrangeHotspotGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                 //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIView * draggingContainerView;                                           //@synthesize draggingContainerView=_draggingContainerView - In the implementation block
@property (assign,nonatomic) float returnToCollectionAnimationDuration;                                       //@synthesize returnToCollectionAnimationDuration=_returnToCollectionAnimationDuration - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedItemIndexPath;                                             //@synthesize selectedItemIndexPath=_selectedItemIndexPath - In the implementation block
@property (assign,nonatomic) char selectedItemDeletePossible;                                                 //@synthesize selectedItemDeletePossible=_selectedItemDeletePossible - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                                            //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGPoint currentViewPanOrigin;                                                    //@synthesize currentViewPanOrigin=_currentViewPanOrigin - In the implementation block
@property (nonatomic,readonly) CGPoint currentViewCenterInCollectionView; 
@property (nonatomic,readonly) id<LXReorderableCollectionViewDataSource> dataSource; 
@property (nonatomic,readonly) id<LXReorderableCollectionViewDelegateFlowLayout> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollingSpeed:(float)arg1 ;
-(void)setDraggingContainerView:(UIView *)arg1 ;
-(void)setReturnToCollectionAnimationDuration:(float)arg1 ;
-(CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withDesiredSize:(CGSize)arg3 ;
-(void)handleApplicationWillResignActive:(id)arg1 ;
-(void)invalidatesScrollTimer;
-(char)selectedItemDeletePossible;
-(CGPoint)currentViewCenterInCollectionView;
-(void)setSelectedItemDeletePossible:(char)arg1 ;
-(void)setSelectedItemIndexPath:(NSIndexPath *)arg1 ;
-(void)handleScroll:(id)arg1 ;
-(float)scrollingSpeed;
-(void)invalidateLayoutIfNecessary;
-(UIView *)draggingContainerView;
-(void)setCurrentView:(UIView *)arg1 ;
-(float)returnToCollectionAnimationDuration;
-(void)setCurrentViewPanOrigin:(CGPoint)arg1 ;
-(CGPoint)currentViewPanOrigin;
-(UIEdgeInsets)scrollingTriggerEdgeInsets;
-(void)setupScrollTimerInDirection:(int)arg1 ;
-(UILongPressGestureRecognizer *)rearrangeHotspotGestureRecognizer;
-(void)setUpGestureRecognizersOnCollectionView;
-(void)setScrollingTriggerEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)setDefaults;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<LXReorderableCollectionViewDataSource>)dataSource;
-(id<LXReorderableCollectionViewDelegateFlowLayout>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(NSIndexPath *)selectedItemIndexPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setupCollectionView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)currentView;
@end

