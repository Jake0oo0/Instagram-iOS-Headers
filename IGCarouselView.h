
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGExploreSectionTextHeader, UICollectionView, CALayer;

@interface IGCarouselView : UIView {

	IGExploreSectionTextHeader* _headerView;
	UICollectionView* _collectionView;
	CALayer* _separatorLayer;
	CGPoint _startOffset;
	IGCarouselMetrics _metrics;

}

@property (nonatomic,retain) IGExploreSectionTextHeader * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                  //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) IGCarouselMetrics metrics;                            //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) CALayer * separatorLayer;                             //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (assign,nonatomic) CGPoint startOffset;                                  //@synthesize startOffset=_startOffset - In the implementation block
+(IGCarouselMetrics)metricsForWidth:(float)arg1 ;
+(float)heightForCarouselMetrics:(IGCarouselMetrics)arg1 ;
+(IGCarouselMetrics)defaultMetrics;
-(CALayer *)separatorLayer;
-(id)layoutForMetrics:(IGCarouselMetrics)arg1 ;
-(void)setSeparatorLayer:(CALayer *)arg1 ;
-(void)prepareForDragging;
-(CGPoint)targetContentOffsetForVelocity:(CGPoint)arg1 targetContentOffset:(CGPoint)arg2 ;
-(CGRect)separatorFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)startOffset;
-(UICollectionView *)collectionView;
-(IGCarouselMetrics)metrics;
-(IGExploreSectionTextHeader *)headerView;
-(void)setHeaderView:(IGExploreSectionTextHeader *)arg1 ;
-(void)setStartOffset:(CGPoint)arg1 ;
-(void)setMetrics:(IGCarouselMetrics)arg1 ;
@end

