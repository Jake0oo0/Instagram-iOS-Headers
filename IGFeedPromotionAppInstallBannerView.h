/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGFeedPromotionBannerDelegate;
@class IGFeedPromotionBannerConfiguration, UIButton, UILabel, UIImageView;

@interface IGFeedPromotionAppInstallBannerView : UIView {

	id<IGFeedPromotionBannerDelegate> _delegate;
	IGFeedPromotionBannerConfiguration* _configuration;
	UIButton* _installButton;
	UILabel* _textLabel;
	UIImageView* _imageIcon;

}

@property (assign,nonatomic,__weak) id<IGFeedPromotionBannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedPromotionBannerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIButton * installButton;                                        //@synthesize installButton=_installButton - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageIcon;                                         //@synthesize imageIcon=_imageIcon - In the implementation block
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
-(void)setTextLabel:(UILabel *)arg1 ;
-(IGFeedPromotionBannerConfiguration *)configuration;
@end

