/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIVisualEffectView, UITabBar;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;
	UIVisualEffectView* _blurView;
	UIVisualEffectView* _vibrancyView;
	UITabBar* _tabBarForBlurEffect;

}

@property (nonatomic,readonly) NSMutableArray * tabButtons;                    //@synthesize tabButtons=_tabButtons - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurView;                  //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * vibrancyView;              //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,readonly) UITabBar * tabBarForBlurEffect;                 //@synthesize tabBarForBlurEffect=_tabBarForBlurEffect - In the implementation block
-(NSMutableArray *)tabButtons;
-(void)addTabButton:(id)arg1 ;
-(UITabBar *)tabBarForBlurEffect;
-(UIVisualEffectView *)vibrancyView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIVisualEffectView *)blurView;
@end

