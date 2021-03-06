

@protocol FBSDKAppInviteDialogDelegate;
@class UIViewController, FBSDKAppInviteContent;

@interface FBSDKAppInviteDialog : NSObject {

	UIViewController* _fromViewController;
	id<FBSDKAppInviteDialogDelegate> _delegate;
	FBSDKAppInviteContent* _content;

}

@property (assign,nonatomic,__weak) UIViewController * fromViewController;                  //@synthesize fromViewController=_fromViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKAppInviteDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSDKAppInviteContent * content;                                 //@synthesize content=_content - In the implementation block
+(id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3 ;
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(char)canShow;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(char)_canShowNative;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKAppInviteDialogDelegate>)arg1 ;
-(id<FBSDKAppInviteDialogDelegate>)delegate;
-(UIViewController *)fromViewController;
-(FBSDKAppInviteContent *)content;
-(void)setContent:(FBSDKAppInviteContent *)arg1 ;
@end

