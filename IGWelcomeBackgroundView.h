/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, IGAnimatedRainbowView, UIImageView, IGKVOHandle;

@interface IGWelcomeBackgroundView : UIView {

	UILabel* _messageLabel;
	IGAnimatedRainbowView* _rainbowView;
	UIImageView* _logoView;
	IGKVOHandle* _messageLabelTextObserver;
	IGKVOHandle* _messageLabelAttributedTextObserver;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UILabel * messageLabel;                                        //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) IGAnimatedRainbowView * rainbowView;                           //@synthesize rainbowView=_rainbowView - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                        //@synthesize logoView=_logoView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                           //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelTextObserver;                        //@synthesize messageLabelTextObserver=_messageLabelTextObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelAttributedTextObserver;              //@synthesize messageLabelAttributedTextObserver=_messageLabelAttributedTextObserver - In the implementation block
-(IGAnimatedRainbowView *)rainbowView;
-(void)setRainbowView:(IGAnimatedRainbowView *)arg1 ;
-(void)setMessageLabelTextObserver:(IGKVOHandle *)arg1 ;
-(void)setMessageLabelAttributedTextObserver:(IGKVOHandle *)arg1 ;
-(IGKVOHandle *)messageLabelTextObserver;
-(IGKVOHandle *)messageLabelAttributedTextObserver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)messageLabel;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end

