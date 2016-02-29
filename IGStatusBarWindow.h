/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>

@protocol IGStatusBarWindowDelegate;
@class NSObject, UILabel;

@interface IGStatusBarWindow : UIWindow {

	NSObject*<IGStatusBarWindowDelegate> _tapDelegate;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                  //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)rootViewController;
-(void)setTapDelegate:(NSObject*<IGStatusBarWindowDelegate>)arg1 ;
-(NSObject*<IGStatusBarWindowDelegate>)tapDelegate;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

