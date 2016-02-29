/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPhotoCellDelegate.h>
#import <Instagram/IGVideoCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFeedVideoCell.h>

@protocol IGFeedItemAlbumCell2Delegate, IGFeedVideoCellPlayerDelegate;
@class IGFeedItem, UICollectionView, IGBulkMediaRequestManager, IGImagePreparer, NSString;

@interface IGFeedItemAlbumCell2 : UICollectionViewCell <IGPhotoCellDelegate, IGVideoCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, IGFeedVideoCell> {

	float _percentVisible;
	IGFeedItem* _feedItem;
	id<IGFeedItemAlbumCell2Delegate> _delegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	UICollectionView* _collectionView;
	IGBulkMediaRequestManager* _requestManager;
	IGImagePreparer* _imagePreparer;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemAlbumCell2Delegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;              //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGBulkMediaRequestManager * requestManager;                         //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                                    //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                               //@synthesize percentVisible=_percentVisible - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(IGBulkMediaRequestManager *)requestManager;
-(void)reloadWithFeedItem:(id)arg1 ;
-(float)maxHeightForAlbum:(id)arg1 ;
-(void)prefetchMedia;
-(void)preloadAdjacentCellsForIndex:(int)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(int)pageForOffset:(float)arg1 ;
-(void)handleDidEndScrolling:(id)arg1 ;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(void)photoCellDidInitialSingleTap:(id)arg1 ;
-(void)photoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)photoCellDidDoubleTapToLike:(id)arg1 ;
-(void)photoCellImageDidLoadImage:(id)arg1 ;
-(void)videoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)videoCellDidLoadImage:(id)arg1 ;
-(void)videoCellDidPlayToEnd:(id)arg1 ;
-(void)feedVideoCellDidDoubleTap:(id)arg1 ;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(id)contentViewForHeartAnimation;
-(id)videoView;
-(void)scrollToPage:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemAlbumCell2Delegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGFeedItemAlbumCell2Delegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setPage:(int)arg1 ;
@end

