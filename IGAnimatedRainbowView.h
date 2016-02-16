/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, CAGradientLayer, CAAnimation;

@interface IGAnimatedRainbowView : UIView {

	float _animationDuration;
	CALayer* _rotatingBackgroundLayer;
	CALayer* _rotatingOverlayLayer;
	CAGradientLayer* _overlayLayerMask;
	CALayer* _rotatingOverlayContainerLayer;
	CAAnimation* _animationPosition;

}

@property (assign,nonatomic) float animationDuration;                              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) CALayer * rotatingBackgroundLayer;                    //@synthesize rotatingBackgroundLayer=_rotatingBackgroundLayer - In the implementation block
@property (nonatomic,retain) CALayer * rotatingOverlayLayer;                       //@synthesize rotatingOverlayLayer=_rotatingOverlayLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * overlayLayerMask;                   //@synthesize overlayLayerMask=_overlayLayerMask - In the implementation block
@property (nonatomic,retain) CALayer * rotatingOverlayContainerLayer;              //@synthesize rotatingOverlayContainerLayer=_rotatingOverlayContainerLayer - In the implementation block
@property (nonatomic,retain) CAAnimation * animationPosition;                      //@synthesize animationPosition=_animationPosition - In the implementation block
-(CALayer *)rotatingBackgroundLayer;
-(void)pauseLayer:(id)arg1 ;
-(CALayer *)rotatingOverlayLayer;
-(CAAnimation *)animationPosition;
-(void)resumeLayer:(id)arg1 ;
-(CALayer *)rotatingOverlayContainerLayer;
-(CAGradientLayer *)overlayLayerMask;
-(void)setRotatingBackgroundLayer:(CALayer *)arg1 ;
-(void)setRotatingOverlayLayer:(CALayer *)arg1 ;
-(void)setOverlayLayerMask:(CAGradientLayer *)arg1 ;
-(void)setRotatingOverlayContainerLayer:(CALayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimationDuration:(float)arg1 ;
-(void)setAnimationPosition:(CAAnimation *)arg1 ;
-(float)animationDuration;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)setUpLayers;
@end

