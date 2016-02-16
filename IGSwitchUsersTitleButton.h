/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
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

