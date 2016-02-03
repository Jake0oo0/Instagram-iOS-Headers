/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:18 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, NSMutableArray;

@interface IGAudioIndicatorButton : UIButton {

	UIView* _indicatorBars;
	NSMutableArray* _bars;

}

@property (nonatomic,retain) UIView * indicatorBars;              //@synthesize indicatorBars=_indicatorBars - In the implementation block
@property (nonatomic,retain) NSMutableArray * bars;               //@synthesize bars=_bars - In the implementation block
+(void)showAudioIndicator:(id)arg1 soundOn:(char)arg2 ;
-(void)animateSoundOn;
-(void)animateSoundOff;
-(void)startAnimationForSoundOn:(char)arg1 ;
-(UIView *)indicatorBars;
-(void)setIndicatorBars:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(NSMutableArray *)bars;
-(void)setBars:(NSMutableArray *)arg1 ;
@end

