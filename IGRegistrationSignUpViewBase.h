/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGRegistrationSignUpViewBaseDelegate;
@class IGFacebookButton, UIView, IGCoreTextView, NSLayoutConstraint, NSArray, NSMutableArray;

@interface IGRegistrationSignUpViewBase : UIView {

	char _bottomConstraintNeedsUpdate;
	char _superviewConstraintsNeedUpdate;
	IGFacebookButton* _facebookButton;
	UIView* _inputContainer;
	IGCoreTextView* _termView;
	id<IGRegistrationSignUpViewBaseDelegate> _delegate;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _inputContainerBottomConstraints;
	NSMutableArray* _superviewConstraints;

}

@property (nonatomic,readonly) IGFacebookButton * facebookButton;                                   //@synthesize facebookButton=_facebookButton - In the implementation block
@property (nonatomic,readonly) UIView * inputContainer;                                             //@synthesize inputContainer=_inputContainer - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * termView;                                           //@synthesize termView=_termView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRegistrationSignUpViewBaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                 //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSArray * inputContainerBottomConstraints;                             //@synthesize inputContainerBottomConstraints=_inputContainerBottomConstraints - In the implementation block
@property (assign,nonatomic) char bottomConstraintNeedsUpdate;                                      //@synthesize bottomConstraintNeedsUpdate=_bottomConstraintNeedsUpdate - In the implementation block
@property (nonatomic,retain) NSMutableArray * superviewConstraints;                                 //@synthesize superviewConstraints=_superviewConstraints - In the implementation block
@property (assign,nonatomic) char superviewConstraintsNeedUpdate;                                   //@synthesize superviewConstraintsNeedUpdate=_superviewConstraintsNeedUpdate - In the implementation block
+(char)requiresConstraintBasedLayout;
-(UIView *)inputContainer;
-(IGFacebookButton *)facebookButton;
-(void)setupFacebookButton;
-(void)setupInputContainer;
-(void)setupTermView;
-(IGCoreTextView *)termView;
-(void)setSuperviewConstraints:(NSMutableArray *)arg1 ;
-(void)setSuperviewConstraintsNeedUpdate:(char)arg1 ;
-(NSMutableArray *)superviewConstraints;
-(char)bottomConstraintNeedsUpdate;
-(NSLayoutConstraint *)bottomConstraint;
-(char)superviewConstraintsNeedUpdate;
-(void)setBottomConstraintNeedsUpdate:(char)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInputContainerBottomConstraints:(NSArray *)arg1 ;
-(NSArray *)inputContainerBottomConstraints;
-(void)setBottomConstraintConstant:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGRegistrationSignUpViewBaseDelegate>)arg1 ;
-(id<IGRegistrationSignUpViewBaseDelegate>)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)updateConstraints;
@end

