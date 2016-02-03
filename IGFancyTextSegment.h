/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:22 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class UILabel, UIImageView, UIColor;

@interface IGFancyTextSegment : UIControl {

	char _showFallbackIcon;
	UILabel* _titleLabel;
	UIImageView* _fallbackIconView;
	UIColor* _activeColor;
	UIColor* _inactiveColor;
	UIColor* _activeFallbackIconColor;
	UIColor* _inactiveFallbackIconColor;

}

@property (assign,nonatomic) char showFallbackIcon;                            //@synthesize showFallbackIcon=_showFallbackIcon - In the implementation block
@property (nonatomic,readonly) UIImageView * fallbackIconView;                 //@synthesize fallbackIconView=_fallbackIconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * activeColor;                            //@synthesize activeColor=_activeColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveColor;                          //@synthesize inactiveColor=_inactiveColor - In the implementation block
@property (nonatomic,retain) UIColor * activeFallbackIconColor;                //@synthesize activeFallbackIconColor=_activeFallbackIconColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveFallbackIconColor;              //@synthesize inactiveFallbackIconColor=_inactiveFallbackIconColor - In the implementation block
-(void)setActiveColor:(UIColor *)arg1 ;
-(void)setInactiveColor:(UIColor *)arg1 ;
-(void)setActiveFallbackIconColor:(UIColor *)arg1 ;
-(void)setInactiveFallbackIconColor:(UIColor *)arg1 ;
-(id)initWithTitle:(id)arg1 fontSize:(float)arg2 fallbackIcon:(id)arg3 ;
-(char)titleTooWideToFit;
-(void)setShowFallbackIcon:(char)arg1 ;
-(UIImageView *)fallbackIconView;
-(char)showFallbackIcon;
-(void)updateHighlightedColor;
-(UIColor *)activeColor;
-(UIColor *)inactiveColor;
-(UIColor *)activeFallbackIconColor;
-(UIColor *)inactiveFallbackIconColor;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)setSelected:(char)arg1 ;
@end

