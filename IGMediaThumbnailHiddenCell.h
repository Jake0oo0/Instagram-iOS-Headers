/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGBlurredImageView, CALayer, UIImageView;

@interface IGMediaThumbnailHiddenCell : UICollectionViewCell {

	IGBlurredImageView* _blurredImageView;
	CALayer* _touchDownLayer;
	UIImageView* _hiddenIcon;

}

@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;              //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (nonatomic,readonly) CALayer * touchDownLayer;                           //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
@property (nonatomic,readonly) UIImageView * hiddenIcon;                           //@synthesize hiddenIcon=_hiddenIcon - In the implementation block
-(IGBlurredImageView *)blurredImageView;
-(void)configureCellWithPost:(id)arg1 ;
-(CALayer *)touchDownLayer;
-(UIImageView *)hiddenIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)setupSubviews;
@end

