/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:17 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSArray, UIImageView;

@interface IGExplorePeopleBannerView : UIControl {

	char _profileImagesHidden;
	UILabel* _titleLabel;
	NSArray* _imageViews;
	NSArray* _imageBorderLayers;
	UIImageView* _discloseImageView;
	UILabel* _bylineLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;                                               //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSArray * imageBorderLayers;                                        //@synthesize imageBorderLayers=_imageBorderLayers - In the implementation block
@property (nonatomic,retain) UIImageView * discloseImageView;                                    //@synthesize discloseImageView=_discloseImageView - In the implementation block
@property (assign,getter=isProfileImagesHidden,nonatomic) char profileImagesHidden;              //@synthesize profileImagesHidden=_profileImagesHidden - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                              //@synthesize bylineLabel=_bylineLabel - In the implementation block
-(void)setBylineText:(id)arg1 ;
-(void)setImageURLs:(id)arg1 ;
-(void)setProfileImagesHidden:(char)arg1 ;
-(UILabel *)bylineLabel;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(NSArray *)imageBorderLayers;
-(UIImageView *)discloseImageView;
-(void)setImageBorderLayers:(NSArray *)arg1 ;
-(void)setDiscloseImageView:(UIImageView *)arg1 ;
-(char)isProfileImagesHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
@end

