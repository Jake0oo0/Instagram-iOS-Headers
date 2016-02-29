/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UILabel;

@interface IGSwitchUsersTitleButton : UIButton {

	UIView* _caretView;
	UILabel* _usernameLabel;

}

@property (nonatomic,retain) UIView * caretView;                   //@synthesize caretView=_caretView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;              //@synthesize usernameLabel=_usernameLabel - In the implementation block
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(UIView *)caretView;
-(void)setCaretView:(UIView *)arg1 ;
@end

