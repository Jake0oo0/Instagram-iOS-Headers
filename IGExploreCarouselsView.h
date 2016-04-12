/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGExploreCarouselsDataSource, IGExploreCarouselsDelegate;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGExploreCarouselsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<IGExploreCarouselsDataSource> _dataSource;
	id<IGExploreCarouselsDelegate> _delegate;
	NSMutableArray* _carouselViews;
	NSMutableDictionary* _imageIndicesForCell;

}

@property (assign,nonatomic,__weak) id<IGExploreCarouselsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreCarouselsDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * carouselViews;                                  //@synthesize carouselViews=_carouselViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageIndicesForCell;                       //@synthesize imageIndicesForCell=_imageIndicesForCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadIndexesOfCarousel:(id)arg1 ;
-(NSMutableArray *)carouselViews;
-(id)carouselViewAtIndex:(unsigned)arg1 ;
-(void)onCarouselButton:(id)arg1 ;
-(unsigned)indexOfCarouselButton:(id)arg1 ;
-(unsigned)indexOfCollectionView:(id)arg1 ;
-(NSMutableDictionary *)imageIndicesForCell;
-(id)carouselViewForScrollView:(id)arg1 ;
-(void)setCarouselViews:(NSMutableArray *)arg1 ;
-(void)setImageIndicesForCell:(NSMutableDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<IGExploreCarouselsDataSource>)arg1 ;
-(void)setDelegate:(id<IGExploreCarouselsDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExploreCarouselsDataSource>)dataSource;
-(id<IGExploreCarouselsDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didMoveToSuperview;
@end

