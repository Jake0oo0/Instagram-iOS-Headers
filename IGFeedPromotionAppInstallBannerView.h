/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGFeedPromotionBannerDelegate;
@class IGFeedPromotionBannerConfiguration, UIButton, UILabel, UIImageView, UIView;

@interface IGFeedPromotionAppInstallBannerView : UIView {

	id<IGFeedPromotionBannerDelegate> _delegate;
	IGFeedPromotionBannerConfiguration* _configuration;
	UIButton* _installButton;
	UILabel* _textLabel;
	UIImageView* _imageIcon;
	UIView* _lineView;

}

@property (assign,nonatomic,__weak) id<IGFeedPromotionBannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedPromotionBannerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIButton * installButton;                                        //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageIcon;                                         //@synthesize imageIcon=_imageIcon - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                               //@synthesize lineView=_lineView - In the implementation block
-(void)setLineView:(UIView *)arg1 ;
-(UIButton *)installButton;
-(UIImageView *)imageIcon;
-(void)onInstallButtonTapped:(id)arg1 ;
-(id)initWithFeedPromotionBannerConfiguration:(id)arg1 ;
-(void)onDismissButtonTapped:(id)arg1 ;
-(void)setInstallButton:(UIButton *)arg1 ;
-(void)setImageIcon:(UIImageView *)arg1 ;
-(void)setDelegate:(id<IGFeedPromotionBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedPromotionBannerDelegate>)delegate;
-(UILabel *)textLabel;
-(void)setConfiguration:(IGFeedPromotionBannerConfiguration *)arg1 ;
-(IGFeedPromotionBannerConfiguration *)configuration;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UIView *)lineView;
@end

