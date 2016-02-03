/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:17 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMediaThumbnailView, UILabel, CALayer;

@interface IGCarouselCell : UICollectionViewCell {

	char _isLabelPaddingAdded;
	IGMediaThumbnailView* _imageView;
	UILabel* _titleLabel;
	CALayer* _touchDownLayer;

}

@property (nonatomic,retain) IGMediaThumbnailView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char isLabelPaddingAdded;                      //@synthesize isLabelPaddingAdded=_isLabelPaddingAdded - In the implementation block
@property (nonatomic,retain) CALayer * touchDownLayer;                      //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
-(void)configureWithViewModel:(id)arg1 ;
-(void)setVideoIconVisible:(char)arg1 ;
-(void)setImageBorderVisible:(char)arg1 ;
-(CALayer *)touchDownLayer;
-(void)setIsLabelPaddingAdded:(char)arg1 ;
-(char)isLabelPaddingAdded;
-(void)setTouchDownLayer:(CALayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(IGMediaThumbnailView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(IGMediaThumbnailView *)arg1 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
@end

