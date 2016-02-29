/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface IGTrackBarView : UIView {

	float _trackValue;
	UIColor* _trackTintColor;
	UIColor* _trackValueTintColor;
	UIView* _trackView;
	UIView* _trackValueView;

}

@property (assign,nonatomic) float trackValue;                           //@synthesize trackValue=_trackValue - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackValueTintColor;              //@synthesize trackValueTintColor=_trackValueTintColor - In the implementation block
@property (nonatomic,readonly) UIView * trackView;                       //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,readonly) UIView * trackValueView;                  //@synthesize trackValueView=_trackValueView - In the implementation block
-(void)setTrackValueTintColor:(UIColor *)arg1 ;
-(UIColor *)trackValueTintColor;
-(void)setTrackValue:(float)arg1 ;
-(UIView *)trackView;
-(UIView *)trackValueView;
-(float)trackValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)trackTintColor;
-(void)setTrackTintColor:(UIColor *)arg1 ;
@end

