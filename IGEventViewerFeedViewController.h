/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGEventViewerFeedViewControllerDelegate;
@class UICollectionView, IGEventViewerFeedFlowLayout, IGEventViewerCollectionViewDataSource, IGEventViewerCollectionViewCellAnimator, NSIndexPath, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	id<IGEventViewerFeedViewControllerDelegate> _delegate;
	IGEventViewerFeedFlowLayout* _flowLayout;
	IGEventViewerCollectionViewDataSource* _dataSource;
	IGEventViewerCollectionViewCellAnimator* _cellAnimator;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentlyCenteredIndexPath; 
@property (nonatomic,__weak,readonly) IGEventViewerFeedFlowLayout * flowLayout;                        //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewDataSource * dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewCellAnimator * cellAnimator;                 //@synthesize cellAnimator=_cellAnimator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)setupSubviews;
-(IGEventViewerCollectionViewCellAnimator *)cellAnimator;
-(void)setDelegate:(id<IGEventViewerFeedViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(IGEventViewerCollectionViewDataSource *)dataSource;
-(id<IGEventViewerFeedViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(IGEventViewerFeedFlowLayout *)flowLayout;
-(id)initWithDataSource:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
@end
