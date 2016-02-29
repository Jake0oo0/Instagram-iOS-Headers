/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSDate;

@interface IGAlertHUD : UIView {

	UILabel* _textLabel;
	UIActivityIndicatorView* _spinner;
	NSDate* _suppressAlertsUntil;

}
+(id)sharedHUD;
-(void)onAppResumed:(id)arg1 ;
-(void)showWithProgressIndicatorInView:(id)arg1 animated:(char)arg2 ;
-(char)canDisplay;
-(void)sizeToFitView:(id)arg1 ;
-(void)showInView:(id)arg1 animated:(char)arg2 ;
-(void)hideAfterDelay:(float)arg1 animated:(char)arg2 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 animated:(char)arg4 ;
-(void)doShowWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 animated:(char)arg4 force:(char)arg5 ;
-(void)hideAfterShowingText:(id)arg1 animated:(char)arg2 ;
-(void)showWithProgressIndicatorInView:(id)arg1 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 ;
-(void)hideAfterShowingText:(id)arg1 ;
-(void)hideAnimated:(char)arg1 ;
-(void)hide;
-(void)dealloc;
-(id)init;
@end

