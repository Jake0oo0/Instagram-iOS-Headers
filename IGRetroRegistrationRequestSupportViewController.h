
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGRetroRegistrationRequestSupportDelegate;
@class IGRetroRegistrationRequestSupportView, UITapGestureRecognizer, NSString, NSIndexPath;

@interface IGRetroRegistrationRequestSupportViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, IGTextFieldDelegate, UITextViewDelegate> {

	char _submitting;
	id<IGRetroRegistrationRequestSupportDelegate> _delegate;
	IGRetroRegistrationRequestSupportView* _requestSupportView;
	UITapGestureRecognizer* _tapGesture;
	NSString* _twoFactorIdentifier;
	NSString* _username;
	NSIndexPath* _checkedAccountTypeIndexPath;
	NSIndexPath* _checkedReasonIndexPath;
	unsigned _requestSupportType;
	CGRect _activeFrame;

}

@property (nonatomic,retain) IGRetroRegistrationRequestSupportView * requestSupportView;                 //@synthesize requestSupportView=_requestSupportView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                        //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,copy) NSString * twoFactorIdentifier;                                               //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * username;                                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSIndexPath * checkedAccountTypeIndexPath;                                  //@synthesize checkedAccountTypeIndexPath=_checkedAccountTypeIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * checkedReasonIndexPath;                                       //@synthesize checkedReasonIndexPath=_checkedReasonIndexPath - In the implementation block
@property (assign,nonatomic) CGRect activeFrame;                                                         //@synthesize activeFrame=_activeFrame - In the implementation block
@property (assign,nonatomic) unsigned requestSupportType;                                                //@synthesize requestSupportType=_requestSupportType - In the implementation block
@property (assign,nonatomic) char submitting;                                                            //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationRequestSupportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(id)initWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 ;
-(void)keyboardWillHide;
-(void)setRequestSupportView:(IGRetroRegistrationRequestSupportView *)arg1 ;
-(IGRetroRegistrationRequestSupportView *)requestSupportView;
-(unsigned)requestSupportType;
-(id)descriptionForRequestSupportForm;
-(void)supportButtonTapped;
-(id)selectedAccountType;
-(id)selectedReasonType;
-(void)requestSupportSuccessHandler:(id)arg1 ;
-(void)requestSupportFailureHandler:(id)arg1 ;
-(NSIndexPath *)checkedAccountTypeIndexPath;
-(NSIndexPath *)checkedReasonIndexPath;
-(void)setCheckedAccountTypeIndexPath:(NSIndexPath *)arg1 ;
-(void)setCheckedReasonIndexPath:(NSIndexPath *)arg1 ;
-(void)updateRequestSupportButton;
-(void)setRequestSupportType:(unsigned)arg1 ;
-(NSString *)twoFactorIdentifier;
-(void)setTwoFactorIdentifier:(NSString *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationRequestSupportDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGRetroRegistrationRequestSupportDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(CGRect)activeFrame;
-(void)setActiveFrame:(CGRect)arg1 ;
-(void)backButtonTapped;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillShow:(id)arg1 ;
@end

