
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGEventViewerFeedLayoutDelegate.h>

@protocol IGEventViewerFeedViewControllerDelegate;
@class UICollectionView, IGEventViewerFeedLayout, IGEventViewerCollectionViewDataSource, IGEventViewerCollectionViewCellAnimator, NSIndexPath, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IGEventViewerFeedLayoutDelegate> {

	UICollectionView* _collectionView;
	IGEventViewerFeedLayout* _feedLayout;
	id<IGEventViewerFeedViewControllerDelegate> _delegate;
	IGEventViewerCollectionViewDataSource* _dataSource;
	IGEventViewerCollectionViewCellAnimator* _cellAnimator;
	NSIndexPath* _centeredIndexPathWhenBeginDragging;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedLayout * feedLayout;                                    //@synthesize feedLayout=_feedLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentlyCenteredIndexPath; 
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> currentlyCenteredCell; 
@property (nonatomic,readonly) IGEventViewerCollectionViewDataSource * dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewCellAnimator * cellAnimator;                         //@synthesize cellAnimator=_cellAnimator - In the implementation block
@property (nonatomic,retain) NSIndexPath * centeredIndexPathWhenBeginDragging;                                 //@synthesize centeredIndexPathWhenBeginDragging=_centeredIndexPathWhenBeginDragging - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveTapGesture:(id)arg1 ;
-(CGSize)eventViewerFeedLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)eventViewerFeedLayoutDidReachMaximumContentOffset:(id)arg1 ;
-(void)didReceiveScrollViewPanGesture:(id)arg1 ;
-(IGEventViewerCollectionViewCellAnimator *)cellAnimator;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCenteredIndexPathWhenBeginDragging:(NSIndexPath *)arg1 ;
-(void)willScrollToContentOffset:(CGPoint)arg1 ;
-(NSIndexPath *)centeredIndexPathWhenBeginDragging;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)currentlyCenteredCell;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)adjustContentOffsetAfterLoadMoreForIndexPath:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerFeedViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGEventViewerCollectionViewDataSource *)dataSource;
-(id<IGEventViewerFeedViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGEventViewerFeedLayout *)feedLayout;
-(void)setupSubviews;
-(id)initWithDataSource:(id)arg1 ;
@end

