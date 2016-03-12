
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGChannelOverlayView : UIView {

	UIImageView* _playIcon;
	UIImageView* _playIconContainer;
	UILabel* _headerLabel;
	UILabel* _titleLabel;
	UIImageView* _backgroundView;

}

@property (nonatomic,readonly) UIImageView * playIcon;                       //@synthesize playIcon=_playIcon - In the implementation block
@property (nonatomic,readonly) UIImageView * playIconContainer;              //@synthesize playIconContainer=_playIconContainer - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                        //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setupBackgroundView;
-(id)titleAttributesUseSmallFont:(char)arg1 ;
-(id)textKerning;
-(void)layoutPlayIcon;
-(void)layoutTitle;
-(void)layoutHeader;
-(void)layoutBackgroundView;
-(float)maxWidthForLabels;
-(void)setupPlayIcon;
-(void)setupHeaderLabel;
-(void)setupTitleLabel;
-(UIImageView *)playIconContainer;
-(UIImageView *)playIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)backgroundView;
-(UILabel *)headerLabel;
-(void)setupSubviews;
-(void)setHeader:(id)arg1 ;
-(id)headerAttributes;
@end

