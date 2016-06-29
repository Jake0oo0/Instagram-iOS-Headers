
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGBannerView, IGFollowPeopleMegaphoneConfiguration, UITableView, UIView;

@interface IGFeedFollowPeopleView : UIView {

	IGBannerView* _bannerView;
	IGFollowPeopleMegaphoneConfiguration* _megaphoneConfig;
	IGBannerView* _footerBannerView;
	UITableView* _accountListView;
	UIView* _bottomLineView;
	UIView* _accountListBottomLineView;
	UIEdgeInsets _accountListViewInsets;

}

@property (nonatomic,retain) IGBannerView * bannerView;                                             //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UITableView * accountListView;                                         //@synthesize accountListView=_accountListView - In the implementation block
@property (nonatomic,retain) UIView * bottomLineView;                                               //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (nonatomic,retain) UIView * accountListBottomLineView;                                    //@synthesize accountListBottomLineView=_accountListBottomLineView - In the implementation block
@property (nonatomic,retain) IGBannerView * footerBannerView;                                       //@synthesize footerBannerView=_footerBannerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accountListViewInsets;                                    //@synthesize accountListViewInsets=_accountListViewInsets - In the implementation block
@property (nonatomic,readonly) IGFollowPeopleMegaphoneConfiguration * megaphoneConfig;              //@synthesize megaphoneConfig=_megaphoneConfig - In the implementation block
-(UITableView *)accountListView;
-(id)initWithFrame:(CGRect)arg1 megaphoneConfig:(id)arg2 ;
-(IGFollowPeopleMegaphoneConfiguration *)megaphoneConfig;
-(IGBannerView *)footerBannerView;
-(float)cellHeightForAccountListViewHeight:(float)arg1 ;
-(void)setAccountListViewInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomLineView:(UIView *)arg1 ;
-(UIEdgeInsets)accountListViewInsets;
-(UIView *)bottomLineView;
-(void)setFooterBannerView:(IGBannerView *)arg1 ;
-(void)setAccountListView:(UITableView *)arg1 ;
-(UIView *)accountListBottomLineView;
-(void)setAccountListBottomLineView:(UIView *)arg1 ;
-(IGBannerView *)bannerView;
-(void)layoutSubviews;
-(void)setBannerView:(IGBannerView *)arg1 ;
@end

