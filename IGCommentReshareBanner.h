
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGCommentReshareBannerDelegate;
@class UILabel, UIButton, UIView;

@interface IGCommentReshareBanner : UIView {

	id<IGCommentReshareBannerDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	UIView* _bannerSeparator;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                          //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * bannerSeparator;                                        //@synthesize bannerSeparator=_bannerSeparator - In the implementation block
-(void)didTapCloseButton;
-(UIView *)bannerSeparator;
-(void)setBannerSeparator:(UIView *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentReshareBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGCommentReshareBannerDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
@end

