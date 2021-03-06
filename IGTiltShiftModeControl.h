
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, NSString;

@interface IGTiltShiftModeControl : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _tiltShiftCollectionView;

}

@property (nonatomic,retain) UICollectionView * tiltShiftCollectionView;              //@synthesize tiltShiftCollectionView=_tiltShiftCollectionView - In the implementation block
@property (assign,nonatomic) unsigned value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UICollectionView *)tiltShiftCollectionView;
-(void)setTiltShiftCollectionView:(UICollectionView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

