
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTableViewCell.h>

@class IGAdViewModel, UILabel, IGImageView;

@interface IGAdsManagerAdPaymentMethodCell : IGTableViewCell {

	IGAdViewModel* _viewModel;
	UILabel* _title;
	UILabel* _subtitle;
	IGImageView* _thumbnailView;

}

@property (nonatomic,retain) IGAdViewModel * viewModel;                  //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UILabel * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) IGImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(void)setUpTitle;
-(void)setUpSubtitle;
-(void)setUpThumbnailView;
-(float)topBottomMarginWithTitleSize:(CGSize)arg1 subtitleSize:(CGSize)arg2 ;
-(CGRect)layoutForTitleWithThumbnailRect:(CGRect)arg1 topMargin:(float)arg2 ;
-(CGRect)layoutForSubtitleWithThumbnailRect:(CGRect)arg1 bottomMargin:(float)arg2 ;
-(CGRect)layoutForThumbnail;
-(void)setUpViewHierarchy;
-(IGAdViewModel *)viewModel;
-(void)setViewModel:(IGAdViewModel *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)title;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UILabel *)subtitle;
-(IGImageView *)thumbnailView;
@end
