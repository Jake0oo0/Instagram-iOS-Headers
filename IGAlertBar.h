/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGAlertBar : UIView {

	char _suppressAlerts;
	char _usingOffset;
	char _displaying;
	char _hideAutomatically;
	UIImageView* _alertView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) char usingOffset;                   //@synthesize usingOffset=_usingOffset - In the implementation block
@property (nonatomic,retain) UIImageView * alertView;              //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) char displaying;                      //@synthesize displaying=_displaying - In the implementation block
@property (assign,nonatomic) char hideAutomatically;               //@synthesize hideAutomatically=_hideAutomatically - In the implementation block
+(id)sharedAlertBar;
+(float)alertBarDisplayInterval;
-(void)setHideAutomatically:(char)arg1 ;
-(char)displaying;
-(void)showWithText:(id)arg1 style:(int)arg2 ;
-(void)didShowAlertView;
-(void)didHideAlertView;
-(void)onAppBackgrounded:(id)arg1 ;
-(void)onAppResumed:(id)arg1 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4 barHeight:(float)arg5 textTopPadding:(float)arg6 ;
-(void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4 barHeight:(float)arg5 textTopPadding:(float)arg6 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4 ;
-(char)hideAutomatically;
-(void)reEnableAlerts;
-(void)showWithText:(id)arg1 style:(int)arg2 height:(float)arg3 textTopPadding:(float)arg4 ;
-(void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3 ;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 barHeight:(float)arg4 textTopPadding:(float)arg5 ;
-(char)usingOffset;
-(void)setDisplaying:(char)arg1 ;
-(void)setAlertView:(UIImageView *)arg1 ;
-(UIImageView *)alertView;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

