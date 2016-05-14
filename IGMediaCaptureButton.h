/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@protocol IGMediaCaptureButtonDelegate;
@class CAShapeLayer;

@interface IGMediaCaptureButton : UIButton {

	id<IGMediaCaptureButtonDelegate> _delegate;
	int _mediaType;
	CAShapeLayer* _enabledOverlayLayer;
	CAShapeLayer* _baseLayer;
	CAShapeLayer* _innerLayer;
	CAShapeLayer* _whiteLayer;

}

@property (assign,nonatomic,__weak) CAShapeLayer * enabledOverlayLayer;                     //@synthesize enabledOverlayLayer=_enabledOverlayLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * baseLayer;                               //@synthesize baseLayer=_baseLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * innerLayer;                              //@synthesize innerLayer=_innerLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * whiteLayer;                              //@synthesize whiteLayer=_whiteLayer - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaCaptureButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
-(void)setBaseLayer:(CAShapeLayer *)arg1 ;
-(void)setInnerLayer:(CAShapeLayer *)arg1 ;
-(void)setWhiteLayer:(CAShapeLayer *)arg1 ;
-(void)setEnabledOverlayLayer:(CAShapeLayer *)arg1 ;
-(void)internalSetEnabled:(char)arg1 ;
-(CAShapeLayer *)baseLayer;
-(CAShapeLayer *)innerLayer;
-(CAShapeLayer *)whiteLayer;
-(CAShapeLayer *)enabledOverlayLayer;
-(void)onCaptureButtonTouchedUpInside;
-(void)onCaptureButtonTouchedDown;
-(void)onCaptureButtonTouchedUpOutside;
-(void)onCaptureButtonDraggedOutside;
-(void)onCaptureButtonTouchCancelled;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMediaCaptureButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGMediaCaptureButtonDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(id)baseColor;
@end

