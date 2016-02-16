/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Instagram/IGTextFieldDelegate.h>

@class UIButton, IGRetroRegistrationTextField, IGCoreTextView, UIImageView, UILabel, NSString;

@interface IGRetroRegistrationSMSVerificationScrollView : UIScrollView <IGTextFieldDelegate> {

	UIButton* _nextButton;
	IGRetroRegistrationTextField* _codeField;
	IGCoreTextView* _resendCodeTextView;
	IGCoreTextView* _requestSupportTextView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIButton * nextButton;                                 //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * codeField;              //@synthesize codeField=_codeField - In the implementation block
@property (nonatomic,retain) IGCoreTextView * resendCodeTextView;                   //@synthesize resendCodeTextView=_resendCodeTextView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * requestSupportTextView;               //@synthesize requestSupportTextView=_requestSupportTextView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                            //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGRetroRegistrationTextField *)codeField;
-(IGCoreTextView *)resendCodeTextView;
-(IGCoreTextView *)requestSupportTextView;
-(void)updateDescriptionWithPhoneNumber:(id)arg1 ;
-(void)setCodeField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setResendCodeTextView:(IGCoreTextView *)arg1 ;
-(void)setRequestSupportTextView:(IGCoreTextView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

