/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGCommentReshareBannerDelegate;
@class UILabel, UIButton;

@interface IGCommentReshareBanner : UIView {

	id<IGCommentReshareBannerDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _closeButton;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                          //@synthesize closeButton=_closeButton - In the implementation block
-(void)didTapCloseButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentReshareBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGCommentReshareBannerDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
@end

