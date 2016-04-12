
#import <UIKit/UITableViewCell.h>

@class IGListCollectionView;

@interface IGHScrollAYMFCollectionTableCell : UITableViewCell {

	IGListCollectionView* _collectionView;

}

@property (nonatomic,retain) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)configureWithCollectionView:(id)arg1 ;
-(void)layoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
@end

