/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIVisualEffectView;

@interface IGTrackBarView : UIView {

	float _trackValue;
	UIView* _trackView;
	UIView* _trackValueView;
	UIView* _backgroundView;
	UIView* _effectiveContentView;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,readonly) UIView * trackView;                                 //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,readonly) UIView * trackValueView;                            //@synthesize trackValueView=_trackValueView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * effectiveContentView;                      //@synthesize effectiveContentView=_effectiveContentView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) float trackValue;                                     //@synthesize trackValue=_trackValue - In the implementation block
-(char)isVisualEffectEnabled;
-(UIView *)trackView;
-(UIView *)trackValueView;
-(UIView *)effectiveContentView;
-(float)trackValue;
-(void)setBackgroundOverlayVisualEffect:(id)arg1 ;
-(void)setBackgroundOverlayAlpha:(float)arg1 ;
-(void)setBackgroundOverlayColor:(id)arg1 ;
-(void)setTrackValue:(float)arg1 ;
-(void)setTrackValueTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(void)setTrackTintColor:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
@end

