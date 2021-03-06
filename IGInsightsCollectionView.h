
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGInsightsCollectionViewDelegate;
@class UICollectionView, IGInsightsHeaderView, NSArray, NSString;

@interface IGInsightsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	id<IGInsightsCollectionViewDelegate> _delegate;
	UICollectionView* _collectionView;
	IGInsightsHeaderView* _headerView;
	NSArray* _mediaBundles;
	int _itemCount;
	float _cellWidth;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                              //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (assign,nonatomic) int itemCount;                                                     //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) float cellWidth;                                                   //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaBundles:(NSArray *)arg1 ;
-(NSArray *)mediaBundles;
-(void)updateMediaBundle:(id)arg1 ;
-(id)_feedItemAtIndex:(int)arg1 ;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 mediaItemCount:(int)arg3 ;
-(void)setCellWidth:(float)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(int)itemCount;
-(void)setDelegate:(id<IGInsightsCollectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsCollectionViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(float)cellWidth;
-(void)setItemCount:(int)arg1 ;
@end

