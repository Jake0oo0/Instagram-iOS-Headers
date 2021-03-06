
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGPhotoCellDelegate.h>
#import <Instagram/IGVideoCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGPageMediaViewDelegate, IGFeedItemZoomControllerZoomingDelegate;
@class NSArray, IGFeedItemPageCellState, IGPageMediaVideoViewLoggerProvider, UICollectionView, IGBulkMediaRequestManager, IGItemVisibilityTracker, IGImagePreparer, IGFeedItemVideoView, NSString;

@interface IGPageMediaView : UIView <IGItemVisibilityTrackerDelegate, IGPhotoCellDelegate, IGVideoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	char _onScreen;
	NSArray* _items;
	IGFeedItemPageCellState* _pageCellState;
	float _percentVisible;
	id<IGPageMediaViewDelegate> _delegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	IGPageMediaVideoViewLoggerProvider* _videoLoggerProvider;
	UICollectionView* _collectionView;
	IGBulkMediaRequestManager* _requestManager;
	IGItemVisibilityTracker* _itemVisibilityTracker;
	IGImagePreparer* _imagePreparer;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                                      //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * itemVisibilityTracker;                                 //@synthesize itemVisibilityTracker=_itemVisibilityTracker - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) char onScreen;                                                 //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) IGImagePreparer * imagePreparer;                                                 //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                                         //@synthesize pageCellState=_pageCellState - In the implementation block
@property (assign,nonatomic) float percentVisible;                                                            //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGPageMediaViewDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * currentVideoView; 
@property (nonatomic,retain) IGPageMediaVideoViewLoggerProvider * videoLoggerProvider;                        //@synthesize videoLoggerProvider=_videoLoggerProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(IGBulkMediaRequestManager *)requestManager;
-(float)percentVisible;
-(void)setPercentVisible:(float)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(IGFeedItemPageCellState *)pageCellState;
-(void)setVideoLoggerProvider:(IGPageMediaVideoViewLoggerProvider *)arg1 ;
-(void)photoCellDidSingleTap:(id)arg1 ;
-(void)photoCellDidDoubleTapToLike:(id)arg1 ;
-(void)photoCellImageDidLoadImage:(id)arg1 ;
-(void)videoCellDidLoadImage:(id)arg1 ;
-(void)videoCell:(id)arg1 didToggleAudio:(char)arg2 ;
-(void)videoCellDidSingleTap:(id)arg1 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(void)setOnScreen:(char)arg1 ;
-(IGItemVisibilityTracker *)itemVisibilityTracker;
-(void)updateItemVisibility;
-(void)prefetchMedia;
-(id)photoCellForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)decodeAdjacentPhotosForItemAtIndex:(int)arg1 ;
-(id)videoCellForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)handleIndexingForDidScroll:(id)arg1 ;
-(float)percentVisibleForCell:(id)arg1 ;
-(IGPageMediaVideoViewLoggerProvider *)videoLoggerProvider;
-(void)videoCellDidPlayToEnd:(id)arg1 ;
-(void)updateCollectionViewCellTransform:(CGAffineTransform)arg1 ;
-(void)setItemVisibilityTracker:(IGItemVisibilityTracker *)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(void)setImagePreparer:(IGImagePreparer *)arg1 ;
-(IGFeedItemVideoView *)currentVideoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPageMediaViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGPageMediaViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(char)isOnScreen;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

