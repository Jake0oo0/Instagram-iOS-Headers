
#import <Instagram/FBSDKWebDialogDelegate.h>

@protocol FBSDKAppGroupAddDialogDelegate;
@class FBSDKWebDialog, FBSDKAppGroupContent, NSString;

@interface FBSDKAppGroupAddDialog : NSObject <FBSDKWebDialogDelegate> {

	FBSDKWebDialog* _webDialog;
	id<FBSDKAppGroupAddDialogDelegate> _delegate;
	FBSDKAppGroupContent* _content;

}

@property (assign,nonatomic,__weak) id<FBSDKAppGroupAddDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSDKAppGroupContent * content;                                    //@synthesize content=_content - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
-(char)canShow;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKAppGroupAddDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKAppGroupAddDialogDelegate>)delegate;
-(FBSDKAppGroupContent *)content;
-(void)setContent:(FBSDKAppGroupContent *)arg1 ;
@end

