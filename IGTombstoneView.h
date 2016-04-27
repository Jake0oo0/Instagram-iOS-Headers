
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface IGTombstoneView : UIView {

	UIButton* _dismissButton;
	UIButton* _showButton;
	int _tombstoneReportType;
	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _footerViewSeperator;
	float _kTombstoneFooterSeperatorWidth;

}

@property (nonatomic,readonly) UIButton * dismissButton;                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIButton * showButton;                             //@synthesize showButton=_showButton - In the implementation block
@property (assign,nonatomic) int tombstoneReportType;                             //@synthesize tombstoneReportType=_tombstoneReportType - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkImageView;                  //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIView * footerViewSeperator;                      //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (nonatomic,readonly) float kTombstoneFooterSeperatorWidth;              //@synthesize kTombstoneFooterSeperatorWidth=_kTombstoneFooterSeperatorWidth - In the implementation block
-(void)configureForTombstoneReportType:(int)arg1 ;
-(id)createTitleLabel;
-(id)initWithFrame:(CGRect)arg1 tombstoneReportType:(int)arg2 ;
-(id)createCheckmarkImageView;
-(id)createMessageLabel;
-(void)setTombstoneReportType:(int)arg1 ;
-(id)createFooterViewSeperator;
-(id)createShowButton;
-(id)createDismissButton;
-(int)tombstoneReportType;
-(float)kTombstoneFooterSeperatorWidth;
-(UIView *)footerViewSeperator;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(UIImageView *)checkmarkImageView;
-(UIButton *)dismissButton;
-(UIButton *)showButton;
@end

