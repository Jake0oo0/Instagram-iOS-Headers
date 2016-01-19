/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGRegistrationSignUpViewBase.h>
#import <Instagram/IGTextFieldDelegate.h>

@class IGTextField, UILabel, UIButton, UIView, NSString;

@interface IGRegistrationSignUpView : IGRegistrationSignUpViewBase <IGTextFieldDelegate> {

	char _hasSetConstraints;
	IGTextField* _emailField;
	UILabel* _separatorLabel;
	UIButton* _nextButton;
	UIView* _separatorLine;

}

@property (nonatomic,retain) IGTextField * emailField;              //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) UILabel * separatorLabel;              //@synthesize separatorLabel=_separatorLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                 //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                //@synthesize separatorLine=_separatorLine - In the implementation block
@property (assign,nonatomic) char hasSetConstraints;                //@synthesize hasSetConstraints=_hasSetConstraints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextButtonTapped;
-(UILabel *)separatorLabel;
-(IGTextField *)emailField;
-(char)hasSetConstraints;
-(void)setHasSetConstraints:(char)arg1 ;
-(void)setConstraintsForCenterOfView:(id)arg1 toMatchCenterOfView:(id)arg2 ;
-(void)setConstraintsForFrameOfView:(id)arg1 toMatchFrameOfView:(id)arg2 ;
-(void)proceedWithSignUpWithKeyboard:(char)arg1 ;
-(void)setEmailField:(IGTextField *)arg1 ;
-(void)setSeparatorLabel:(UILabel *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)updateConstraints;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

