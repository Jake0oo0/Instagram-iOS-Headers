/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface IGCameraFocusIndicator : UIView {

	CADisplayLink* _reviewDisplayLink;
	int _frame;
	int _stopIn;
	UIColor* _indicatorColor;

}

@property (nonatomic,retain) UIColor * indicatorColor;              //@synthesize indicatorColor=_indicatorColor - In the implementation block
-(void)stopRenderLoop;
-(void)startRenderLoop;
-(UIColor *)indicatorColor;
-(void)completeAnimation;
-(void)startAnimatingAtPoint:(CGPoint)arg1 ;
-(void)setIndicatorColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopAnimating;
@end

