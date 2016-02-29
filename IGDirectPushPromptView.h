/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectPushPromptViewDelegate;
@class IGCoreTextView, UIButton, IGButton;

@interface IGDirectPushPromptView : UIView {

	id<IGDirectPushPromptViewDelegate> _delegate;
	IGCoreTextView* _titleLabel;
	IGCoreTextView* _messageLabel;
	UIButton* _dismissButton;
	IGButton* _settingsButton;

}

@property (assign,nonatomic,__weak) id<IGDirectPushPromptViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCoreTextView * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGCoreTextView * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGButton * settingsButton;                                       //@synthesize settingsButton=_settingsButton - In the implementation block
+(float)heightForTitle:(id)arg1 andMessage:(id)arg2 withWidth:(float)arg3 ;
+(id)titleStyledStringForText:(id)arg1 ;
+(id)messageStyledStringForText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andTitle:(id)arg2 andMessage:(id)arg3 andButtonText:(id)arg4 ;
-(void)dismissButtonTapped;
-(void)settingsButtonTapped;
-(void)setSettingsButton:(IGButton *)arg1 ;
-(void)setDelegate:(id<IGDirectPushPromptViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectPushPromptViewDelegate>)delegate;
-(IGCoreTextView *)titleLabel;
-(IGCoreTextView *)messageLabel;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(UIButton *)dismissButton;
-(void)setMessageLabel:(IGCoreTextView *)arg1 ;
-(IGButton *)settingsButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end

