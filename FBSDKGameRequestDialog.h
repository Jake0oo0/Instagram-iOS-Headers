
#import <Instagram/FBSDKWebDialogDelegate.h>

@protocol FBSDKGameRequestDialogDelegate;
@class FBSDKWebDialog, FBSDKGameRequestContent, NSString;

@interface FBSDKGameRequestDialog : NSObject <FBSDKWebDialogDelegate> {

	char _dialogIsFrictionless;
	FBSDKWebDialog* _webDialog;
	char _frictionlessRequestsEnabled;
	id<FBSDKGameRequestDialogDelegate> _delegate;
	FBSDKGameRequestContent* _content;

}

@property (assign,nonatomic,__weak) id<FBSDKGameRequestDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSDKGameRequestContent * content;                                 //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) char frictionlessRequestsEnabled;                                //@synthesize frictionlessRequestsEnabled=_frictionlessRequestsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(void)webDialogDidCancel:(id)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(char)canShow;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(id)_actionTypeNameForActionType:(unsigned)arg1 ;
-(id)_filtersNameForFilters:(unsigned)arg1 ;
-(char)frictionlessRequestsEnabled;
-(void)setFrictionlessRequestsEnabled:(char)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKGameRequestDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKGameRequestDialogDelegate>)delegate;
-(FBSDKGameRequestContent *)content;
-(void)setContent:(FBSDKGameRequestContent *)arg1 ;
-(void)_cleanUp;
@end

