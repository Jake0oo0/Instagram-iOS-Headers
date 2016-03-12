
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGCountdownTimerDelegate.h>

@protocol IGSMSConfirmationControllerDelegate;
@class NSString, NSTimer, IGCountdownTimer, UIView, IGCoreTextView, IGStringStyle, IGConfirmPhoneSettings;

@interface IGSMSConfirmationController : NSObject <IGCoreTextLinkHandler, IGCountdownTimerDelegate> {

	char _canResendSMS;
	id<IGSMSConfirmationControllerDelegate> _delegate;
	NSString* _phoneNumber;
	NSTimer* _resendSMSTimer;
	IGCountdownTimer* _robocallTimer;
	UIView* _coreTextViewContainer;
	IGCoreTextView* _resendCodeCoreTextView;
	IGCoreTextView* _changePhoneNumberCoreTextView;
	IGStringStyle* _stringStyle;
	float _coreTextViewWidth;
	float _coreTextViewHeight;
	IGConfirmPhoneSettings* _confirmPhoneSettings;
	int _numSMSResends;

}

@property (assign,nonatomic,__weak) id<IGSMSConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSTimer * resendSMSTimer;                                             //@synthesize resendSMSTimer=_resendSMSTimer - In the implementation block
@property (nonatomic,retain) IGCountdownTimer * robocallTimer;                                     //@synthesize robocallTimer=_robocallTimer - In the implementation block
@property (nonatomic,retain) UIView * coreTextViewContainer;                                       //@synthesize coreTextViewContainer=_coreTextViewContainer - In the implementation block
@property (nonatomic,retain) IGCoreTextView * resendCodeCoreTextView;                              //@synthesize resendCodeCoreTextView=_resendCodeCoreTextView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * changePhoneNumberCoreTextView;                       //@synthesize changePhoneNumberCoreTextView=_changePhoneNumberCoreTextView - In the implementation block
@property (nonatomic,retain) IGStringStyle * stringStyle;                                          //@synthesize stringStyle=_stringStyle - In the implementation block
@property (assign,nonatomic) float coreTextViewWidth;                                              //@synthesize coreTextViewWidth=_coreTextViewWidth - In the implementation block
@property (assign,nonatomic) float coreTextViewHeight;                                             //@synthesize coreTextViewHeight=_coreTextViewHeight - In the implementation block
@property (nonatomic,retain) IGConfirmPhoneSettings * confirmPhoneSettings;                        //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
@property (assign,nonatomic) int numSMSResends;                                                    //@synthesize numSMSResends=_numSMSResends - In the implementation block
@property (assign,nonatomic) char canResendSMS;                                                    //@synthesize canResendSMS=_canResendSMS - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)invalidateTimer;
-(void)timer:(id)arg1 didFireWithSecondsLeft:(int)arg2 ;
-(void)continueTimer;
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(id)initWithPhoneNumber:(id)arg1 confirmPhoneSettings:(id)arg2 stringStyle:(id)arg3 ;
-(void)configureWithSize:(CGSize)arg1 ;
-(UIView *)coreTextViewContainer;
-(void)setConfirmPhoneSettings:(IGConfirmPhoneSettings *)arg1 ;
-(void)resendTimerFired:(id)arg1 ;
-(void)setCanResendSMS:(char)arg1 ;
-(char)canResendSMS;
-(void)resetResendTimer;
-(float)coreTextViewWidth;
-(void)setCoreTextViewWidth:(float)arg1 ;
-(void)setCoreTextViewHeight:(float)arg1 ;
-(IGStringStyle *)stringStyle;
-(void)setupIGCoreTextViewsWithMaximumFontSize:(float)arg1 ;
-(IGCoreTextView *)resendCodeCoreTextView;
-(IGCoreTextView *)changePhoneNumberCoreTextView;
-(int)numSMSResends;
-(IGCountdownTimer *)robocallTimer;
-(void)invalidateResendTimer;
-(void)setupIGCoreTextViewsWithFontSize:(float)arg1 ;
-(float)coreTextViewHeight;
-(id)getResendFooterWithFontSize:(float)arg1 ;
-(id)getRobocallStyledStringForSecondsRemaining:(int)arg1 withFontSize:(float)arg2 ;
-(NSTimer *)resendSMSTimer;
-(void)setResendSMSTimer:(NSTimer *)arg1 ;
-(void)setNumSMSResends:(int)arg1 ;
-(void)updateRobocallFooterWithSecondsLeft:(int)arg1 ;
-(void)sizeCoreTextViewContainerToFit;
-(void)setRobocallTimer:(IGCountdownTimer *)arg1 ;
-(void)setCoreTextViewContainer:(UIView *)arg1 ;
-(void)setResendCodeCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setChangePhoneNumberCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setStringStyle:(IGStringStyle *)arg1 ;
-(void)setDelegate:(id<IGSMSConfirmationControllerDelegate>)arg1 ;
-(id<IGSMSConfirmationControllerDelegate>)delegate;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

