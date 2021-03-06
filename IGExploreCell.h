
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGThumbnailsGridViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGExploreCellDelegate;
@class IGThumbnailsGridView, IGExploreViewModel, UILabel, IGProfilePictureImageView, UIView, IGExploreEmptyView, UIImageView, IGCarouselView, NSString;

@interface IGExploreCell : UICollectionViewCell <IGThumbnailsGridViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	id<IGExploreCellDelegate> _delegate;
	IGThumbnailsGridView* _thumbnailsGridView;
	IGExploreViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGProfilePictureImageView* _imageView;
	UILabel* _bylineLabel;
	UIView* _actionView;
	IGExploreEmptyView* _emptyView;
	unsigned _action;
	UIImageView* _verifiedImageView;
	IGCarouselView* _thumbnailsCarouselView;

}

@property (nonatomic,copy) IGExploreViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                  //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) UIView * actionView;                                    //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) IGExploreEmptyView * emptyView;                         //@synthesize emptyView=_emptyView - In the implementation block
@property (assign,nonatomic) unsigned action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                        //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
@property (nonatomic,retain) IGCarouselView * thumbnailsCarouselView;                //@synthesize thumbnailsCarouselView=_thumbnailsCarouselView - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGThumbnailsGridView * thumbnailsGridView;              //@synthesize thumbnailsGridView=_thumbnailsGridView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightWithConstrainedWidth:(float)arg1 exploreViewModel:(id)arg2 ;
+(float)avatarHeight;
+(id)bylineFont;
+(IGCarouselMetrics)thumbnailsCarouselMetricsWithWidth:(float)arg1 ;
+(float)leftRightPadding;
-(void)setExploreViewModel:(id)arg1 ;
-(IGThumbnailsGridView *)thumbnailsGridView;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(IGExploreEmptyView *)emptyView;
-(id)setupThumbnailsCarouselView;
-(IGCarouselView *)thumbnailsCarouselView;
-(void)onFollowButton:(id)arg1 ;
-(void)onFollowingButton:(id)arg1 ;
-(void)onDismissButton:(id)arg1 ;
-(void)setupThumbnailsViewFrameWithOrigin:(CGPoint)arg1 ;
-(void)setThumbnailsGridView:(IGThumbnailsGridView *)arg1 ;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(void)setEmptyView:(IGExploreEmptyView *)arg1 ;
-(void)setThumbnailsCarouselView:(IGCarouselView *)arg1 ;
-(void)didTapThumbnailAtIndex:(unsigned)arg1 ;
-(void)didFinishLoadingThumbnails;
-(UILabel *)bylineLabel;
-(IGExploreViewModel *)viewModel;
-(void)setViewModel:(IGExploreViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGExploreCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGExploreCellDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned)action;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(void)setAction:(unsigned)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(IGProfilePictureImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)accessibilityHint;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)actionView;
-(void)setImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setActionView:(UIView *)arg1 ;
-(UIImageView *)verifiedImageView;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
@end

