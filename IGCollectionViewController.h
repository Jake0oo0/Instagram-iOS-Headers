/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGCollectionViewControllerDelegate, IGCollectionViewControllerDataSource, IGCollectionViewLayoutAdditions;
@class UICollectionViewLayout, NSArray, UIView, IGInternalCollectionView, IGPullToRefreshControl, NSDate, IGCollectionViewLayout, NSString;

@interface IGCollectionViewController : IGViewController <UICollectionViewDataSource> {

	char _usesIgCollectionViewLayout;
	char _hasNotifiedForEndOfContentReached;
	char _showsPullToRefreshControl;
	id<IGCollectionViewControllerDelegate> _delegate;
	id<IGCollectionViewControllerDataSource> _dataSource;
	UICollectionViewLayout*<IGCollectionViewLayoutAdditions> _collectionViewLayout;
	NSArray* _objects;
	id _context;
	float _supplementaryHeaderViewHeight;
	float _supplementaryFooterViewHeight;
	float _headerAdjustmentAmount;
	UIView* _backgroundSupplementaryHeaderView;
	UIView* _backgroundSupplementaryFooterView;
	NSArray* _currentLoadingObjects;
	id _currentLoadingContext;
	IGInternalCollectionView* _collectionView;
	IGPullToRefreshControl* _pullToRefreshControl;
	float _pullToRefreshInset;
	NSDate* _pullToRefreshStartTime;
	int _reloadingCount;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDataSource> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<IGCollectionViewLayoutAdditions> collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) NSArray * objects;                                                                          //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) id context;                                                                                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                                        //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;                                                        //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                                                               //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryHeaderView;                                                 //@synthesize backgroundSupplementaryHeaderView=_backgroundSupplementaryHeaderView - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryFooterView;                                                 //@synthesize backgroundSupplementaryFooterView=_backgroundSupplementaryFooterView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) char isReloadingContent; 
@property (nonatomic,retain) NSArray * currentLoadingObjects;                                                            //@synthesize currentLoadingObjects=_currentLoadingObjects - In the implementation block
@property (nonatomic,retain) id currentLoadingContext;                                                                   //@synthesize currentLoadingContext=_currentLoadingContext - In the implementation block
@property (nonatomic,readonly) char usesIgCollectionViewLayout;                                                          //@synthesize usesIgCollectionViewLayout=_usesIgCollectionViewLayout - In the implementation block
@property (nonatomic,retain) IGInternalCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGPullToRefreshControl * pullToRefreshControl;                                              //@synthesize pullToRefreshControl=_pullToRefreshControl - In the implementation block
@property (assign,nonatomic) char hasNotifiedForEndOfContentReached;                                                     //@synthesize hasNotifiedForEndOfContentReached=_hasNotifiedForEndOfContentReached - In the implementation block
@property (assign,nonatomic) float pullToRefreshInset;                                                                   //@synthesize pullToRefreshInset=_pullToRefreshInset - In the implementation block
@property (assign,nonatomic) char showsPullToRefreshControl;                                                             //@synthesize showsPullToRefreshControl=_showsPullToRefreshControl - In the implementation block
@property (nonatomic,retain) NSDate * pullToRefreshStartTime;                                                            //@synthesize pullToRefreshStartTime=_pullToRefreshStartTime - In the implementation block
@property (assign,nonatomic) int reloadingCount;                                                                         //@synthesize reloadingCount=_reloadingCount - In the implementation block
@property (nonatomic,readonly) IGCollectionViewLayout * igCollectionViewLayout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)headerAdjustmentAmount;
-(void)registerClasses;
-(void)reloadWithCurrentObjects;
-(id)initWithLayout:(id)arg1 showsPullToRefresh:(char)arg2 ;
-(id)currentReloadContext;
-(void)finishRefreshFromPullToRefreshControl;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)isReloadingContent;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(UIView *)backgroundSupplementaryHeaderView;
-(UIView *)backgroundSupplementaryFooterView;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(char)usesIgCollectionViewLayout;
-(void)configureCollectionViewDataSource:(id)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(char)arg3 forceAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 ;
-(NSArray *)currentLoadingObjects;
-(id)currentLoadingContext;
-(float)supplementaryFooterViewHeight;
-(void)fakePullToRefreshWithDuration:(double)arg1 animated:(char)arg2 ;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(void)didChangeHeaderAdjustmentAmount:(float)arg1 ;
-(id)setupCollectionViewWithLayout:(id)arg1 ;
-(void)onScrollViewPan:(id)arg1 ;
-(void)applyContentInset;
-(char)showsPullToRefreshControl;
-(void)setPullToRefreshControl:(IGPullToRefreshControl *)arg1 ;
-(IGPullToRefreshControl *)pullToRefreshControl;
-(void)onPullToRefresh:(id)arg1 ;
-(void)updatePullToRefreshControl;
-(void)notifyChangeFromScrollPosition:(CGPoint)arg1 toScrollPosition:(CGPoint)arg2 ;
-(void)layoutFooterView;
-(float)pullToRefreshInset;
-(IGCollectionViewLayout *)igCollectionViewLayout;
-(void)setCurrentLoadingContext:(id)arg1 ;
-(void)setCurrentLoadingObjects:(NSArray *)arg1 ;
-(int)reloadingCount;
-(void)setReloadingCount:(int)arg1 ;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 animated:(char)arg2 ;
-(void)setPullToRefreshInset:(float)arg1 ;
-(void)setPullToRefreshStartTime:(NSDate *)arg1 ;
-(NSDate *)pullToRefreshStartTime;
-(void)scrollToTopOfContentInsetAnimated:(char)arg1 ;
-(void)setBackgroundSupplementaryHeaderView:(UIView *)arg1 ;
-(void)setBackgroundSupplementaryFooterView:(UIView *)arg1 ;
-(char)hasNotifiedForEndOfContentReached;
-(void)setHasNotifiedForEndOfContentReached:(char)arg1 ;
-(void)setShowsPullToRefreshControl:(char)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(NSArray *)objects;
-(void)setDataSource:(id<IGCollectionViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<IGCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCollectionViewControllerDataSource>)dataSource;
-(id<IGCollectionViewControllerDelegate>)delegate;
-(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)contentInset;
-(id)context;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(IGInternalCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContext:(id)arg1 ;
-(void)setCollectionView:(IGInternalCollectionView *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
@end

