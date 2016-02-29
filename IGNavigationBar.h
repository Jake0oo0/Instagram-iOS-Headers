/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:43 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIView, UIColor;

@interface IGNavigationBar : UINavigationBar {

	float _overlayAlpha;
	UIView* _contentOverlayView;

}

@property (assign,nonatomic) UIColor * overlayColor; 
@property (assign,nonatomic) float overlayAlpha;                       //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (nonatomic,retain) UIView * contentOverlayView;              //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
-(void)setDisplaysShadow:(char)arg1 animated:(char)arg2 ;
-(void)setOverlayAlpha:(float)arg1 ;
-(float)overlayAlpha;
-(void)setContentOverlayView:(UIView *)arg1 ;
-(UIView *)contentOverlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
@end

