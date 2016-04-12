/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, IGHybridWebViewHeaderViewConfig, UIButton, UILabel, UIActivityIndicatorView;

@interface IGHybridWebViewHeaderView : UIView {

	NSString* _screenID;
	IGHybridWebViewHeaderViewConfig* _config;
	UIButton* _leftButton;
	UILabel* _titleLabel;
	UIButton* _rightButton;
	UIActivityIndicatorView* _spinner;
	/*^block*/id _leftButtonCompletion;
	/*^block*/id _rightButtonCompletion;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * screenID;                                     //@synthesize screenID=_screenID - In the implementation block
@property (nonatomic,readonly) IGHybridWebViewHeaderViewConfig * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                 //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;                                //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                     //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) id leftButtonCompletion;                                   //@synthesize leftButtonCompletion=_leftButtonCompletion - In the implementation block
@property (nonatomic,copy) id rightButtonCompletion;                                  //@synthesize rightButtonCompletion=_rightButtonCompletion - In the implementation block
-(void)setUpViewHierarchy;
-(id)initWithFrame:(CGRect)arg1 withConfig:(id)arg2 ;
-(void)setUpLeftButtonWithImage:(id)arg1 onTapAction:(/*^block*/id)arg2 ;
-(void)setScreenID:(NSString *)arg1 ;
-(void)setIsRightButtonHidden:(char)arg1 ;
-(void)setUpRightButtonWithString:(id)arg1 onTapAction:(/*^block*/id)arg2 ;
-(void)setIsRightButtonActive:(char)arg1 ;
-(void)onLeftButtonTapped:(id)arg1 ;
-(void)onRightButtonTapped:(id)arg1 ;
-(id)leftButtonCompletion;
-(id)rightButtonCompletion;
-(void)setLeftButtonCompletion:(id)arg1 ;
-(void)setRightButtonCompletion:(id)arg1 ;
-(NSString *)screenID;
-(void)showSpinner:(char)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(UIActivityIndicatorView *)spinner;
-(IGHybridWebViewHeaderViewConfig *)config;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

