/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView, UILabel, UIImageView, IGShareThumbnailView, NSArray;

@interface IGDirectGenericShareContentCell : IGDirectContentCell {

	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _sideImageView;
	UIImageView* _chevronView;
	IGShareThumbnailView* _thumbnailViews;
	NSArray* _previewMediaPhotos;

}

@property (nonatomic,retain) IGCoreTextView * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                        //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                          //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) NSArray * previewMediaPhotos;                       //@synthesize previewMediaPhotos=_previewMediaPhotos - In the implementation block
+(float)labelWidthForFrameWidth:(float)arg1 ;
+(id)titleStyledStringWithText:(id)arg1 ;
+(float)thumbnailWidthForFrameWidth:(float)arg1 ;
+(float)cellWidthForFrameWidth:(float)arg1 ;
+(float)sideImageWidth;
+(float)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(float)arg3 andThumbnails:(id)arg4 ;
-(id)defaultBackgroundImage;
-(id)highlightedBackgroundImage;
-(id)previewMedia;
-(CGRect)tapTargetFrame;
-(UIImageView *)sideImageView;
-(IGShareThumbnailView *)thumbnailViews;
-(NSArray *)previewMediaPhotos;
-(void)setPreviewMediaPhotos:(NSArray *)arg1 ;
-(id)defaultBackgoundImageForSameUser;
-(id)defaultBackgoundImageNotForSameUser;
-(id)highlightedBackgoundImageForSameUser;
-(id)highlightedBackgoundImageNotForSameUser;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(void)setThumbnailViews:(IGShareThumbnailView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(IGCoreTextView *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end

