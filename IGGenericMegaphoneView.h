/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGGenericMegaphoneViewDelegate;
@class IGGenericMegaphone, IGCoreTextView, IGImageView, UIButton, UIView, IGButton;

@interface IGGenericMegaphoneView : UIView {

	IGGenericMegaphone* _megaphone;
	id<IGGenericMegaphoneViewDelegate> _delegate;
	IGCoreTextView* _titleView;
	IGCoreTextView* _messageView;
	IGImageView* _sideImageView;
	UIButton* _dismissButton;
	UIView* _lineView;
	IGButton* _buttonOne;
	IGButton* _buttonTwo;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (assign,nonatomic,__weak) id<IGGenericMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * titleView;                                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * messageView;                                  //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,readonly) IGImageView * sideImageView;                                   //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                      //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIView * lineView;                                             //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) IGButton * buttonOne;                                            //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) IGButton * buttonTwo;                                            //@synthesize buttonTwo=_buttonTwo - In the implementation block
+(Class)styleClassForButton:(id)arg1 ;
-(void)configureWithMegaphone:(id)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(IGImageView *)sideImageView;
-(IGCoreTextView *)messageView;
-(void)layoutButtons;
-(void)didSelectButton:(id)arg1 ;
-(IGButton *)buttonOne;
-(IGButton *)buttonTwo;
-(void)didDismiss;
-(void)layoutSideImageView;
-(void)layoutDismissButton;
-(void)layoutTextView;
-(float)buttonHorizontalLeftPadding;
-(float)buttonVerticalPadding;
-(float)rightTextPadding;
-(float)buttonHorizontalRightPadding;
-(float)leftTextPadding;
-(void)didSelectButtonOne;
-(id)buttonForMegaphoneButton:(id)arg1 action:(SEL)arg2 ;
-(void)setButtonOne:(IGButton *)arg1 ;
-(void)didSelectButtonTwo;
-(void)setButtonTwo:(IGButton *)arg1 ;
-(id)styledStringWithText:(id)arg1 font:(id)arg2 defaultColor:(id)arg3 ;
-(void)configButtonsForMegaphone:(id)arg1 ;
-(void)configLabelsForMegaphone:(id)arg1 ;
-(void)configImageViewForMegaphone:(id)arg1 ;
-(void)configDismissButtonForMegaphone:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGGenericMegaphoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGenericMegaphoneViewDelegate>)delegate;
-(IGCoreTextView *)titleView;
-(UIView *)lineView;
-(UIButton *)dismissButton;
@end

