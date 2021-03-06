
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKWebDialogViewDelegate.h>

@protocol FBSDKWebDialogDelegate;
@class UIView, FBSDKWebDialogView, NSString, NSDictionary;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate> {

	UIView* _backgroundView;
	FBSDKWebDialogView* _dialogView;
	char _deferVisibility;
	id<FBSDKWebDialogDelegate> _delegate;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (assign,nonatomic) char deferVisibility;                                    //@synthesize deferVisibility=_deferVisibility - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKWebDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                 //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(void)setDeferVisibility:(char)arg1 ;
-(id)_generateURL:(id*)arg1 ;
-(id)_findWindow;
-(char)_showWebView;
-(void)_completeWithResults:(id)arg1 ;
-(void)_deviceOrientationDidChangeNotification:(id)arg1 ;
-(void)_updateViewsWithScale:(float)arg1 alpha:(float)arg2 animationDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_applicationFrameForOrientation;
-(CGAffineTransform)_transformForOrientation;
-(void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialogView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogViewDidCancel:(id)arg1 ;
-(void)webDialogViewDidFinishLoad:(id)arg1 ;
-(char)deferVisibility;
-(void)_addObservers;
-(void)_removeObservers;
-(char)show;
-(void)setDelegate:(id<FBSDKWebDialogDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKWebDialogDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)_cancel;
-(void)_failWithError:(id)arg1 ;
-(void)_dismissAnimated:(char)arg1 ;
@end

