/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:34 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray;

@interface IGCameraBar : UIView {

	UIImageView* _backgroundImageView;
	NSMutableArray* _barViews;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * barViews;                    //@synthesize barViews=_barViews - In the implementation block
-(void)setIsTranslucent:(char)arg1 ;
-(void)pushView:(id)arg1 animated:(char)arg2 ;
-(void)popViewAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)backgroundImageView;
-(NSMutableArray *)barViews;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

