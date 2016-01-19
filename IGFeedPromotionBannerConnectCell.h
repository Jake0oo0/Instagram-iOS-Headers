/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedPromotionBannerCell.h>

@class IGSimpleButton;

@interface IGFeedPromotionBannerConnectCell : IGFeedPromotionBannerCell {

	IGSimpleButton* _actionButton;
	CGSize _titleSize;
	CGSize _subtitleSize;

}

@property (nonatomic,retain) IGSimpleButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) CGSize titleSize;                           //@synthesize titleSize=_titleSize - In the implementation block
@property (assign,nonatomic) CGSize subtitleSize;                        //@synthesize subtitleSize=_subtitleSize - In the implementation block
-(void)configureCellWithConfiguration:(id)arg1 ;
-(CGSize)titleSize;
-(void)setTitleSize:(CGSize)arg1 ;
-(CGSize)subtitleSize;
-(void)setSubtitleSize:(CGSize)arg1 ;
-(IGSimpleButton *)actionButton;
-(void)actionButtonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(float)currentHeight;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setActionButton:(IGSimpleButton *)arg1 ;
@end

