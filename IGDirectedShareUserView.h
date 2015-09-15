/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UIImageView, IGDynamics1D;

@interface IGDirectedShareUserView : UIView {

	IGProfilePictureImageView* _imageView;
	UIImageView* _seenStateImageView;
	IGDynamics1D* _transformAnimator;

}

@property (nonatomic,retain) IGProfilePictureImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * seenStateImageView;                     //@synthesize seenStateImageView=_seenStateImageView - In the implementation block
@property (assign,nonatomic,__weak) IGDynamics1D * transformAnimator;              //@synthesize transformAnimator=_transformAnimator - In the implementation block
-(UIImageView *)seenStateImageView;
-(IGDynamics1D *)transformAnimator;
-(void)setSeenStateImageViewVisible:(char)arg1 animated:(char)arg2 ;
-(void)setTransformAnimator:(IGDynamics1D *)arg1 ;
-(void)setSeenState:(int)arg1 animated:(char)arg2 ;
-(void)setSeenStateImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(IGProfilePictureImageView *)imageView;
-(void)setImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setDimmed:(char)arg1 animated:(char)arg2 ;
@end

